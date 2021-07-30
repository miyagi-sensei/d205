// recursive implementation
#include <iostream>
using namespace std;

int N;

void factorize(int num) {
    int i;
    for (int i=2; i*i<=num; i+=1) {
        if (num % i == 0) {
            cout << i << "*";
            factorize(num / i);
            return;
        }
    }
    cout << num << endl;
}

int main() {
    int factor;
    cin >> N;
    cout << N << "=";
    factorize(N);
    return 0;
}
