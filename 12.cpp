#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 1, c;
    int terms = 15;
    int i = 0;
    while(i < terms) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    cout << endl;
    return 0;
}