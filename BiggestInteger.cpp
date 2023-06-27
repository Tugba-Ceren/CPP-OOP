#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    int max_value = max_of_four(a, b, c, d);
    cout << max_value << endl;
    return 0;
};
