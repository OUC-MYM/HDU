#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int count=0;
        int a,b;
        cin >> a;
        count=count+a*6+5;
        n--;
        while(n--)
        {
            cin >>b;
            if(b>a)
                count=count+(b-a)*6;
            if(a>b)
                count=count+(a-b)*4;
            count=count+5;
            a=b;
        }
        cout << count << endl;
    }
    return 0;
}
