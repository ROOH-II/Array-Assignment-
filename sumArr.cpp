#include<iostream>
using namespace std;
int sumInArr(int arr[],int size){
    int sum=arr[0];
    for(int i=1; i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int total=sumInArr(arr,size);
    cout<<"sum of element in Arr...."<<total<<endl;
    return 0;
}