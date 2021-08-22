// Majority elements
#include <iostream>
using namespace std;
int main()
{
    int arr[]={8,3,4,8,8};
    int n=sizeof(arr)/sizeof(int);
    int ans=0,count=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==arr[ans]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            ans=i;
            count=1;
        }
    }
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[ans]){
            temp++;
        }
    }
    if(temp>n/2){
        cout<<"Majority"<<" "<<arr[ans];
    }
    else{
        cout<<"No majority element";
    }
}