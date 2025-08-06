#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    // data members (attributes)
        string teaName;
        int servings;
        vector<string> ingredients;

        // member function
        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string ingridient : ingredients){
                cout << ingridient << " ";
            };
            cout << endl;
        }

};

int main() {

    Chai chaiOne;

    chaiOne.teaName = "Masala tea";
    chaiOne.servings = 3;
    chaiOne.ingredients = {"water", "masala", "honey", "tea"};

    chaiOne.displayChaiDetails();

    return 0;
}