#include <iostream>

using namespace std;

int N;

void flower (int n) {
    if(n==0)
        return;
    
    cout << n << ' ';
    flower(n-1);
    cout << n << ' ';
}

int main() {
    cin >> N;

    flower(N);

    return 0;
}