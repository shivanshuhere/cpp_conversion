#include<iostream>
using namespace std;

void decToBin (int x) {
    int rem = 0, div = 0, count = 0;
    int arr[32];
    while (x > 0) {
        rem = x % 2;
        div = x / 2;
        x = div;
        arr[count] = rem;
        count++;
    }

    for (int i = count-1; i >= 0; i--) {
        cout << arr[i];
    }
}
int main() {
    decToBin(100);
    return 0;
}