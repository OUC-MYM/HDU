#include<iostream>
#include<cstring>
using namespace std;

char a[1050],b[1050];
int aa[1050],bb[1050];

void add(char a[],char b[])
{
    int len1=strlen(a);
    int len2=strlen(b);
    int i,j;
    memset(aa,0,sizeof(aa));
    memset(bb,0,sizeof(bb));
    for(i=len1-1,j=0; i>=0; i--)
        aa[j++]=a[i]-'0';
    for(i=len2-1,j=0; i>=0; i--)
        bb[j++]=b[i]-'0';
    for(i=0; i<1050&&(i<=len1-1||i<=len2-1); i++)
    {
        bb[i]=bb[i]+aa[i];
        if(bb[i]>=10)
        {
            bb[i]-=10;
            bb[i+1]++;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    for(int N=1; N<=T; N++)
    {
        cin >> a >> b;
        add(a,b);
        cout << "Case " << N << ":" << endl;
        cout << a << " + " << b << " = ";
        int i;
        for(i=1050; i>0; i--)
            if(bb[i])
                break;
        for(; i>=0; i--)
            cout << bb[i];
        cout << endl;
        if(N!=T)
            cout << endl;
    }
    return 0;
}
