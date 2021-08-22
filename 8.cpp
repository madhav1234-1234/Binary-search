// Search in a sorted rotated array

//Naive approach-linear search

// Optimised approach
#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[low]<arr[mid]){
           if(arr[mid]>x && x>arr[low]){
              high=mid-1;
           }else{
               low=mid+1;
           }
        }else{
            if(arr[mid]<x && x<arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    // int arr[]={10,20,30,40,50,8,9};
    int arr[]={100,200,300,10,20};
    int n=sizeof(arr)/sizeof(int);
    int x;
    cin>>x;
    int ans=search(arr,n,x);
    cout<<ans;
    return 0;
}