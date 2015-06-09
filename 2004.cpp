#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n>100||n<0)
        {
            cout << "Score is error!" << endl;
            continue;
        }
        else if(n>=90)
        {
            cout << "A" <<endl;
            continue;
        }
        else if(n>=80)
        {
            cout << "B" <<endl;
            continue;
        }
        else if(n>=70)
        {
            cout << "C" <<endl;
            continue;
        }
        else if(n>=60)
        {
            cout << "D" <<endl;
            continue;
        }
        else
            cout << "E" <<endl;
    }
}
