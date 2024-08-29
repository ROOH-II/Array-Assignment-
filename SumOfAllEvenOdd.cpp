#include<iostream>
using namespace std;
int sumOfEvenOdd(int a[],int s){
    int sumEven=0;
    int sumOdd=0;
    
    for(int i=0;i<=s;i++){
        if(a[i] %2==0){
            sumEven+=a[i];
        }
        else{
            sumOdd+=a[i];
        }
    }
    cout<<"sum of ALL Even  elements:"<<sumEven<<endl;
    cout<<"sum of All Odd  elements:"<<sumOdd<<endl;
}
int main(){
    int a[4]={9,6,4,3};
    int s=sizeof(a)/sizeof(a[0]);
    sumOfEvenOdd(a,s);
    return 0;
    
}

