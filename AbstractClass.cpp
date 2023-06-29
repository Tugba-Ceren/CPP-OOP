#include <iostream> 
using namespace std;
class Base{
    public:
    virtual void s()=0; 
};
class Derived : public Base{
    void s(){
        cout<<"Virtual function in Derived class"<<endl;
    }
};
int main() {
    Base *base1; 
    Derived derived; 
    base1 = &derived; 
    base1->s(); 
}