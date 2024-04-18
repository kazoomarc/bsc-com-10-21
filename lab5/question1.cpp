#include<iostream>
//#include <cstdlib>
// #include<ctime>
using namespace std;


int main(){
    //seeding random number
    srand(time(NULL));

    // generate rand between 0 - 11
    int daysUntilExpiration = rand() % 12;
    //cout<<daysUntilExpiration<<endl; //output random number generated

    if(daysUntilExpiration>10){
        cout<<"You have an active subscription."<<endl;
    }else if(daysUntilExpiration == 0){
        cout<<"Your subscription has expired."<<endl;
    }else if(daysUntilExpiration <= 1){
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now and save 20%!"<<endl;
    }else if(daysUntilExpiration <= 5){
        cout<<"Your subscription expires in " << daysUntilExpiration <<" days"<<endl;
        cout<<"Renew now and save 10%!"<<endl;
    }else{
        cout<<"Your subscription will expire soon. Renew now!" << endl;
    }

    return 0;
}