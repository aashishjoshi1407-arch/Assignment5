#include <iostream>
using namespace std;
int main() {
    int arr[] = {3,7,12,5,9,15};
    int n = 6;
    int target = 5;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Not found" << endl;
    return 0;
}