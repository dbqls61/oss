#include <iostream>

using namespace std;

int n;
int arr[10];
int sum = 1;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int lcm (int a, int b) {
    return (a/gcd(a,b)*b);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum = lcm(arr[i], sum);
    }

    cout << sum;

    return 0;
}