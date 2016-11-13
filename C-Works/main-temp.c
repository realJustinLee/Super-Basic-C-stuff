#include <iostream>
#include <cstring>

using namespace std;
                const char *gStopWords[] = {"of ", "Of ", "OF ", "a ", "A ", "an ", "An ", "AN ", "the ", "The ", "THE ", "and ",
"And ", "AND ", "for ", "For ", "FOR "};

const int gWordCount = sizeof(gStopWords) / sizeof(const char *);

string capitals(string str) {
    for (int i = 0; i < gWordCount; ++i) {
        size_t index = str.find(gStopWords[i], 0);
        while (index != string::npos) {
            str.replace(index, strlen(gStopWords[i]), "");
            index = str.find(gStopWords[i], index);
        }
    }
    string ret("");
    bool flag = true;
    for (string::iterator iter = str.begin(); iter != str.end(); ++iter) {
        if (flag) {
            ret.append(1, *iter);
            flag = false;
        } else {
            if (*iter == ' ' || *iter == '-') {
                flag = true;
            }
        }
    }
    return ret;
}

int main() {
    int i = 0;
    char zifu[65535];
    while (cin.getline(zifu, 65535)) {
        i++;
        cout << "Case " << i << ": " << capitals(zifu) << "\n";
    }
    return 0;
}

#include <stdio.h>

struct student {
    int num;
    char name[10];
    int computer, english, math;
    double average;
};

double count_average(struct student s) {
    return (s.math + s.english + s.computer) / 3.0;
}

int main(void) {
    int i, n;
    struct student s1;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input the student's number, name ,and course scores\n");
    for (i = 1; i <= n; i++) {
        printf("No.%d", i);
        scanf("%d%s%d%d%d", &s1.num, s1.name, &s1.math, &s1.english, &s1.computer);
        s1.average = count_average(s1);
        printf("num:%d,name:%s,average:%.2lf\n", s1.num, s1.name, s1.average);
    }
    return 0;
}

#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int Graph[5][5];
int visit[5][5];
int direction[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};

void input() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> Graph[i][j];
            visit[i][j] = -1;
        }
    }
}

void sequencer(int sequence,direction){
    char ch;
    for (int i = 0; i < sequence; ++i){
        ch = 'a';
        putchar(ch);
    }
}

void bfs() {
    queue<int> q;
    q.push(0);
    visit[0][0] = -2;
    while (!q.empty()) {
        int S = q.front();
        q.pop();
        int x = S / 5;
        int y = S % 5;
        if (x == 4 && y == 4)return;
        for (int i = 0; i < 4; ++i) {
            int tx = x + direction[i][0];
            int ty = y + direction[i][1];
            if (tx < 0 || ty < 0 || tx > 4 || ty > 4 || Graph[tx][ty] == 1 || visit[tx][ty] != -1)continue;
            visit[tx][ty] = S;
            q.push(tx * 5 + ty);
        }
    }
    return;
}

void output() {
    vector<int> v;
    int x = 4 * 5 + 4;
    while (visit[x / 5][x % 5] != -2) {
        v.push_back(x);
        x = visit[x / 5][x % 5];
    }
    cout << "(0, 0)" << endl;
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << "(" << v[i] / 5 << ", " << v[i] % 5 << ")" << endl;
    }
}

int main() {
    input();
    bfs();
    output();
    return 0;
}


#include <stdio.h>

int a, b, c;
// a = xiang shu;
// b = kai shi xiang wei zhi;
// c = jie shu xiang wei zhi;
char str[20][20], mag[20][2];

void input() {
    int i, flag = 1;
    for (i = 0; flag; i++) {
        for (int j = 0; scanf("%c", &str[i][j]), str[i][j] != '\n'; j++) {
            if (str[i][j] == '0') {
                flag = 0;
                break;
            }
        }
    }
    a = i - 1;
    for (i = 0; i < a; i++) {
        mag[i][0] = str[i][0];
        if (mag[i][0] == 'b') {
            b = i;
        }
        for (int j = 0; str[i][j] != '\n'; j++) {
            mag[i][1] = str[i][j];
            if (mag[i][0] == 'm') {
                c = i;
            }
        }
    }
    return;
}

