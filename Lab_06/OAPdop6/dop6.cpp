#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "¬ведите число "; cin >> n;
    while (n > 0) {
        if ((n % 10 == 3) || (n % 10 == 6)) {
            n /= 10;
        }
        else {
            break;
        }
    }
    cout << n;
}
