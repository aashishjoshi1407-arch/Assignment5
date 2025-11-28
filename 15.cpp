#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, digit, sum;
    cout << "Armstrong numbers between 1 and 500:" << endl;
    for(int i = 1; i <= 500; i++) {
        n = i;
        sum = 0;
        while(n > 0) {
            digit = n % 10;
            sum += pow(digit, 3);
            n /= 10;
        }
        if(sum == i) cout << i << " ";
    }
    cout << endl;
    return 0;
}