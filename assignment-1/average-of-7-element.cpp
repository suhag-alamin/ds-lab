// Make an array with 7 elements and print the average of all the elements on the array    

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += arr[i];
    }
    cout << sum / 7 << endl;
    return 0;
}