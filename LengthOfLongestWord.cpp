#include <iostream>
using namespace std;
int lengthoflongestword(char arr[]) {
    int maxLength = 0;
    int currentLength = 0;
    for (int i=0;arr[i]!='\0';i++) {
        if (arr[i] == ' ') {
            maxLength = max(maxLength,currentLength);
            currentLength = 0;
        } else {
            currentLength++;
        }
    }

    maxLength = max(maxLength,currentLength);

    

    return maxLength;
}

int main() {
    char arr[] ="i love programming";
    int length =lengthoflongestword(arr);
    cout<<"Length of the longest word: "<<length<<endl;
    return 0;
}
