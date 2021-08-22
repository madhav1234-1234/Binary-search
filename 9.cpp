// // Find a peak element

// // Naive approach
// #include<iostream>
// using namespace std;
// int findPeak(int arr[],int n){
    //    if(n==1){
        //    return arr[0];
    //    }
//     if(arr[1]<arr[0]){
//        return arr[0];
//     }
//     if(arr[n-1]>arr[n-1]){
//         return arr[n-1];
//     }
//     for(int i=1;i<n;i++){
//         if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main(){
//     // int arr[]={5,10,20,15,7};
//     // int arr[]={10,20,15,5,23,90,67};
//     int arr[]={80,70,60};
//     int n=sizeof(arr)/sizeof(int) ;   
//     int ans=findPeak(arr,n);
//     cout<<ans;
//     return 0;
// }


// optimised approach
#include<iostream>
using namespace std;
int findpeak(int arr[],int n){
    int low=0,high=n-1;
    if(arr[1]<arr[0]){
       return arr[0];
    }
    if(arr[n-1]>arr[n-1]){
        return arr[n-1];
    }
    while(low<=high){
        int mid=low+(high-low)/2;
        if((arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1])){ 
            return arr[mid];
        }
        if(arr[mid]<arr[mid-1]){
             high=mid-1;
        }else{
            low=mid+1;
        }
    }
}
int main(){
    // int arr[]={10,20,15,5,23,90,67};
    // int arr[]={5,10,20,15,7};
    int arr[]={80,70,60};
    int n=sizeof(arr)/sizeof(int);
    int ans=findpeak(arr,n);
    cout<<ans;
    return 0;
}