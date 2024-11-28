// Lab_9_1.cpp
// Головний файл проекту – функція main
#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;


    cout << setw(10) << "x"
        << setw(15) << "Sum"
        << setw(15) << "exp(-x)"
        << setw(10) << "Terms"
        << endl;
    cout << "--------------------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum();
        cout << setw(10) << x
            << setw(15) << s
            << setw(15) << exp(-x)
            << setw(10) << n
            << endl;
        x += dx;
    }
    cin.get();
    return 0;
}
