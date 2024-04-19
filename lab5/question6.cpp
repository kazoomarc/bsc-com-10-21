#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int vowelsCount(string str);
int wordsCount(string str);
string reverseWords(string str);
string capitalizeSecond(string str);


int main(){

    //open text file
    fstream myFile("text.txt");
    
    // assign content to string fileData;
    string fileData;

    if (myFile.is_open()){
        getline(myFile, fileData);
        cout<<"og message: "<< fileData<<endl;
        cout<<"Number of vowels: "<<vowelsCount(fileData)<<endl;
    }

    //calculate number of vowels > output

    //calculate number of words > output

    //reverse test file > output

    //capitalize second letter of each word > output
    return 0;
}

int vowelsCount(string str){
    int counter = 0;

    for(int i = 0; i < str.length();i++){
        switch(toupper(str[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                counter++;
                break;
            default:
                break;
        }
    }

    return counter;
}