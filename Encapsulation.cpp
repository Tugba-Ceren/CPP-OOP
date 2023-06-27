#include <iostream>
using namespace std;
class Employee{
    private:
    int Age;
    string Company;
    string Name;
    public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself() {
    }
    Employee(int age , string company,string name){
        Name=name;
        Company=company;
        Age=age;
    }
};
int main () {
    Employee employee1=Employee(22,"Yt", "Serena");
    employee1.setAge(24);
    employee1.setName("John");
    cout<<employee1.getName()<<"is"<< employee1.getAge()<<"years old"<<endl;
}
