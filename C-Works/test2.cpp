#include <iostream>  
#include <string>  
#include <cstring>  
#include <iomanip>  
#include <algorithm>  
#include <queue>  

using namespace std;
#define INF 10000000
int n, m, c[205][205], g[4][2] = {-1, 0, 1, 0, 0, -1, 0, 1}, e[205][205], a[205][205], b[205][205];
char ch[205][205];
struct dot {
    int x, y;
};

void bfs(int dx, int dy, int k) {
    memset(e, 0, sizeof(e));
    queue<dot> que;
    dot cur, loer;
    cur.x = dx;
    cur.y = dy;
    if (k == 0)a[dx][dy] = 0;
    else b[dx][dy] = 0;
    que.push(cur);
    while (que.size()) {
        loer = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int nx = loer.x + g[i][0];
            int ny = loer.y + g[i][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && ch[nx][ny] != '#' && !e[nx][ny]) {
                if (k == 0)a[nx][ny] = a[loer.x][loer.y] + 1;
                else if (k == 1)b[nx][ny] = b[loer.x][loer.y] + 1;
                cur.x = nx;
                cur.y = ny;
                e[nx][ny] = 1;
                que.push(cur);
            }
        }
    }
}

int main() {
    int i, j, k, p, q, s, t;
    while (cin >> n >> m) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> ch[i][j];
                a[i][j] = b[i][j] = INF;
                if (ch[i][j] == 'Y') {
                    s = i;
                    t = j;
                    ch[i][j] = '#';
                }
                else if (ch[i][j] == 'M') {
                    p = i;
                    q = j;
                    ch[i][j] = '#';
                }
            }
        }
        bfs(s, t, 0);
        bfs(p, q, 1);
        int Mx = 10000000;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (ch[i][j] == '@') {
                    if (Mx > a[i][j] + b[i][j])
                        Mx = a[i][j] + b[i][j];
                }
            }
        }
        cout << 11 * Mx << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
#include<vector>

using namespace std;
//#define LOCAL
#define PII pair<int,int>
#define MP(X, Y) make_pair(X,Y)
#define X first
#define Y second

int G[105][105];
int vis[105][105];
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
int n, m;

bool in(int x, int y) {
    if (x < 0 || x >= m || y < 0 || y >= n)return 0;
    return 1;
}

int dfs(int x, int y) {
    if (!in(x, y) || vis[x][y] == 1 || G[x][y] == 1)return 0;
    if (x == m - 1 && y == n - 1)return 1;
    vis[x][y] = 1;
    int ans = 0;
    for (int i = 0; i < 4; ++i) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        ans += dfs(tx, ty);
    }
    return ans;
}

bool bfs() {
    queue<PII > q;
    q.push(MP(0, 0));
    while (!q.empty()) {
        PII S = q.front();
        q.pop();
        int x = S.X, y = S.Y;
        if (x == m - 1 && y == n - 1)return true;
        for (int i = 0; i < 4; ++i) {
            int tx = x + dir[i][0];
            int ty = y + dir[i][1];
            if (in(tx, ty) && G[tx][ty] == 0 && vis[tx][ty] == 0) {
                vis[tx][ty] = 1;
                q.push(MP(tx, ty));
            }
        }
    }
    return false;
}

int main() {
#ifdef LOCAL
    freopen("1554.in","r",stdin);
        freopen("1554.out","w",stdout);
#endif
    while (cin >> n >> m) {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j)
                scanf("%d", &G[i][j]);
        }
        //cout<<((dfs(0,0) > 0)? "Y":"N")<<endl;
        cout << (bfs() ? "Y" : "N") << endl;
    }
    return 0;
}

#include<iostream>
#include<queue> 
#include<vector>

using namespace std;

int G[5][5]; // 存图 
int vis[5][5]; // 父亲 & visit 
int dir[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};

void init() {
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j) {
            cin >> G[i][j];
            vis[i][j] = -1;
        }
}

void bfs() {
    queue<int> q;
    q.push(0);
    vis[0][0] = -2;
    while (!q.empty()) {
        int S = q.front();
        q.pop();
        int x = S / 5;
        int y = S % 5;
        if (x == 4 && y == 4)return;
        for (int i = 0; i < 4; ++i) {
            int tx = x + dir[i][0];
            int ty = y + dir[i][1];
            if (tx < 0 || ty < 0 || tx > 4 || ty > 4 || G[tx][ty] == 1 || vis[tx][ty] != -1)continue;
            vis[tx][ty] = S;
            q.push(tx * 5 + ty);
        }
    }
    return;
}

void output() {
    vector<int> v;
    int x = 4 * 5 + 4;
    while (vis[x / 5][x % 5] != -2) {
        v.push_back(x);
        x = vis[x / 5][x % 5];
    }
    cout << "(0, 0)" << endl;
    for (int i = v.size() - 1; i >= 0; --i)
        cout << "(" << v[i] / 5 << ',' << ' ' << v[i] % 5 << ")" << endl;
}

int main() {
    init();
    bfs();
    output();
    return 0;
}
