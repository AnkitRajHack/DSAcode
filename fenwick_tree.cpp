#include <bits/stdc++.h>

using namespace std; 

struct FenWick {
    vector<int> fn; 
    int n;

    void init(int n) {
        this->n = n + 1;
        fn.resize(this->n, 0);
    }

    void add(int x, int y) {
        x += 1;
        while(x < this->n) {
            fn[x] += y;
            x += (x & (-1 * x));
        }
    }

    int sum(int x) {
        x += 1;
        int ans = 0;
        while(x) {
            ans += fn[x];
            x -= (x & (-1 * x));
        }
        return ans;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    FenWick f; 
    f.init(arr.size());
    for(int i = 0; i < arr.size(); i++) {
        f.add(i, arr[i]);
    }
    cout << f.sum(2, 3) << endl;

    return 0;
}
