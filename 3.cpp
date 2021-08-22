// // // Last occurences
// // // Naive approach
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[]={10,15,20,20,40,40};
// //     int n=sizeof(arr)/sizeof(int);
// //     int x=20;
// //     bool flag=true;
// //     for(int i=n-1;i>=0;i--){
// //         if(arr[i]==x){
// //             cout<<i;
// //             flag=false;
// //             break;
// //         }
// //     }
// //     if(flag==true){
// //         cout<<-1;
// //     }
// // }

// // Optimised approach-iterative
// #include<iostream>
// using namespace std;
// int search(int arr[],int n,int x){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>x){
//            high=mid-1;
//         }else if(arr[mid]<x){
//             low=mid+1;
//         }
//         else{
//             if(mid==n-1 || arr[mid+1]!=arr[mid]){
//                 return mid;
//             }else{
//                 low=mid+1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,15,20,20,40,40};
//     int n=sizeof(arr)/sizeof(int);
//     int x=20;
//     int ans=search(arr,n,x);
//     cout<<ans;
// }

// Optimised approach-recursive
#include<iostream>
using namespace std;
int search(int arr[],int start,int end,int n,int x){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]>x){
        return search(arr,0,mid-1,n,x);
    }else if(arr[mid]<x){
        return search(arr,mid+1,end,n,x);
    }else{
        if(mid==n-1 || arr[mid+1]!=arr[mid] ){
           return mid;
        }else{
            return search(arr,mid+1,end,n,x);
        }
    }
}
int main(){
    int arr[]={10,15,20,20,40,40};
    int n=sizeof(arr)/sizeof(int);
    int x=20;
    int ans=search(arr,0,n-1,n,x);
    cout<<ans;
    return 0;
}