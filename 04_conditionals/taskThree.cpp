#include <iostream>


using namespace std;

int main() {

    int teaCups;

    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the num of tea cups";
    cin >> teaCups;

    totalPrice = pricePerCup * teaCups;

    if(teaCups > 20) {
        discount = 0.20;
    } else if(teaCups >= 10 && teaCups <=20) {
        discount = 0.10;
    } else {
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is: " << totalPrice << endl;


}