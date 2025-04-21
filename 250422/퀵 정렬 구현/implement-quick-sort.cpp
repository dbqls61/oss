#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

int partition (int arr[], int l, int h) {
    int pivot = arr[h];
    int blue = l - 1;

    for (int red = l; red < h; red++) {
        if (arr[red] < pivot) {
            blue++;
            swap(arr[red], arr[blue]);
        }
    }
    swap(arr[blue+1], arr[h]);

    return blue+1;
}

void quick (int arr[], int l, int h) {
    if (l >= h)
        return;
    
    int p = partition(arr, l, h);
    quick (arr, l, p-1);
    quick (arr, p+1, h);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
