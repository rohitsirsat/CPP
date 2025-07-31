#include <iostream>

using namespace std;

int main() {

    int teaBags;

    cout << "Enter the num of tea bags you have: ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        teaBags += 5;

        cout << "Dudeeee: " << teaBags  << endl;
    }
    
        cout << "OOkkkk: " << teaBags  << endl;    

    return 0;
}