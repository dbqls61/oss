#include <iostream>

using namespace std;

int n;
int arr[100000];

void merge (int arr[], int low, int mid, int high) {
    int new_merge[100000];
    int i = low, j = mid+1;
    int k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            new_merge[k] = arr[i];
            k++; i++;
        }
        else {
            new_merge[k] = arr[j];
            k++; j++;
        }
    }
    while (i <= mid) {
        new_merge[k] = arr[i];
        k++; i++;
    }
    while (j <= high) {
        new_merge[k] = arr[j];
        k++; j++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = new_merge[i];
    }
}

void merge_sort (int arr[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}