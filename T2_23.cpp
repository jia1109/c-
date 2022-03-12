/*
  FileName:T2._23.cpp
  Author:yanmengjia
  E-mail:2495253794@qq.com
  Time:Mar 11.2022
  Function:c++
 */


#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,x,y;
    cin>>a>>b>>c>>d>>e;
    if(a>b)
    {
        x=a;
        y=b;
    }
    else
        x=b;
        y=a;
    if(x<c)
        x=c;
    if(x<d)
        x=d;
    if(x<e)
        x=e;
    if(y>c)
        y=c;
    if(y>d)
        y=d;
    if(y>e)
        y=e;
    cout <<"最大值="<<x<< endl;
    cout<<"最小值"<<y<<endl;
    return 0;
}
