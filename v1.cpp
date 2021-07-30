// iterative version
#include <iostream>
using namespace std;

int N;

// return the smallest factor of num other than 1 - it'll turn out to be a prime factor
int smallest_factor(int num) {
    int i;
    for (int i=2; i*i<=num; i+=1) {
        if (num % i == 0) {
            return i;
        }
    }
    return num;
}

int main() {
    int factor;
    cin >> N;
    cout << N << "=";
    while (true) {
        factor = smallest_factor(N);
        if (factor != N) {
            cout << factor << "*";
            N /= factor;
        } else {
            cout << N << endl;
            return 0;
        }
    }

    return 0;
}