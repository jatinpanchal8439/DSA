#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int arr[] = {5, 3, 8, 1, 2}; // Example array
    // int n = sizeof(arr) / sizeof(arr[0]);
    int size =6;
    int smallest = INT_MAX;
    for (int i = 0;i< size;i++){
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest element in the array is: " << smallest << endl;
    return 0;
}