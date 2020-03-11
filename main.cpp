#include <iostream>
/* Copyright 2020 Adam Skudlarek */

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num1, num2;
    cout << "Hi, please enter two numbers: ";
    cin >> num1, num2;

    int x, y;
    if (x != 1 || y != 3 && x != 4 && num1 == 6 && num2 == 4 && num1 < 10) {
        cout << "Nothing";
    }

    cin >> x >> y;
    cout << x + y << endl;

    return 0;
}
