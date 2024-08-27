#include<iostream>
using namespace std;
int countEvenOdd(int arr[],int s)
{
    int Even=arr[0];
    int Odd=arr[0];
    for(int i=0;i<=s;i++)
    {
        if(arr[i] %2 == 0){
            Even++;
        }
     else{
            Odd++;
        }
        
    }
}
int main(){
    
    int arr[6]={2,7,8,5,9,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    int Ans=countEvenOdd(arr,s);
    cout<<"Even elements is...."<<Ans<<endl;
    cout<<"Odd elements is...."<<Ans<<endl;
    return 0;
} 