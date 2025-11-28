#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    for(int i = 1; i <= 10; i++) {
        if(n * i > 50) break;
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}