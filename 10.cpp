// // Two pointer approach

// // Given an unsorted array and a number x,we need to find if there is a pair in the array with sum egual to x
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,5,9,2,8,10,11};
//     int x=17;
//     int n=sizeof(arr)/sizeof(int);
//     bool flag=true;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if((arr[i]+arr[j]==x)){
//                 cout<<"yes";
//                 flag=false;
//             }
//         }
//     }
//     if(flag==true){
//         cout<<"no";
//     }
// }

// Optimised approach-For sorted arrays
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,8,9,10,11};
    int n=sizeof(arr)/sizeof(int);
    int x=17;
    int low=0,high=n-1;
    bool flag=true;
    while(low<high){
        int sum=arr[low]+arr[high];
        if(sum==x){
            cout<<"true";
            flag=false;
            break;
        }
        if(sum>x){
            high--;
        }if(sum<x){
            low++;
        }
    }
    if(flag==false){
        cout<<"false";
    }
    return 0;
}