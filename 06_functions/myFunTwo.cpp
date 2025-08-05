#include <iostream>

using namespace std;


void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured cups " << cups << endl;
}

// pass by value (no change)
int main() {

    int cups = 2;
    pourChai(cups);
    cout << "Total cups " << cups << endl;

    return 0;
}