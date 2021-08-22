// // Given a sorted array and a sum,find if there is a triplet with given sum

// // Naive approach
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={2,3,4,8,9,20,40};
//    int n=sizeof(arr)/sizeof(int);
//    int sum=32;
//    bool flag=true;
//    for(int i=0;i<n-2;i++){
//          for(int j=i+1;j<n-1;j++){
//              for(int k=j+1;k<n;k++){
//                  if(arr[i]+arr[j]+arr[k]==sum){
//                      cout<<"yes"<<endl;
//                      flag=false;
//                      break;
//                  }
//              }
//          }
//    }
//    if(flag==true){
//        cout<<"no";
//    }
// }

// Optimised
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,8,9,20,40};
    int n=sizeof(arr)/sizeof(int);
    int x=32;
    bool flag=true;
    for(int i=0;i<n-2;i++){
    int low=i+1,high=n-1;
        while(low<high){
            int sum=arr[i]+arr[low]+arr[high];
            if(sum==x){
                cout<<"yes"<<endl;
                flag=false;
                break;
            }
            else if(sum>x){
                high--;
            }else{
                low++;
            }
        }
    }
    if(flag==true){
        cout<<"no";
    }
}