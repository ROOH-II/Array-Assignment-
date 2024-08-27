#include<iostream>
using namespace std;
int findMaxArr(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
    }
int main(){
    int arr[3]={12,36,57};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=findMaxArr(arr,size);
    cout<<"maximum element is"<<max<<endl;
    return 0;
    
}