#include <iostream>
using namespace std;
int factorial (int n){
    int result =1;
    for (int i=2;i<=n;i++){
        result*=i;
    }
    return result;
   
}
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"n factorial is :"<<factorial(n);
    return 0;
}
