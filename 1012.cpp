#include<iostream>
#include<cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
  printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n");
  double temp;
  int temp1=2;
  double sum=2.5;
  for(int i=3;i<=9;i++)
  {
      temp1=temp1*i;
      temp=1*1.0/temp1;
      sum=temp+sum;
      printf("%d %.9f\n",i,sum);
  }
}
