#include <iostream>

using namespace std;

int main() {

    int choice;
    double price;

    cout << "Select your tea\n";
    cout << "1. Green tea\n";
    cout << "2. Lemon tea\n";
    cout << "3. Oolong tea\n";
    cout << "Enter your choice in number: \n";

    cin >> choice;

    switch(choice){
        case 1 : 
            price = 2.0;
            cout << "You selected Green tea. Price: " << price << endl;
            break;
        case 2 : 
            price = 3;
            cout << "You selected Lemon tea. Price: " << price << endl;
            break;
        case 3 :
            price = 4;
            cout << "You selected Oolong tea. Price: " << price << endl;
            break;
        default: 
            cout << "Invalid choice" << endl;
            break;
    }

}