#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    int j, key;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++){
        j = i-1;
        key = arr[i];
        while (i-1 >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}
