#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

float dfs(float n, float m)
{
    if (m < 3)
        return n / (n + m);
    if (n < 1)
        return 0;
    cout << n << " " << m << endl;
    float now_win = n / (n + m);
    float next_win = m / (n + m) * (m - 1) / (n + m - 1);
    // cout<<n/(n+m-2)*dfs(n-1,m-2)<<' '<<(m-2)/(n+m-2)*dfs(n,m-3)<<endl;
    return now_win + next_win * (n / (n + m - 2) * dfs(n - 1, m - 2) + (m - 2) / (n + m - 2) * dfs(n, m - 3));
}
int main()
{
    const char *str = "\2018";

    printf("%ld\n", sizeof("\2018"));
}