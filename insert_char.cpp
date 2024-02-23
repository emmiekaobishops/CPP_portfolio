// Name: Emmie Kao
// Date: Winter 2024
// Purpose: Separates the characters in a string with a single character

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    string user_input;
    string insertion;
    vector<char> final;
    string user_output;
    cout << "Give me some text: ";
    getline(cin, user_input);
    fflush(stdin);

    cout << "Character to insert: ";
    cin >> insertion;
    fflush(stdin);

    for (int i = 0; i < user_input.size() + 1; i++) { 
        cout << user_input[i - 1] << insertion; 
    } 

}