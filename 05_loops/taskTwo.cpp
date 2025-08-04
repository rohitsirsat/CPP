#include <iostream>
#include <string>

using namespace std;

int main() {

    string response;

    // Do-while Loop
    do
    {
       cout << "Do you want more tea (yes/no): ";
       getline(cin, response);
    } while (response != "no");
    
    
}