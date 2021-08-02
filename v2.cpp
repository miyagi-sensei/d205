// recursive implementation
#include <iostream>
using namespace std;

void factorize(int num) {
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
    int N;
    cin >> N;
    cout << N << "=";
    factorize(N);
    return 0;
}
