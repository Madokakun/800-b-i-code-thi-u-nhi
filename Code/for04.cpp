#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int res=0;
    for (int i=1;i*i<=n;i++)
    if (n%i==0) res+=1+(i!=n/i);
    cout << res;


}
