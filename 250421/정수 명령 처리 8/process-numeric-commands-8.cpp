#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    list<int> s;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }
    for (int i = 0; i < N; i++) {
        if (command[i] == "push_front") {
            s.push_front(A[i]);
        }
        if (command[i] == "push_back") {
            s.push_back(A[i]);
        }
        if (command[i] == "pop_front") {
            cout << s.front() << endl;
            s.pop_front();
        }
        if (command[i] == "pop_back") {
            cout << s.back() << endl;
            s.pop_back();
        }
        if (command[i] == "size") {
            cout << s.size() << endl;
        }
        if (command[i] == "empty") {
            cout << s.empty() << endl;
        }
        if (command[i] == "front") {
            cout << s.front() << endl;
        }
        if (command[i] == "back") {
            cout << s.back() << endl;
        }
    }

    return 0;
}
