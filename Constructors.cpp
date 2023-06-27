#include <iostream>
using namespace std;
class Employee {

    public:
    string Name ;
    int Age;
    string Company ;
    void IntroduceYourself(){
        cout<<"Name:"<<Name<<endl;
        cout<<"Company:"<<Company<<endl;
        cout<<"Age:"<<Age<<endl; 
    }
    Employee(string name , string company ,int age) {
        Name=name;
        Company=company;
        Age=age;
    }
};
int main () {
    Employee employee1=Employee("Saldina", "Youtube",23);
    employee1.IntroduceYourself();
    Employee employee2=Employee("Ceren", "Youtube",23);
    employee2.IntroduceYourself();
    /*employee1.name = "Serena";
    employee1.Company="Youtube";
    employee1.age=25;*/
   
}