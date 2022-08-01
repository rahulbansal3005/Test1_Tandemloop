#include <bits/stdc++.h>
using namespace std;


class Calculator{
  double a;
  double b;
  string op;
  public:
    void setVar(double fir,double sec,string oper)
    {
        a=fir;
        b=sec;
        op=oper;
    }
    double getCalc()
    {
        if(op=="Addition")
        return a+b;
        if(op=="Subtraction")
        return a-b;
        if(op=="Multiplication")
        return a*b;
        if(op=="Division")
        return a/b;
    }
  
};
int main() {
	Calculator obj;
	obj.setVar(5.66,5.23,"Addition");
	cout<<obj.getCalc();
  return 0;
}
