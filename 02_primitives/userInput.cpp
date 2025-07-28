#include <iostream>
#include <string>

using namespace std;

int main() {    
    
    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n";

    getline(cin, userTea);

    cout << "how may cups of " << userTea << "would you like to have? \n ";

    cin >> teaQuantity;

    cout << userTea << endl;
    cout << teaQuantity;

    return 0;

}