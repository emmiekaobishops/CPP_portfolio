// Name: Emmie Kao
// Date: Winter 2024
// Purpose: Divides textbook savings among other products

#include <iostream>
#include <string>
using namespace std;


int main() {
    float savings;
    string to_buy;
    float new_cost;
    cout << "Enter textbook savings: ";
    cin >> savings;
    fflush(stdin); // empty characters that are after the integer
    cout << "What would you like to buy instead of a book? ";
    getline(cin, to_buy);
    cout << "Enter item cost: ";
    cin >> new_cost;
    fflush(stdin);

    // divides textbook savings by cost of product to give amount of products
    // user can purchase
    int num_to_buy = savings / new_cost;

    cout << "savings: " << savings << "cost: " << new_cost << "num to buy: " << num_to_buy;

    cout << "You could buy " << num_to_buy << " " << to_buy << "(s) with \
the textbook savings.";
    return 0;
}