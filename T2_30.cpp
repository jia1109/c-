/*
  FileName:T2_30.cpp
  Author:yanmengjia
  E-mail:2495253794@qq.com
  Time:Mar 11.2022
  Function:c++
 */


#include <iostream>

using namespace std;

int main()
{
    double a,b;//a表示以千为单位的体重，b表示以米为单位的身高
    double BMI;
    cin>>a>>b;
    BMI=a/(b*b);
    cout<<"BMI VALUES"<<"   "<<BMI<<endl;
    cout<<"Underweight: less than 18.5"<<endl;
    cout<<"Normal:      between 18.5 and 24.9"<<endl;
    cout<<"Overweight:  between 25 and 29.9"<<endl;
    cout<<"Obese:       30 or greater"<<endl;
    return 0;
}
