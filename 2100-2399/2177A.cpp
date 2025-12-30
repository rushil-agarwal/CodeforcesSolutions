#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N, S, L;
    cin >> N >> S >> L;

    int M, K, P;
    cin >> M >> K >> P;

    int queriesTotal = 5;
    int oxcPerPlane = M / P;
    int spinesPerPlane = S / P;
    int portsPerOXC = N * spinesPerPlane * K;

    auto getPort = [&](int group, int spineLocal, int link) {
        return group * (spinesPerPlane * K) + spineLocal * K + link;
    };

    while (queriesTotal--) {
        int Q;
        cin >> Q;

        vector<array<int,4>> requests(Q);
        for (int i = 0; i < Q; i++) {
            cin >> requests[i][0] >> requests[i][1]
                >> requests[i][2] >> requests[i][3];
        }

        vector<vector<int>> connections(M, vector<int>(portsPerOXC, -1));
        vector<vector<bool>> occupied(M, vector<bool>(portsPerOXC, false));

        vector<array<int,5>> answers(Q, {-1,-1,-1,-1,-1});

        for (int i = 0; i < Q; i++) {
            int g1 = requests[i][0];
            int g2 = requests[i][2];
            bool done = false;

            for (int oxc = 0; oxc < M && !done; oxc++) {
                int plane = oxc / oxcPerPlane;

                for (int spine = 0; spine < spinesPerPlane && !done; spine++) {
                    for (int link = 0; link < K && !done; link++) {
                        int p1 = getPort(g1, spine, link);
                        int p2 = getPort(g2, spine, link);

                        if (!occupied[oxc][p1] && !occupied[oxc][p2]) {
                            connections[oxc][p1] = p2;
                            connections[oxc][p2] = p1;
                            occupied[oxc][p1] = occupied[oxc][p2] = true;

                            int spineGlobal = plane * spinesPerPlane + spine;
                            answers[i] = {spineGlobal, link, oxc, spineGlobal, link};
                            done = true;
                        }
                        else if (connections[oxc][p1] == p2 && connections[oxc][p2] == p1) {
                            int spineGlobal = plane * spinesPerPlane + spine;
                            answers[i] = {spineGlobal, link, oxc, spineGlobal, link};
                            done = true;
                        }
                    }
                }
            }

            if (!done) {
                int oxc = 0;
                for (int s1 = 0; s1 < spinesPerPlane && !done; s1++) {
                    for (int k1 = 0; k1 < K && !done; k1++) {
                        int p1 = getPort(g1, s1, k1);
                        if (occupied[oxc][p1]) continue;

                        for (int s2 = 0; s2 < spinesPerPlane && !done; s2++) {
                            for (int k2 = 0; k2 < K && !done; k2++) {
                                int p2 = getPort(g2, s2, k2);
                                if (occupied[oxc][p2]) continue;

                                connections[oxc][p1] = p2;
                                connections[oxc][p2] = p1;
                                occupied[oxc][p1] = occupied[oxc][p2] = true;

                                int plane = 0;
                                answers[i] = {
                                    plane * spinesPerPlane + s1, k1,
                                    oxc,
                                    plane * spinesPerPlane + s2, k2
                                };
                                done = true;
                            }
                        }
                    }
                }
            }
        }

        cout << "###########" << endl;


        for (int oxc = 0; oxc < M; oxc++) {
            for (int p = 0; p < portsPerOXC; p++) {
                if (p) cout << ' ';
                cout << connections[oxc][p];
            }
            cout << '\n';
        }

        for (auto &r : answers) {
            cout << r[0] << ' ' << r[1] << ' '
                 << r[2] << ' ' << r[3] << ' ' << r[4] << '\n';
        }
    }

    cout << "###########" << endl;

    return 0;
}
