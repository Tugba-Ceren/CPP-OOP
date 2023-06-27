#include <iostream>
using namespace std;
class Employee {
    private:
    int salary;
    public:
    void setsalary(int s){
        salary=s;
    }
    int getsalary(){
        return salary;
    }
};

int main(){

    Employee myobj;
    myobj.setsalary(5000);
    cout<<"Cerens Salary is:"<<myobj.getsalary()<<"euro"<<endl;
    return 0;
};
    

