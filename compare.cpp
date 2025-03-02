#include <iostream>
using namespace std;

void checkGreater(int a, int b) {
    if (a > b)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main() {
    int a, b;
    cin >> a >> b;  // Read two numbers
    checkGreater(a, b);  // Call function
    return 0;
}
