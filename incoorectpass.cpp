#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int num;
    bool validInput = false;

    while (!validInput) {
        cout << "Enter an integer: ";
        cin >> num;

        // Check for type mismatch of the input
        if (cin.fail()) {
            cout << "Invalid input! Expected an integer."
                 << endl;
            // Clear the failbit and ignore the remaining
            // input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),
                       '\n');
        }
        else {
            // Input is valid
            validInput = true;
        }
    }

    cout << "You entered: " << num << endl;

    return 0;
}