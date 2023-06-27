#include <iostream>
using namespace std;
class mobile {
    string model;
    int year_of_manufacturer;
    public:
    void set_Details(string model,int year_of_manufacturer){
        this -> model=model;
        this -> year_of_manufacturer=year_of_manufacturer;
    }
    void print() {
        cout<<this->model <<endl;
        cout<<this->year_of_manufacturer<<endl; 
    }
};
int main () {
    mobile redmi;
    redmi.set_Details("Note 7 PRO", 2020);
    redmi.print();


};
