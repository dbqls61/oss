#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];

void gisu (int arr[], int exp) {
    vector<int> new_arr;
    if (exp < 100000) {
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < n; j++) {
                if (arr[j] / exp % 10 == i) {
                    new_arr.push_back(i);
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        arr[i] = new_arr[i];
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    gisu (arr, 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
