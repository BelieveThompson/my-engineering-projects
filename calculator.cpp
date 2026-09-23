#include <iostream>
using namespace std;
int main(){
 double a,b; char op;
 cout<<"Believe Calculator"<<endl;
 cin>>a>>op>>b;
 if(op=='+') cout<<a+b;
 if(op=='-') cout<<a-b;
 if(op=='*') cout<<a*b;
 if(op=='/') cout<<a/b;
 return 0;
}