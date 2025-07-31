#include <iostream>

using namespace std;

int main() {

    int teaCups;

    cout << "Enter the num of cups: ";
    cin >> teaCups;

    if(teaCups > 20 ){
        cout << "GOLD BADGE!!!";
    } else if (teaCups > 10 && teaCups <= 20)
    {
        cout << "SILVER BADGE!!";
    } else {
        cout << "NO BADGE!";
    }

    return 0;
}