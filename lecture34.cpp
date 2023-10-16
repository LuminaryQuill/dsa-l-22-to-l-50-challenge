// // string reverse using Recursion
// #include<iostream>
// using namespace std;

// void reverse(string &s,int i,int j){
//     // base case 
//     if(i>j){
//         return;
//     }
// swap(s[i],s[j]);
// reverse(s,i+1,j-1);
// }

// int main() {
//     string s="ritvik";
//     int i=0;int count=0;
//     while(s[i]!='\0'){
//         count++;i++;
//     }

//     reverse(s,0,count-1);
//     cout<<s<<endl;
//     return 0;
// }


// // check palindrome using recursion
// #include<iostream>
// using namespace std;

// bool check_palindrome(string str,int i,int j){
//     // base case
//     if(i>j){
//         return true;
//     }
//     if(str[i]!=str[j]){
//        return false;
//     }
//     else{
//         return check_palindrome(str,i+1,j-1);
//     }

// }

// int main(){
//     string str="mad";
//     // int i=0;
//     // int count=0;
//     // while(str[i]!='\0'){
//     //     count++;i++;
//     // }
//     int n=str.length()-1;
//     bool ans=check_palindrome(str,0,n);
//     if(ans){
//         cout<<"It is a palindrome"<<endl;
//     }
//     else{
//         cout<<"IT is not a palindrome"<<endl;
//     }

//     return 0;
// }

// // // a to the power b using recursion
// #include<iostream>
// using namespace std;

// int power(int a,int b){
//     // base case
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     // recursive call
//     int ans=power(a,b/2);

//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }

// }

// int main() {
//     int a;
//     int b;
//     cout<<"Enter the value of a nad b: "<<endl;
//     cin>>a;
//     cin>>b;
//     cout<<" "<<power(a,b);
//     return 0;
// }


// Bubble sort  using recursion
#include<iostream>
using namespace std;

int rec_bubblesort(int *arr,int n){
    // base case 
    if(n==0 || n==1){
        return ;
    }

    // ek case solve karo baki apne aap ho jayega
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    // recursive call
    return rec_bubblesort(arr,n-1);

}

int main() {

    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    rec_bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}