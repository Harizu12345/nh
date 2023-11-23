#include <iostream>
#define IS_EVEN(x) ((x) % 2 == 0)
#define SUM_TO_N(n) ((n) * ((n) + 1) / 2)
#define POWER(base, exponent) pow(base, exponent)

using namespace std;

/*
void printStars(int n) {
    if (n > 0) {
        cout << "* ";
        printStars(n - 1);
    }
    else {
        cout << endl;
    }
}

int main() {
    int N;
    cout << "enter num N: ";
    cin >> N;

    printStars(N);

    return 0;
}
*/


void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        cout << n << " ";
    }
}

int main() {
    int n;
    cout << "enter num n: ";
    cin >> n;

    printNumbers(n);
    cout << endl;

    return 0;
}
