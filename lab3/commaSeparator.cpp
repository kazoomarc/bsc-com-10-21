#include<iostream>

using namespace std;

int main(){
    // local variable declaration
    int i,j;

    j = 10;
    i = (j++, j+100, 999+j);

    cout <<"Value of i: "<< i <<endl;
    return 0;
}