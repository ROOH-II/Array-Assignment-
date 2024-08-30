#include <iostream>
using namespace std;
void reverseVowels(char a[]) {
    int left = 0;
    int right = 0;

    while (a[right]!='\0'){
        right++;
    }
    right--;

    while (left<right){
        if (!(a[left]=='a'||a[left]=='e'||a[left]=='i'||a[left]=='o'||a[left] =='u'||a[left]=='A'||a[left]=='E'||a[left]=='I'||a[left]=='O'||a[left]=='U')) {
            left++;
        } else if (!(a[right]=='a'||a[right]=='e'||a[right]=='i'||a[right]=='o'||a[right]=='u'||a[right]=='A'||a[right]=='E'||a[right]=='I'||a[right]=='O'||a[right]=='U')) {
            right--;
        } else {
            char temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            left++;
            right--;
        }
    }
}

int main() {
    char a[]="hello";
    reverseVowels(a);
    cout << "reverse vowels: "<<a<<endl;
    return 0;
}