#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int n;
    int factorial=1;
    cout<<"enter the number you want to see its factorial:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        factorial*=i;   
    }
    cout<<factorial;
    return 0;
};
