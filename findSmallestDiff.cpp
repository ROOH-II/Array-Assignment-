#include<iostream>
using namespace std;
int findSmallDiff(int a[],int s){
    int smalldiff;
    int pair1,pair2;
    for (int i=1;i<s;i++){
    int diff=a[i]-a[i-1];
        if (diff<smalldiff){
            smalldiff=diff;
            pair1=a[i-1];
            pair2=a[i];
        } 
    }
    cout <<"pair with smallest difference:"<<pair1<<","<<pair2<<endl;
}
int main(){
    int pair1,pair2;
    int a[4] = {2,4,9,8};
    int s=sizeof(a)/sizeof(a[0]);
    findSmallDiff(a,s);
    return 0;
}