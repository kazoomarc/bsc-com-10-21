#include<iostream>
#include<string>

using namespace std;

int main(){

    //create and initialize array
    string stringArr[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    //loop into StringArr
    // output element that start with 'B'

    int arrayLength = sizeof(stringArr) / sizeof(stringArr[0]);
    for(int i =0; i < arrayLength;i++){
        // take first letter
        const string element = stringArr[i];
        const char firstLetter = element[0];

        //compare it to B
        //print
        if(firstLetter == 'B'){
            cout<<element<<endl;
        }

    }
    return 0;
}