#include<iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter a value between 5 and 10: ";
    cin >> input;

    while (!(input >= 5 && input <= 10)) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "\nSorry You have entered an invalid number please try again:";
        cin >> input;
        cout << endl;
    }

    printf("Your input value (%d) has been accepted\n", input);
    return 0;
}