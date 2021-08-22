// // Binary search-Iterative

// #include<iostream>
// using namespace std;
// int search(int arr[],int start,int end,int x){
//     while(start<end){
//     int mid=start+(end-start)/2;
//     if(arr[mid]==x){
//         return mid;
//     }
//     else if(arr[mid]>x){
//         end=mid-1;
//     }
//     else{
//         start=mid+1;
//     }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     // int x=20;
//     int x=35;
//     int n=sizeof(arr)/sizeof(int);
//     int ans=search(arr,0,n-1,x);
//     cout<<ans;
//     return 0;
// }

// Binary search-recursive
#include<iostream>
using namespace std;
int search(int arr[],int start,int end,int x){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        search(arr,start,mid-1,x);
    }else{
        search(arr,mid+1,end,x);
    }
}
int main(){
    int arr[]={10,20,30,40,50,70};
    int n=sizeof(arr)/sizeof(int);
    int x=50;
    int ans=search(arr,0,n-1,x);
    cout<<ans;
    return 0;
}