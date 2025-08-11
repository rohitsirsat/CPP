#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += chai[i];
    }
    return total;
}

int main(){

    int cahiServed[7] = {50, 60, 55, 70, 65, 80, 75};

    int total = totalChaiServed(cahiServed, 7);
    cout << "Total chai cups served in the week: " << total << endl;

    return 0;
}