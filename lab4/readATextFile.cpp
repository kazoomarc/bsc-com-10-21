// reading a text file

#include<iostream>
#include<ostream>
#include<string>
using namespace std;

int main(){

    //create and open a text file
    string line;
    ofstream myFile("example.txt");

    if (myFile.is_open()){
        while(getline(myFile,line)){
            cout << line <<"\n";
        }
        myFile.close();
    }else{
        cout << "Unable to open file";
    }

    return 0;
}