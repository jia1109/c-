/*
  FileName:T2_28.cpp
  Author:yanmengjia
  E-mail:2495253794@qq.com
  Time:Mar 11.2022
  Function:c++
 */


//方法一
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int b=a/10000;
    int c=a/1000-40;
    int d=a/100-420;
    int e=a/10-4230;
    int f=a%10;
    cout <<b<<"   "<<c<<"   "<<d<<"   "<<e<<"   "<<f<< endl;
    return 0;
}

//方法二
#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout <<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e<< endl;
    return 0;
}



