// Make an array with 7 elements and print sum of the 3rd and 5th element

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;
    sum = arr[2] + arr[4];
    cout << sum << endl;
    return 0;
}