// count occurences
// NAIVE
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,20,20,30,50};
    int n=sizeof(arr)/sizeof(int);
    int x=20;
}

// OPTIMISED
#include<iostream>
using namespace std;
int search1(int arr[],int start,int end,int x){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]>x){
        return search1(arr,start,mid-1,x);
    }else if(arr[mid]<x){
         return search1(arr,mid+1,end,x);
    } 
    else {
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        }else{
            return search1(arr,start,mid-1,x);
        }
    }
}
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
    int arr[]={10,15,20,20,20,40,40};
    int n=sizeof(arr)/sizeof(int);
    int x=20;
    int first=search1(arr,0,n-1,x);
    if(first==-1){
        cout<<0;
    }
    cout<<search(arr,0,n-1,n,x)-first+1;
    return 0;
}