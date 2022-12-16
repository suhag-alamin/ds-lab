// Make an array with 7 elements and print sum of the change the value of 3rd and 5th element to 36


#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    arr[2] = 36;
    arr[4] = 36;
    sum = arr[2] + arr[4];
    cout << sum << endl;
    return 0;
}