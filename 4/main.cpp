#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string s, s1;
string xoa(string s)
{
    int i =0;
    while(i<s.size())
        if((s[i]<48)||(s[i]>57))
            s.erase(i,1);
        else
            i++;
    while((s[0]==48)&&(s.size()>1))
        s.erase(0,1);
    return s;
}

string sum(string a, string b)
{
    string res= " ";
    int m =0;
    while(a.size()>b.size())
        b='0'+b;
    while(a.size()<b.size())
        a='0'+a;
    for(int i =a.size()-1; i>=0; i--)
    {
        int s=(a[i]-48)+(b[i]-48)+m;
        m = s/10;
        res=char(s%10+48)+res;
    }
    if(m>0)
        res='1'+res;
    return res;
}
int main()
{
    getline(cin,s);
    getline(cin,s1);
    s=xoa(s);
    s1=xoa(s1);
    cout << s << endl;
    cout << s1 << endl;
    cout << sum(s,s1);
    return 0;
}
