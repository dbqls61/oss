#include <iostream>

using namespace std;

int n;
int arr[100001];
int temp;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = i*2;
    int right = i*2+1;

    while (left <= n && arr[left] > arr[largest]) {
        largest = left;
    }
    while (right <= n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (arr[largest] != arr[i]) {
        temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
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