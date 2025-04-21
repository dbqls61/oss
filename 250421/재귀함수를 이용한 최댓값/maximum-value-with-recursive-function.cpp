#include <iostream>

using namespace std;

int n;
int arr[100]; // 밖에다 선언했잖아 멍청아
int b = 0; // 

int max(int a) {
    if (a == 0)
        return b;
    if (arr[a-1] > b) // 0 ~ a-1 개까지
        b = arr[a-1];
    return max(a-1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max(n);

    return 0;
}