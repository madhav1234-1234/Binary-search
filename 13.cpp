// // // // Repeating element-Only one repeating element
// // // // Naive-1

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[]={0,2,1,3,2,2};
// // //     int n=sizeof(arr)/sizeof(int);
// // //     int count=1;
// // //     bool flag=true;
// // //     for(int i=0;i<n-1;i++){
// // //         for(int j=i+1;j<n;j++){
// // //             if(arr[i]==arr[j]){
// // //                 cout<<arr[i];
// // //                 flag=false;
// // //             }
// // //         }
// // //     }
// // //     if(flag==true){
// // //         cout<<-1;
// // //     }


// // // Naive Approach-2
// // #include<iostream>
// // #include<algorithm>
// // using namespace std;
// // int main(){
// //     int arr[]={0,2,1,3,2,2};
// //     int n=sizeof(arr)/sizeof(int);
// //     bool flag=true;
// //     sort(arr,arr+n);
// //     for(int i=1;i<n;i++){
// //         if(arr[i]==arr[i-1]){
// //             cout<<arr[i];
// //             flag=false;
// //         }
// //     }
// //     if(flag==true){
// //         cout<<"-1";
// //     }

// // }    

// // Naive approach-3
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,2,1,3,2,9};
//     int n=sizeof(arr)/sizeof(int);
//     bool flag=true;
//     int temp[100]={0};
//     for(int i=0;i<n;i++){
//         temp[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         if(temp[i]>1){
//             cout<<i;
//             flag=false;
//         }
//     }
//     if(flag==true){
//         cout<<"-1";
//     }

// }   

// Optimised approach
// floyd's cycle detection algorithm     
                                         
                                         
// 0<=max(arr)<=n-2
#include<iostream>
using namespace std;
int findrepeating(int arr[],int n){
     int slow=arr[0],fast=arr[0];
     do{
         slow=arr[slow];
         fast=arr[arr[fast]];
     }while(slow!=fast);
     fast=arr[0];
     while(slow!=fast){
         slow=arr[slow];
         fast=arr[fast];
     }
     return slow;
}
int main(){
    int arr[]={5,2,1,3,2,2};
    int n=sizeof(arr)/sizeof(int);
    int ans=findrepeating(arr,n);
    cout<<ans;
}    