#include<iostream>
using namespace std;

int main()
{
    int num,sum;
    string str;
    while(cin >> str && str[0]!='0')
    {
        num=0;
        int len=str.length();
        for(int i=0; i<len; i++)
            num=num+str[i]-'0';
        sum=num;
        while(num/10)
        {
            sum=0;
            while(num)
            {
                sum=sum+num%10;
                num=num/10;
            }
            num=sum;

        }
        cout <<  sum << endl;
    }
    return 0;
}
