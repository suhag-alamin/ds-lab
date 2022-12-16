// Make an array with 5 elements and print them in reverse order


#include <iostream>
using namespace std;


int main() {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--) {
        cout << a[i] << std::endl;
    }
}