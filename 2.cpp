// // // Index of first occurences.

// // // Linear search
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[]={1,10,10,10,20,20,40};
// //     int n=sizeof(arr)/sizeof(int);
// //     int x=20;
// //     bool flag=true;
// //     for(int i=0;i<n;i++){
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

// // Optimised approach-Iterative
// int search(int arr[],int start,int end,int x){
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]>x){
//             end=mid-1;
//         }else if(arr[mid]<x){
//             start=mid+1;
//         }
//         else{
//             if(mid==0 || arr[mid-1]!=arr[mid]){
//                return mid;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//     }
//     return -1;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,10,10,10,20,20,40};
//     int x=20;
//     int n=sizeof(arr)/sizeof(int);
//     int ans=search(arr,0,n-1,x);
//     cout<<ans;
//     return 0;
// }
#include<iostream>
using namespace std;
int search(int arr[],int start,int end,int x){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]>x){
        return search(arr,start,mid-1,x);
    }else if(arr[mid]<x){
         return search(arr,mid+1,end,x);
    } 
    else {
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        }else{
            return search(arr,start,mid-1,x);
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,60,60,70};
    int n=sizeof(arr)/sizeof(int);
    int x=60;
    int ans=search(arr,0,n-1,x);
    cout<<ans;
    return 0;
}