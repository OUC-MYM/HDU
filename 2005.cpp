#include<stdio.h>
int monthday[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool is(int n)
{
    if(n%4==0&&n%100!=0 || n%400==0)
        return true;
    return false;
}

int main()
{
    int year,month,day;
    while(~scanf("%d/%d/%d",&year,&month,&day))
    {
        int all=0;
        for(int i=1; i<month; i++)
            all=all+monthday[i];
        all=all+day;
        if(is(year)&&month>2)
            all=all+1;
        printf("%d\n",all);
    }
}
