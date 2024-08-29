#include<iostream>
using namespace std;
void convertUppercase(char arr[],int Lenght){
    for(int i=0;i<Lenght;i++){
        if(arr[i]>='a'&&arr[i]<='z'){
            arr[i]=arr[i]-'a'+'A';
        }
    }
}
int main(){
    char arr[]="success is a journey not a destination";
    int Lenght=sizeof(arr)/sizeof(arr[0]);
    cout<<"original Array..."<<arr<<endl;
    convertUppercase(arr,Lenght);
    cout<<"Convert Array..."<<arr<<endl;
}
