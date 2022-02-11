#include <iostream>
#include <string>

using namespace std;

void input(string name[], string nameIP[], string command[], string commandIP[], int n, int m) {
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> nameIP[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> command[i];
        cin >> commandIP[i];
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    string name[n], nameIP[n], command[m], commandIP[m];
    input(name, nameIP, command, commandIP, n, m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (commandIP[i].substr(0, commandIP[i].length() - 1).compare(nameIP[j]) == 0) {
                cout << command[i] << " " << commandIP[i] << " #" << name[j] << endl;
                break;
            }
        }
    }
    return 0;
}