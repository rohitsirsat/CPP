#include <iostream>

using namespace std;

// pass by refrence (change)
void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured cups " << cups << endl;
}


int main() {

    int cups = 2;
    pourChai(cups);
    cout << "Total cups " << cups << endl;

    return 0;
}