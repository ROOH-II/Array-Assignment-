#include<iostream>
using namespace std;
int reverseArr(int a[],int s) {
    int start=0;
    int end=s-1;

    while (start<end) {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main() {
    int a[4] ={0,9,8,7};
    int s=sizeof(a)/sizeof(a[0]);
    cout<< "ORIGINAL ARRAY...."<<"  ";
    for (int i=0;i<s;i++) {
        cout<<a[i]<<"  ";
    }
    reverseArr(a,s);
    cout<<"REVERSE ARRAY...."<<"  ";
    for (int i=0;i<s;i++){
        cout<<a[i]<<"  ";
    }

     return 0;
}


    
