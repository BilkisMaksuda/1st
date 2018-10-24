#include <iostream>

using namespace std;

class test
{
    int a,b;
public :
    test(){}
    test(int x, int y)
    {
       a = x; b = y;
    }

    void display();
    void operator=(test a);
};

void test :: display()
{
    cout << "a = " << a ;
    cout << "  b = " << b << endl;
}

void test :: operator=(test s)
{
    a = s.a;
    b = s.b;
}


int main()
{
   test A(5,7);
   cout << "A : ";
   A.display();
   test B(2,6);
   cout << "B : ";
   B.display();
   B = A;
   cout << "B : ";
   B.display();


   return 0;
}
