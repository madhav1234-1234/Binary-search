// // count 1s

// // Naive
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,0,0,1,1,1,1};
//     int n=sizeof(arr)/sizeof(int);
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             count++;
//         }
//     }
//     cout<<count;
// }

#include <iostream>
using namespace std;
int count(int arr[], int n,int start,int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            start = mid + 1;
        }
        else if (arr[mid] == 1)
        {
            if (mid==0 || arr[mid - 1] != arr[mid])
            {
                return n-mid;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    int ans=count(arr,n,0,n-1);
    cout<<ans;
}