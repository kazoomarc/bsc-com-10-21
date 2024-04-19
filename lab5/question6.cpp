#include<iostream>
#include<fstream>
using namespace std;

int vowelsCount();
int wordsCount();
int reverseWords();
string capitalizeSecond();


int main(){

    //open text file
    fstream myFile("text.txt");
    
    // assign content to string fileData;
    string fileData;

    if (myFile.is_open()){
        getline(myFile, fileData);
        cout<<fileData<<endl;
    }

    //calculate number of vowels > output

    //calculate number of words > output

    //reverse test file > output

    //capitalize second letter of each word > output
    return 0;
}