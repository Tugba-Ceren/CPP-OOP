#include <iostream>
#include <cstdio>
//Finding factorial by using recursive function.
using namespace std;
int RecursiveFactorial(int n){
    if (n==1 || n==0){
        return n;
    }
    else {
        return n * RecursiveFactorial(n-1);
    }
}
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<RecursiveFactorial(n);
}