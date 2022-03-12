/*
  FileName:T2_26.cpp
  Author:yanmengjia
  E-mail:2495253794@qq.com
  Time:Mar 11.2022
  Function:c++
 */

#include <iostream>

using namespace std;

int main()
{
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    cout<<"* * * * * * * *"<<endl;
    cout<<" * * * * * * * *"<<endl;
    int i=0;
    int a=8;
    int b=a;
    while(a>=1)
    {
        if(a%2)
        {
            cout<<" ";
        }
        int c=1;
        while(c<=b)
        {
            cout<<"*"<<" ";
            c++;
        }
        cout<<endl;
        a--;
    }
    return 0;
}
