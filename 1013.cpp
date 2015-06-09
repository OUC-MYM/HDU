#include<iostream>
using namespace std;

int main()
{
    int num,sum;

    while(cin >> num && num)
    {
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
