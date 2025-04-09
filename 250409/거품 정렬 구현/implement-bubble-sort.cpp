#include <iostream>

using namespace std;

int n, s;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        s = 1;
        for (int i = 0; i < n; i++){
            if (arr[i] > arr[i+1]){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                s = 0;
            }
        }
    }while (s == 0);
    
    for (int i = 0; i < n; i++){
        cout << arr[i+1] << ' ';
    }

    return 0;
}