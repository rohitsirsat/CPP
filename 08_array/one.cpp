#include <iostream>

using namespace std;

int main(){
 int chaiTemperatures[5] = {30, 32, 31, 29, 28};
 
 cout << "Temperatures recorded in the chai: ";

 for(int i = 0;  i < 5; i++) {
    cout << chaiTemperatures[i] << " degrees \n";
 }

    return 0;

}