#include<iostream>
using namespace std;
void convertUppercase(char arr[],int L){
    for(int i=0;i<L;i++){
        if(arr[i]>='a'&&arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';
        }
    }
}
int main(){
    char arr[]="success is a journey not a destination";
    int L=sizeof(arr)/sizeof(arr[0]);
    cout<<"original Array..."<<arr<<endl;
    convertUppercase(arr,L);
    cout<<"Convert Array..."<<arr<<endl;
}
