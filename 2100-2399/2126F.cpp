//
// Created by Lenovo on 17-07-2025.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Edge {
    int to, cost;
};

ll dfs(int u, const vector<vector<Edge>> &adj, const vector<int> &color, vector<bool> &vis) {
    vis[u] = true;
    ll cost = 0;
    for (const auto &edge : adj[u]) {
        int v = edge.to;
        int c = edge.cost;
        if (!vis[v]) {
            if (color[u] != color[v]) {
                cost += c;
            }
            cost += dfs(v, adj, color, vis);
        }
    }
    return cost;
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> color(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> color[i];
    }

    vector<vector<Edge>> adj(n + 1);
    for (int i = 1; i < n; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});
    }

    vector<bool> vis(n + 1, false);
    ll totalCost = dfs(1, adj, color, vis);

    while (q--) {
        int v, x;
        cin >> v >> x;

        if (color[v] == x) {
            cout << totalCost << '\n';
            continue;
        }

        // Subtract old costs
        for (const auto &edge : adj[v]) {
            int u = edge.to, c = edge.cost;
            if (color[u] != color[v]) {
                totalCost -= c;
            }
        }

        color[v] = x;

        // Add new costs
        for (const auto &edge : adj[v]) {
            int u = edge.to, c = edge.cost;
            if (color[u] != color[v]) {
                totalCost += c;
            }
        }

        cout << totalCost << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
