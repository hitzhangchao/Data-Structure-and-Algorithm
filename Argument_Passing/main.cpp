#include <iostream>
using namespace std;

int swap1(int a,int b)  //按值传递是将实参拷贝给形参，之后是两个独立的对象
{
    int c=a;
    a=b;
    b=c;
}

int swap2(int &a,int &b) //引用传递相当于实参和形参绑定了，所以能改变数值
{
    int c=a;
    a=b;
    b=c;
}

int main()
{

    int a=5,b=10;
    swap1(a,b);
    cout << "swap1: a1=" << a <<"  b1="<< b << endl;

    a=5;
    b=10;
    swap2(a,b);
    cout << "swap1: a2=" << a <<"  b2="<< b << endl;
    return 0;
}
