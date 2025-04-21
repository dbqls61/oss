#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    int min, temp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        min = i;
        for (int k = i+1; k < n; k++) {
            if (arr[k] < arr[min]) {
                min = k;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}