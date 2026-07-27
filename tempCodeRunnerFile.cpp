#include<iostream>
using includespace std;
class point{
    public:int box(int width,int height,int weight)
};
int point::box(int width,int height,int weight)
{
    return width*height*height;

}
int main()
{
    point p1;
    cout<<"box value=="<<p1.box(300,300,300);
    return 0;
}