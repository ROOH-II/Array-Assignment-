#include<iostream>
using namespace std;
int findMostfrequent(int arr[],int s){
    int Mostfrequent=arr[0];
    int count=0;
    for(int i=0;i<s;i++){
        if(arr[i]==count){
            Mostfrequent=arr[i]
        }

    }
    return Mostfrequent;
}
int main(){
    int arr[5]={3,6,8,3,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    int Ans=findMostfrequent(arr,s);
    cout<<"Most frequent elements is..."<<Ans<<endl;
    return 0;
}