void bfs(){

    return;
}

void output() {
    for (int i = 0; i < a; i++) {
        printf("%c %c\n", mag[i][0], mag[i][1]);
    }
    return;
}

int main(void) {
    input();
    bfs;
    output();
    return 0;
}


#include <iostream>
#include <queue>
#include <vector>

using namespace std;

                int Graph[5][5];
                int visit[5][5];
                int direction[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};

void input() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> Graph[i][j];
            visit[i][j] = -1;
        }
    }
}

void bfs() {
    queue<int> q;
    q.push(0);
    visit[0][0] = -2;
    while (!q.empty()) {
        int S = q.front();
        q.pop();
        int x = S / 5;
        int y = S % 5;
        if (x == 4 && y == 4)return;
        for (int i = 0; i < 4; ++i) {
            int tx = x + direction[i][0];
            int ty = y + direction[i][1];
            if (tx < 0 || ty < 0 || tx > 4 || ty > 4 || Graph[tx][ty] == 1 || visit[tx][ty] != -1)continue;
            visit[tx][ty] = S;
            q.push(tx * 5 + ty);
        }
    }
    return;
}

void output() {
    vector<int> v;
    int x = 4 * 5 + 4;
    while (visit[x / 5][x % 5] != -2) {
        v.push_back(x);
        x = visit[x / 5][x % 5];
    }
    cout << "(0, 0)" << endl;
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << "(" << v[i] / 5 << ", " << v[i] % 5 << ")" << endl;
    }
}

int main() {
    input();
    bfs();
    output();
    return 0;
}


#include <stdio.h>

int n, m;
char maps[110][110];
int dir[8][2] = {{1,  0},
                 {-1, 0},
                 {0,  -1},
                 {0,  1},
                 {1,  1},
                 {1,  -1},
                 {-1, 1},
                 {-1, -1}};

int dfs(int i, int j) {
    int k;
    if (i < 0 || i >= n || j < 0 || j >= m || maps[i][j] == '.') {
        return 0;
    }
    maps[i][j] = '.';
    for (k = 0; k < 8; k++) {
        dfs(i + dir[k][0], j + dir[k][1]);
    }
    return 1;
}

int main(void) {
    int i,j,sum = 0;
    scanf("%d%d\n", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%c", &maps[i][j]);
        }
        getchar();
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sum += dfs(i, j);
        }
    }
    printf("%d\n", sum);
    return 0;
}

#include<stdio.h>

int main(void) {
    long long int arr[21] = {0, 0, 1, 2};
    int i = 4, a;
    for (; i < 21; i++) {
        arr[i] = arr[i - 1] * (i - 1) + arr[i - 2] * (i - 1);
    }
    while (scanf("%d", &a) != EOF) {
        printf("%lld\n", arr[a]);
    }
    return 0;
}

#include <stdio.h>

unsigned long long int xjc(int n, int r) {
    unsigned long long fact = 1;
    r++;
    for (; r <= n; r++)
        fact = fact * r;
    return fact;
}

int main(void) {
    int n, r;
    long long int ways;
    while (scanf("%d%d", &n, &r) != EOF) {
        ways = (n < r) ? xjc(n + r - 1, r - 1) / xjc(n, 1) : xjc(n + r - 1, n) / xjc(r - 1, 1);
        printf("%llu\n", ways);
    }
    return 0;
}

#include <stdio.h>

long long int jc(long long int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int main(void) {
    int cases;
    long long ways, m, n;
    scanf("%d", &cases);
    while (cases--) {
        scanf("%lld%lld", &m, &n);
        ways = (jc(n - 1) * jc(n - 1)) * n / jc(n - m);
        printf("%lld\n", ways);
    }
    return 0;
}

#include <stdio.h>

int main(void) {
    long long int ways[46], levels, i;
    ways[1] = ways[2] = 1;
    for (i = 3; i < 46; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];
    }
    while (scanf("%lld", &levels) != EOF) {
        printf("%lld\n", ways[levels]);
    }
    return 0;
}
