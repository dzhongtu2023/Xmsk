#include "iostream"

using namespace std;

typedef union MoneyType {
    int m1;
    double m2;
} mt;

int main() {
    union MoneyType money;
    mt max;
    money.m1 = 23;
    money.m2 = 23.3;
    cout << money.m2 << endl;
}