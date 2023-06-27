#include <iostream>
#include <cstdio>
using namespace std;

int recursive_sum(int n,int m){
    if (n==m){
        return n;}
    else {
        return n+recursive_sum(n+1,m);} 
}
int main (){
    int m=10;
    int n=3;
    cout<<"sum is :"<<recursive_sum(n,m)<<endl;
};