#include<iostream>
using namespace std;
int findseclargest(int a[],int s){
    int seclargest=a[0];
    for(int i=0;i<s;i++){
        if(a[i]>seclargest)
        {
            seclargest=a[i];
        }
        return seclargest;
   }   
}
 int main(){
    int a[4]={14,13,9,35};
    int s=sizeof(a)/sizeof(a[0]);
    int largest=findseclargest(a,s);
    cout<<"sec largest element is...."<<largest<<endl;
    return 0;
 }
