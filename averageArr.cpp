#include<iostream>
using namespace std;
int averageArr(int arr[],int size){
    int average=arr[0];
    for(int i=1;i<=size;i++){
        int Average=arr[0]/size;
    }
    return average;
    
}
int main(){
    int arr[5]={1,2,3,4,5,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int total=averageArr(arr,size);
    cout<<"average of arr elements"<<total<<endl;
    return 0;
}
