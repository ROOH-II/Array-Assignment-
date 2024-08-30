#include<iostream>
using namespace std;
int CountVowels(char arr[],int L){
    int vowelcount=0;
    for(int i=0;i<L;i++){
        char ch=arr[i];
        if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i'){
            vowelcount++;
        }
        
    }
    return vowelcount;
}
int main(){
    char arr[]="extreme fear can neither fight nor fly";
    int L=sizeof(arr)/sizeof(arr[0]);
    int vowelcount=CountVowels(arr,L);
    cout<<"Count the number of vowels:"<<vowelcount<<endl;
    return 0;

}