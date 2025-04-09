#include <iostream>
#include <vector>

using namespace std;

int getDigit(int number, int pos) {
    int div = 1;
    while (pos--) div *= 10;
    return (number / div) % 10;
}

void radix_sort(int arr[], int n, int k) {
    for (int pos = 0; pos < k; pos++) {
        vector<vector<int>> arr_new(10);

        for (int i = 0; i < n; i++) {
            int digit = getDigit(arr[i], pos);
            arr_new[digit].push_back(arr[i]);
        }

        int idx = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < arr_new[i].size(); j++) {
                arr[idx++] = arr_new[i][j];
            }
        }
    }
}

int main() {
    int n;
    int arr[100000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    radix_sort(arr, n, 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}