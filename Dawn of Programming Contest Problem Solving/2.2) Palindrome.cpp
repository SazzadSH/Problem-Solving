#include<bits/stdc++.h>

using namespace std;

#define PF           printf
#define SF(n)        scanf("%d", &n)
#define SFF(a,b)     scanf("%d %d", &a, &b)
#define SFFF(a,b,c)  scanf("%d %d %d", &a, &b, &c)
#define INF_I        2147483647    //max limit
#define INF          1999999999
#define PB           push_back
#define MEM(n, val)  memset((n), val, sizeof(n))
#define F            first
#define S            second
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = a; i >= b; i--)
#define BOOST        std::ios_base::sync_with_stdio(false);
#define INP          freopen("in.txt", "r", stdin);
#define OUT          freopen("out.txt", "w", stdout);
#define MP           make_pair
#define INIT_RAND    srand(time(NULL))
#define MOD          1000000007
#define MX           (100010)
#define PI           acos(-1.0)
#define eps          .0000000001

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef priority_queue<int> PQ;
typedef queue<int> Q;
typedef stringstream SS;

bool chk(int n)   {
    int tmp = n;
    int ultan = 0;
    while(tmp) {
        ultan = (ultan * 10) + (tmp % 10);
        tmp /= 10;
    }
    if(n == ultan)  {
        return 1;
    }
    ///cout << n << " " << ultan << "\n";
    return 0;
}

int main()  {

    int pos = 1;
    for(int i = 1; ; i++)   {
        if(pos > 100)  {
            break;
        }
        if(chk(i))  {
            cout << pos << " : " << i << "\n";
            pos++;
        }
    }

    return 0;
}
