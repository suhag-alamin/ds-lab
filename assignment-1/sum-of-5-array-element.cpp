// Make an array with 5 elements and print the sum of all the elements on the array

#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += a[i];
    }
    cout << sum << std::endl;
}