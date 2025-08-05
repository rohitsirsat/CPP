// returnType functionName(parameters) {
    // Function implementation goes here
// }

#include <iostream>
#include <string>

using namespace std;

int checkTemperature(int temperature) {
    return temperature;
};

// declaration of function
void serveChai(int cups);

void makeChai() {
    cout << "Making chai..." << endl;
};

void serveChai(string teaType = "Masala Tea"){
    cout << "Serving " << teaType << endl;
};

int main() {

    int temp = checkTemperature(32);
    cout << temp << endl;

    makeChai();

    serveChai(4);

    return 0;
};

// defination of function
void serveChai(int cups) {
    cout << "Serving " << cups << " cups of chai" << endl;
}
