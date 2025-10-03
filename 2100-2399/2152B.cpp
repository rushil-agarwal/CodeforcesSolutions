#include <bits/stdc++.h>
#define ll long long

using namespace std;


bool insideRange(ll x, ll &n){
    return (0 <= x && x <= n);
}

bool checkValid(ll n, ll row, ll col, ll dRow, ll dCol, ll t) {
    ll rmin = dRow - t, rmax = dRow + t;
    ll cmin = dCol - t, cmax = dCol + t;



    vector<pair<ll,ll>> points;

    auto addPoints = [&](ll r, ll c) {
        if (r < 0) r = 0;
        if (r > n) r = n;
        if (c < 0) c = 0;
        if (c > n) c = n;
        if (abs(r - row) + abs(c - col) <= t)
            points.push_back({r, c});
    };

    auto inside = [&](ll r, ll c) -> bool {
        return rmin <= r && r <= rmax && cmin <= c && c <= cmax;
    };

    if (insideRange(row - t, n))
        addPoints(row - t, col);

    if (insideRange(row + t, n))
        addPoints(row + t, col);


    if (insideRange(col - t, n))
        addPoints(row, col - t);
    if (insideRange(col + t, n))
        addPoints(row, col + t);

    for (int i = 0; i < 2; i++) {
        ll extra1 = (i == 0 ? 0 : n); // nearest side
        ll extra2 = abs(extra1 - row); // steps wahan tak paunchne mei

        if (extra2 <= t) {
            //extra steps mei kya kre
            ll temp = t - extra2;
            ll temp1 = col - temp;
            ll temp2 = col + temp;

            if (temp1 < 0) temp1 = 0;
            if (temp1 > n) temp1 = n;
            if (temp2 < 0) temp2 = 0;
            if (temp2 > n) temp2 = n;

            addPoints(extra1, temp1);
            addPoints(extra1, temp2);


        }
    }

    for (int i = 0; i < 2; i++) {
        //same but for opposite corners
        ll extra1 = (i == 0 ? 0 : n);

        ll extra2 = abs(extra1 - col);

        if (extra2 <= t) {
            ll temp = t - extra2;
            ll temp1 = row - temp;
            ll temp2 = row + temp;

            if (temp1 < 0) temp1 = 0;
            if (temp1 > n) temp1 = n;
            if (temp2 < 0) temp2 = 0;
            if (temp2 > n) temp2 = n;

            addPoints(temp1, extra1);
            addPoints(temp2, extra1);

        }
    }

    addPoints(0, 0);
    addPoints(0, n);
    addPoints(n, 0);
    addPoints(n, n);

    for (auto &p : points) {
        if (!inside(p.first, p.second))
            return false;
    }

    return true;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        ll n, row, col, dRow, dCol;
        cin >> n >> row >> col >> dRow >> dCol;

        ll left = 0, right = 2 * n, ans = -1;


        while(left <= right) {
            ll mid = (left + right)/2;


            if (checkValid(n, row, col, dRow, dCol, mid)) {
                ans = mid;
                right = mid - 1;
            } else
                left = mid + 1;

        }

        cout << ans << endl;
    }
    return 0;
}
