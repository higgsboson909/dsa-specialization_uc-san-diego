#include <iostream>
using std::cin;
using std::cout;

int gcdFast (int a, int b) {
    int x, y;
    // if (x == y) {
    //     return x;
    // }
    if (a < b) {
        x = a;
        y = b;
    }
    else {
        y = a;
        x = b;
    }
    int tmp;
    while (!(y % x == 0)) {
        tmp = y;
        y = x;
        x = tmp % x;
        if (y % x == 0) 
            x = x;
        
    }
    return x;
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << gcdFast(a, b);
    return 0;
}