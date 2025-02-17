#include <iostream>
using namespace std;

int main() {
    cout << "Eisig Liang - 16 Feb. 2025";
    
    while (true) {
        int number;
        cout << "\nInput number: ";
        cin >> number;

        if (not (number == 1))
            cout << "Negation case triggered.\n";

        if (number == 2 or number == 4)
            cout << "Disjunction case triggered.\n";

        if (number > 1 and number < 5)
            cout << "Conjunction case triggered.\n";

        if (number) {
            cout << "Tautology case as an implication triggered.\n";
        }
    }
}