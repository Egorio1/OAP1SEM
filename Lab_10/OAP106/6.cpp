#include <iostream>
using namespace std;
int remDupl(char arr[], int size) {
    int newSize = 0; 
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize; 
}
int main() {
    char arr[] = { 'a', 'b', 'a', 'c', 'b', 'd', 'a' };
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = remDupl(arr, size);

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}