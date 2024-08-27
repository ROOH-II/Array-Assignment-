#include<iostream>
using namespace std;
int productInArr(int arr[],int s){
    int product=arr[0];
    for(int i=1;i<s;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    int arr[4]={4,5,4,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    int ans=productInArr(arr,s);
    cout<<"product of all elements is...."<<ans<<endl;
    return 0;
}