#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int userspin,pin,error=0;
    cin>>userspin;
    do { 
    
        cout<<"PIN:";
        cin>>pin;
        if(userspin!=pin){
            error++;
        }

    }while (error<3 && pin!=userspin);
    if (error<3){
        cout<<"Loading"<<endl;
    }
    else {
        cout<<"wait 15 min and try again"<<endl;
    }
    return 0;
};