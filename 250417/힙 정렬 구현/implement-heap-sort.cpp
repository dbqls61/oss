#include <iostream>

using namespace std;

int n;
int arr[100001];

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = i * 2;
    int r = i * 2 + 1;

    if (l <= n && arr[l] > arr[largest]) {
        largest = l;
    }
    if (r <= n && arr[r] > arr[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = n/2; i > 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n; i > 1; i--) {
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}