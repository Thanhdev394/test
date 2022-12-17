#include <bits/stdc++.h>

using namespace std;
long long dem=0 , res=0, maxx;
long long n;
void f()
{
    while(n!=0)
    {
        dem++;
        res+=n%10;
        maxx = max(maxx, n%10);
        n/=10;
    }
}
int main()
{

    cin >> n;
    f();
    cout << dem << endl;
    cout << res << endl;
    cout << maxx;
    return 0;
}
