#include <iostream>
#include <string>

using namespace std;

void RoomNeeded(int A[], string schedule) {
    for (int i = 0; i < schedule.length(); i++) {
        if (schedule[i] == '1')
            A[i]++;
    }
}

int findMax(int A[]) {
    int MAX = A[0];
    for (int i = 1; i < 7; i++) {
        if (A[i] > MAX)
            MAX = A[i];
    }

    return MAX;
}

int main() {
    int numOfGroups;
    cin >> numOfGroups;
    int Schedule[7]{0};
    while(numOfGroups--) {
        string schedule;
        cin >> schedule;
        RoomNeeded(Schedule, schedule);
    }
    int result = findMax(Schedule);
    cout << result << endl;
    return 0;
}