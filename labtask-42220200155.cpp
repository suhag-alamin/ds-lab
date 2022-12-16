/* make an array of any size. Then shift all the values one index right.
Use the circular array concept. ( box[(i+1)%arrya_size] = box[ i ] )
input : 1, 2, 3, 4, 5
output : 5, 1, 2, 3, 4 */

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp = arr[4];
    for (int i = 4; i >= 0; i--) {
        arr[i] = arr[(i+4)%5];
    }
    arr[0] = temp;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}