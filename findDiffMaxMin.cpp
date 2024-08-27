#include<iostream>
using namespace std;
int findDiffMaxMin(int a[],int s){
    int maxElement = a[0];
    int minElement = a[0];

    for (int i=0;i<s;i++){
        if (a[i] > maxElement) {
            maxElement = a[i];
        } else if (a[i]<minElement) {
            minElement = a[i];
        }
    }

    return maxElement - minElement;
}
int main(){
    int a[3] = {65,89,34};
    int s=sizeof(a)/sizeof(a[0]);
    int diff = findDiffMaxMin(a,s);
    cout <<"Difference between Max and Min:"<<diff<<endl;
    return 0;
}


