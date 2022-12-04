#include <bits/stdc++.h>
using namespace std;
int Q[26];
int main()
{
    string S;
    cin>>S;
    int i,j;
    for(i=0; i<S.size(); ++i)
        if('A'<=S[i] && S[i]<='Z')++Q[S[i]-'A'];
        else ++Q[S[i]-'a'];

    for(i=0,j=1; j<26; ++j)
        if(Q[j]>Q[i])i=j;

    cout << char('A' + i);
}
