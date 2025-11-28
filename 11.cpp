#include <iostream>
using namespace std;
int main() {
    int n;
    long long fact = 1;
    cout << "Enter number: ";
    cin >> n;
    int i = 1;
    while(i <= n) {
        fact *= i;
        i++;
    }
    cout << fact << endl;
    return 0;
}