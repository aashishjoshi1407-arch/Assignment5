#include <iostream>
using namespace std;
int main() {
    char op;
    double a, b;
    while(true) {
        cout << "Enter operator (+ - * /) or q to quit: ";
        cin >> op;
        if(op == 'q') break;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        switch(op) {
            case '+': cout << a + b << endl; break;
            case '-': cout << a - b << endl; break;
            case '*': cout << a * b << endl; break;
            case '/': if(b != 0) cout << a / b << endl; else cout << "Error" << endl; break;
            default: cout << "Invalid operator" << endl;
        }
    }
    return 0;
}