#include <iostream>
using namespace std;
int main() {
    int choice = 9;
    switch(choice) {
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        default: cout << "No match" << endl;
    }
    return 0;
}