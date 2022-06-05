//2022/6/5
#include <bits/stdc++.h>

using namespace std;
const int maxn = 1E4;
using ll = long long;

class activity {
public:
    int begin;
    int end;

    bool operator<(const activity &that) {
        return this->end < that.end;
    }
} A[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> A[i].begin >> A[i].end;
    }
    sort(A + 1, A + 1 + n);
    int preend = A[1].end;
    vector<int> num;
    num.push_back(A[1].end);
    //cerr << preend << endl;
    for (int i = 2; i <= n; i++) {
        if (A[i].begin >= preend) {
            num.push_back(A[i].end);
            preend = A[i].end;
            //cerr<<preend<<" ";
        }
        //cerr << A[i].begin << " ";
    }
    cout << num.size() << endl;
    return 0;
}
