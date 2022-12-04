#include <bits/stdc++.h>

using namespace std;

long long A[10000];

int main()
{

    unsigned long long M;
    int i=0,N;
    while(cin>>M)
        A[i++]=M;
    sort(A,A+i);
    for(N=i,i=0,M=0; i<N; ++i)
        if(A[i]>M+1)break;
        else M+=A[i];
    cout<<M+1;

    return 0;


    /*
    unsigned long long num;
    int i = 0, n;

    while(cin >> num)
        D[i++] = num;

    sort(D, D + i);

    for (n = i, i = 0, num = 0; i < n; i++)
    {
        if (D[i] > num + 1) break;
        else num += D[i];
    }

    cout << num + 1;

    return 0;
    */
}
