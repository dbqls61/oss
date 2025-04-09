#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];

void radix_sort(int arr[], int exp) {
    vector<int> new_arr;
    if (exp > 100000) return;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] / exp % 10 == i)
                new_arr.push_back(arr[j]);
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = new_arr[i];
    }
    radix_sort(arr, exp * 10);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radix_sort(arr, 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}