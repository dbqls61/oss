#include <iostream>

using namespace std;

int N;

void flower(int a){
    if (a==0)
    return;

    cout << a << ' ';
    flower(a-1);
    cout << a << ' ';
}

int main() {
    cin >> N;

    flower(N);

    return 0;
}