#include<iostream>
using namespace std;

int stop;

int ans(int n)
{
    if(n==stop)
        return 1;
    return (ans(++n)+1)*2;
}

int main()
{
    int n;
    while(cin >> n)
    {
        stop=n;
        cout << ans(1) << endl;
    }
    return 0;
}
