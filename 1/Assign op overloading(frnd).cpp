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
    friend void operator=(test &s, test &s1);
};

void test :: display()
{
    cout << "a = " << a ;
    cout << "  b = " << b << endl;
}

void operator=(test &s, test &s1)
{
    s.a = s1.a;
    s.b = s1.b;
}


int main()
{
   test A(5,7);
   cout << "A : ";
   A.display();
   test B(2,6);
   cout << "B : ";
   B.display();
   A = B;
   cout << "A : ";
   A.display();


   return 0;
}

