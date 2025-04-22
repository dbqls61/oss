#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];

void gisu (int arr[], int exp) {
    if (exp > 100000) return;
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j]/exp%10 == i) {
                v.push_back(arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = v[i];
    }
    gisu(arr, exp*10);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    gisu(arr, 1);

    for (int i = 0; i < n; i++) {
        cout <<  arr[i] << ' ';
    }

    return 0;
}
