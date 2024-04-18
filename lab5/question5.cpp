#include<iostream>

using namespace std;

void menu();

double areaSquare(double length);
double areaRectangle(double length, double width);
double areaTriangle(double base, double height);

int main(){
    while(true){int input;
        menu();

        cin>>input;
        while (!(input >= 1 && input <= 4)){
            printf("Your input was: %d which is an invalid input \nPlease enter a valid input!!!\n", input);
            menu();
            cin>>input;
        }

        if(input == 1){
            double length;
            cout<<"Enter length: ";
            cin >> length;
            cout<<"Area is "<<areaSquare(length);
        }

        if(input == 2){
            double length;
            double width;
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter width: ";
            cin>>width;
            cout<<"Area is "<<areaRectangle(length, width);
        }

        if(input ==3){
            double base;
            double height;
            cout<<"Enter base: ";
            cin>>base;
            cout<<"Enter height: ";
            cin>>height;
            cout<<"Area is "<<areaTriangle(base, height);
        }

        if(input==4) break;
    }

    return 0;
}

void menu(){
    cout<<"\n\nPlease select the shape of the area to calculate"<<endl;
    cout<<"1. Square\n";
    cout<<"2. Rectangle\n";
    cout<<"3. Triangle\n";
    cout<<"4. Quit Program\n";
    cout<<"\nEnter Selection: ";
}

double areaSquare(double length) {
    return areaRectangle(length, length);
}
double areaRectangle(double length, double width) {
    return length * width;
}

double  areaTriangle(double base, double height){
    return 0.5 * base * height;
}