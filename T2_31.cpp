/*
  FileName:T2_31.cpp
  Author:yanmengjia
  E-mail:2495253794@qq.com
  Time:Mar 11.2022
  Function:共乘汽车节省计算器
 */


#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,x;
    cin>>a>>b>>c>>d>>e;
    x=a/c*b;
    cout <<"总费用="<<d+e+x<< endl;
    return 0;
}
