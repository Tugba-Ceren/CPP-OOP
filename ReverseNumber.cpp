#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    int number;
    int reversednumber=0;
    cout<<"Entered number"<<endl;
    cin>>number;
    while(number!=0){
        reversednumber*=10;
        reversednumber+=number%10;
        number/=10;
    }
    cout<<"Reversed number:"<<reversednumber<<endl;
    return 0;
};