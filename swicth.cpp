#include <iostream>
using namespace std;
int main(){
char c;
int a,b;
cout<<"enter first number";
cin>>a;
cout<<"enter secon number";
cin>>b;
cout<<"enter opreters(+,-,*,/)";
cin>>c;

switch (c){
    case '+':
    cout<<"sum="<<a+b;
    break;
     case '-':
    cout<<"sum="<<a-b;
    break;
     case '*':
    cout<<"sum="<<a*b;
    break;
     case '/':
    cout<<"sum="<<a/b;
    break;
    if(a!=0)
    cout<<"divition+"<<a/b;
    else 
    cout<<" do not enter 0";
    defult:
    cout<<"eneter valid number";
    return 0;
}

}
