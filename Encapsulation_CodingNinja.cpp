#include <iostream>
using namespace std;
class Student {
    private:
    int Age;
    string last_name;
    string first_name;
    public:
    void setAge(int age){
        Age =age;
    }
    int getAge() { return Age; }
    void set_last_name(string x){ 
        last_name=x;}
    string get_last_name() { return last_name;} 
    void set_first_name(string f){ 
        first_name=f;
    }
    string get_first_name() { 
        return first_name;}


};
int main () {
    Student obj ;
    obj.set_first_name("Ceren");
    cout<<"My name is: "<<obj.get_first_name()<<endl;
    obj.setAge(23);
    cout<<"I am "<< obj.getAge() <<" years old."<<endl;
}