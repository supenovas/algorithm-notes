#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    if ( n - m < 0 ) {
        cout << m - n << endl;
    }
    else {
        cout << n - m << endl;
    }
    return 0;
}