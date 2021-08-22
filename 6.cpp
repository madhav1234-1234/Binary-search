// // Square root

// // Naive approach
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     bool flag=true;
//     int i=1;
//     while(i*i<=x){
//         if(i*i==x){
//             cout<<i;
//             flag=false;
//             break;

//         }
//         if(i*i<x){
//             i++;
//         }
//     }
//     if(flag==true){
//         cout<<-1;
//     }
//     return 0;

// }

#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    bool flag=true;
    int low=1,high=x;
    int ans=-1;
    while(low<=high){
       int mid=(low+high)/2;
       int temp=mid*mid;
       if(temp==x){
           cout<<mid;
           flag=false;
           break;
       }
       else if(temp>x){
           high=mid-1;
       }else{
           low=mid+1;
           ans=mid;
       }
    }
    if(flag==true){
    cout<<ans;

    }

}