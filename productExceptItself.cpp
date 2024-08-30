#include <iostream>
using namespace std;

void  productExceptItSelf(int arr[], int s,int result[]) {
    int leftProduct = 1;
    int rightProduct = 1;

    for (int i=0;i<s;i++) {
       result[i]= leftProduct;
        leftProduct *= arr[i];
    }
    for (int i=s-1;i>=0;i--) {
        result[i] = rightProduct;
        rightProduct *= arr[i];
    }
}

int main() {
    int arr[]={1,2,3,4,5};
    int s= sizeof(arr)/sizeof(arr[0]);
    int result[s];
    productExceptItSelf(arr, s,result);
    for(int i=0;i<s;i++)
    {  
      cout<<result[i]<<" ";
     }
    return 0;
}
