#include<iostream>
using namespace std;
int main()
{
    int n,frist=0,secound=1,next;
    cout<<"enter number of terms";
    cin>>n;
    cout<<"fibonacll series";
    for(int i=1;i<=n;i++)
    {
        cout<<frist<<"";
         next=frist+secound;
         frist=secound;
         secound=next;
        
    }
    return 0;
}