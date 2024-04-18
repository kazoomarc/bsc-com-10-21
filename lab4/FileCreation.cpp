#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    //create and open a text file
    string line;
    fstream myFile;
    myFile.open("example.txt");

    if (myFile.is_open()){
        while(getline(myFile,line)){
            cout << line <<"\n";
        }
        myFile.close();
    }

    return 0;
}