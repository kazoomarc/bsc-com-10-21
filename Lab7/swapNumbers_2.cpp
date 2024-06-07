#include<iostream>
using namespace std;


// swap numbers with pointers
void swapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl; //varA is 25
    cout << "varB before swap: " << varB << endl; //varb is 100


    swapNumbers(&varA, &varB);

    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}
