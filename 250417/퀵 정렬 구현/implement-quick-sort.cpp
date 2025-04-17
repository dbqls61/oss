#include <iostream>
using namespace std;

int n;
int arr[100000];

int select_pivot(int arr[], int low, int high) {
    int mid = (low + high) / 2;
    int a = arr[low];
    int b = arr[mid];
    int c = arr[high];

    int pivot;
    if ((a > b && b > c) || (a < b && b < c)) pivot = mid;
    else if ((a > b && a < c) || (a < b && a > c)) pivot = low;
    else pivot = high;

    return pivot;
}

int partition(int arr[], int low, int high) {
    int pivot_index = select_pivot(arr, low, high);
    int pivot = arr[pivot_index];

    int temp = arr[pivot_index];
    arr[pivot_index] = arr[high];
    arr[high] = temp;

    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pos = partition(arr, low, high);
        quick_sort(arr, low, pos - 1);
        quick_sort(arr, pos + 1, high);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}
