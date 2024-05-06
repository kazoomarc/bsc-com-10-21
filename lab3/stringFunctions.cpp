#include<iostream>
#include<cstring>
#include<string> // works with c++ 20

using namespace std;

int main(){

    return 0;
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;

    //copy string one into string 3
    strcpy(str3, str1);
    cout<<"strcpy(str3, str1): "<<str3<<endl;

    //concatenates string one and str2
    strcat(str1, str2);
    cout<<"strcat(str1, str2): "<<str1<<endl;

    //total length of str1 after concertenation
    len = strlen(str1);
    cout<<"strlen(str1): "<<len<<endl;


    return 0;
}