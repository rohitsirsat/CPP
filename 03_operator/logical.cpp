#include <iostream>

using namespace std;

int main() {

    bool isStudent;
    int teaCups;

    cout << "Are you a student? (1 for yes and 0 for no)";
    cin >> isStudent;

    cout << "How many cups of tea have you purchased? ";
    cin >> teaCups;

    if (isStudent || teaCups > 15)
    {
        cout << "DISCOUNT";
    }
    else
    {
        cout << "NO DISCOUNT";
    }
    
    
    return 0;
}