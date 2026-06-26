#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod (int)(1e9+7)
using namespace std;

bool check(vector<int> &components, vector<int> &first, vector<int> &last, vector<int> &freq, vector<int> &newVec){
    int x = components[0], y = components[1];
    int start = min(first[x], first[y]);
    int end = max(last[x], last[y]);

    int prefixX=0, prefixY=0, suffixX=0, suffixY=0;
    int freqX = freq[x], freqY = freq[y];

    for(int i=0; i<freqX; i++){
        if(newVec[start+i] == x)
            prefixX++;
    }

    for(int i = (end-start+1) - freqX; i<end-start+1; i++){
        if(newVec[start+i] == x)
            suffixX++;
    }

    for(int i=0; i<freqY; i++){
        if(newVec[start+i] == y)
            prefixY++;
    }

    for(int i = (end-start+1) - freqY; i<end-start+1; i++){
        if(newVec[start+i] == y)
            suffixY++;
    }

    return prefixX == freqX-1 || suffixX == freqX-1 || prefixY == freqY-1 || suffixY == freqY-1;


}

void finishComponent(vector<int> &cur, int cl, int cr, bool &bad, bool &has, int &x, int &y, int &bl, int &br) {
    if ((int)cur.size() > 2) {
        bad = true;
        return;
    }

    if ((int)cur.size() == 2) {
        if (has) {
            bad = true;
            return;
        }
        has = true;
        x = cur[0];
        y = cur[1];
        bl = cl;
        br = cr;
    }
}

bool checkComponent(int x, int y, int bl, int br, vector<int> &freq, vector<int> &p) {
    int cx = freq[x], cy = freq[y];
    int px = 0, py = 0, fx = -1, fy = -1;

    for (int i = bl; i <= br; i++) {
        if (p[i] == x) px++;
        else if (p[i] == y) py++;
        else return false;

        int len = i - bl + 1;
        if (len == cx) fx = px;
        if (len == cy) fy = py;
    }

    if (fx == -1 || fy == -1) return false;

    return (cx - fx <= 1 || cy - fy <= 1);
}

void solve() {
    int n;
    cin >> n;

    vector<ll> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    unordered_map<ll, int> hash;
    hash.reserve(n * 2 + 5);
    hash.max_load_factor(0.7f);

    vector<int> first(n, n), last(n, -1), freq(n, 0), newVec(n);
    vector<ll> unique;

    for (int i = 0; i < n; i++) {
        auto it = hash.find(vec[i]);

        int temp;
        if (it == hash.end()) {
            temp = (int)unique.size();
            hash[vec[i]] = temp;
            unique.push_back(vec[i]);
        } else {
            temp = it->second;
        }

        newVec[i] = temp;
        first[temp] = min(first[temp], i);
        last[temp] = max(last[temp], i);
        freq[temp]++;
    }

    int m = (int)unique.size();

    vector<pair<int, int>> ord;
    ord.reserve(m);
    for (int i = 0; i < m; i++) ord.push_back({first[i], i});
    sort(ord.begin(), ord.end());

    bool bad = false, has = false;
    int x = -1, y = -1, bl = -1, br = -1;

    vector<int> cur;
    int cl = 0, cr = -1;

    if (!ord.empty()) {
        cur.clear();
        cur.push_back(ord[0].second);
        cl = first[ord[0].second];
        cr = last[ord[0].second];

        for (int i = 1; i < m && !bad; i++) {
            int u = ord[i].second;

            if (first[u] <= cr) {
                cr = max(cr, last[u]);
                cur.push_back(u);
            } else {
                finishComponent(cur, cl, cr, bad, has, x, y, bl, br);
                if (bad) break;

                cur.clear();
                cur.push_back(u);
                cl = first[u];
                cr = last[u];
            }
        }

        if (!bad) finishComponent(cur, cl, cr, bad, has, x, y, bl, br);
    }

    bool ok = !bad;

    if (ok && has) {
        ok = checkComponent(x, y, bl, br, freq, newVec);
    }

    if(ok) 
        cout << "YEs\n";
    else 
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while (t--) solve();

    return 0;
}