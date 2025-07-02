#include <iostream>
using namespace std;

int main() {
    int n, v, result = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> v;

    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            result += 1;
        } 
    }
    cout << result << '\n';
    return 0;
}