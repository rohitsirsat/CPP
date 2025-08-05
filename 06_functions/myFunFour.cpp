#include <iostream>

using namespace std;


int main() {

    //lamda (like functions without name)
    [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    }(4);   // "immediately invoked lambda expression"

    // This approach is useful if you want to call the lambda multiple times or pass it as an argument to other functions.   
     auto makeTea = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    makeTea(4); // Call the lambda using the variable 

    return 0;
}