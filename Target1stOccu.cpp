#include<iostream>
using namespace std;
int findtarget(int a[],int s){
    int target=a[0];
    for(int i=0;i<s;i++){
        if(a[i]==target){
            return i;
        }
    
    }
    return -1;
}
int main(){
    int arr[3]={9,5,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    int Ans=findtarget(arr,s);
    cout<<"targrt found at index....."<<Ans<<endl;
    return 0;
}