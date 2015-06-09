#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int num1,num2,num3;
        num1=num2=num3=0;
        double temp;
        while(n--)
        {
            cin >> temp;
            if(temp>0)
                num3++;
            else if(temp<0)
                num1++;
            else
                num2++;
        }
        cout << num1 << " " << num2 << " " << num3 << endl;
    }
}
