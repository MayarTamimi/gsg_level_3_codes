 +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+

#include bitsstdc++.h
using namespace std;

int n;
vectorstring activities = {swimming, running, football};
vectorstring res;
int countSchedules = 0;

void solve(int m) {
    if (m == n) {
        for (int i = 0; i  n; i++) {
            cout  res[i];
            if (i != n - 1) cout   ;
        }
        cout  n;
        countSchedules++;
        return;
    }
    for (int i = 0; i  3; i++) {
        if (m == 0  res[m - 1] != activities[i]) {
            res.push_back(activities[i]);
            solve(m + 1);
            res.pop_back();
        }
    }
}

int main() {
    ios_basesync_with_stdio(false);
    cin.tie(NULL);

    cin  n;
    solve(0);
    cout  COUNT   countSchedules  n;
}
