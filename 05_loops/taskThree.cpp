#include <iostream>
#include <string>

using namespace std;

int main() {

    // for loop

    int teaCups;

    cout << "Enter the num of cups: " << endl;
    cin >> teaCups;

    for(int i = 1; i <= teaCups; i++) {
        cout << "Brewing cup " << i << " of tea..." << endl;
    }

    return 0;
    
}