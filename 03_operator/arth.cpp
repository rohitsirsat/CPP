#include <iostream>

using namespace std;

int main() {

    int cups;
    double pricePerCup, totalPrice, dicountedPrice;

    cout << "Enter num of tea cups: ";
    cin >> cups;

    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    if (totalPrice > 100)
    {
        dicountedPrice = totalPrice - (totalPrice * 0.05);

        cout << "Discounted price is: " << dicountedPrice << endl;

    } else 
    {
        cout << "Total price is: " << totalPrice << endl;
    }

    return 0;
}