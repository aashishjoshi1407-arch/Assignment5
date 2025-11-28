#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(n < 2) {
        cout << "Not prime" << endl;
        return 0;
    }
    bool prime = true;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }
    cout << (prime ? "Prime" : "Not prime") << endl;
    return 0;
}