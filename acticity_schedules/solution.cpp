// +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+

#include <bits/stdc++.h>
using namespace std;

int n;
int cnt = 0;

void recur(int x, vector<string> cur) {
    if (x == n) {
        for (const string& s : cur) {
            cout << s << " ";
        }
        cout << endl;
        cnt++;
        return;
    }

    vector<string> A = cur;
    A.push_back("Running");
    vector<string> B = cur;
    B.push_back("Swimming");
    vector<string> C = cur;
    C.push_back("Football");

    if (cur.empty()) {
        recur(x + 1, A);
        recur(x + 1, B);
        recur(x + 1, C);
    } else if (cur.back() == "Running") {
        recur(x + 1, B);
        recur(x + 1, C);
    } else if (cur.back() == "Swimming") {
        recur(x + 1, A);
        recur(x + 1, C);
    } else if (cur.back() == "Football") {
        recur(x + 1, A);
        recur(x + 1, B);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    recur(0, {});
    cout << "COUNT: " << cnt << endl;

    return 0;
}
