// // Search in an infinite sized array

// // Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,10,15,20,40,80,90,100,100,120,500};
//     int x;
//     cin>>x;
//     int i=1;
//     while(true){
//         if(arr[i]==x){
//             cout<<i;
//             break;
//         }else if(arr[i]>x){
//             cout<<-1;
//             break;
//         }
//         i++;
//     }
//     return 0;

// }

// Optimized approach

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
int search1(int arr[],int x){
    int i=1;
    while(true){
        if(arr[i]==x){
            return i;
        }else if(arr[i]<x){
           i=i*2;
        }else{
            int ans=search(arr,i/2,i,x);
            return ans;
        }

    }
    return -1;
}
int main(){
    int arr[]={10,10,15,20,40,80,90,100,500,600};
    int x;
    cin>>x;
    int ans=search1(arr,x);
    cout<<ans;
}