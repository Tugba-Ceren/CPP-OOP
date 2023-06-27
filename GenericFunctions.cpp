#include <iostream>
#include <string>
using namespace std;


void Swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<"-"<<b<<endl;
    

}
int main() {
    int a=2,b=5;
    cout<<a<<"-"<<b<<endl;
    Swap(a,b);

};