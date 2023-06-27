#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student {
    int sum;
    int scores[5];
    public:
    void input() {
        cin>>scores[0];
        cin>>scores[1];
        cin>>scores[2];
        cin>>scores[3];
        cin>>scores[4];
    }
    int calculateTotalScore() {
        sum=0;
        for (int i =0; i<5; i++){
            sum+=scores[i];
        }
        return sum;
    }
      
};

int main() {
    Student s;
    s.input();
    int TotalScore=s.calculateTotalScore();
    cout<<TotalScore;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
};