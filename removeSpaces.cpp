#include<iostream>
using namespace std;
int removespace(char arr[]){
    int w=0;
    int r=0;
    for(int r=0;arr[r]!='\0';r++){
        if(arr[r]!=' '){
            arr[w++]=arr[r];
        }
    }
    arr[w++]='\0';

}
int main(){
    char arr[]="B O S S";
    removespace(arr);
    cout<<"remove all spaces  "<<arr<<endl;
    return 0;
}