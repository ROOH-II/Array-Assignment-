#include <iostream>
using namespace std;

void reverseVowels(char arr[]){
    string vowels = "aeiouAEIOU";
    int left = 0;
    int right = 0;
    while(arr[right]!='\0'){
        right++;
    }
    right--;
     while (left < right) {
        if (vowels.find(arr[left]) == arr[left]) 
        {
            left++;
        }
         else if (vowels.find(arr[right]) ==arr[right] )
        {
            right--;
        }

    }
    
}

int main() {
    char arr[] ="hello";

    reverseVowels(arr);

    cout<<"reverse vowels: "<<arr<<endl;

    return 0;
}
