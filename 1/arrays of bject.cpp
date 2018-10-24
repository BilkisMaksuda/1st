#include <iostream>

using namespace std;
class employee
{
    char name[20];
    float age;
public :
    void getdata(void);
    void putdata(void);
};
void employee :: getdata(void)
{
    cout << "Enter name :";
    cin >> name;
    cout << "Enter age :" ;
    cin >> age;
}

void employee :: putdata(void)
{
    cout << "Name: " << name << "\n" ;
    cout << "Age: "  << age << "\n" ;
}


int main()
{
    int n;
    cin >> n;
    employee manager[n];
    for(int i = 0; i < n; i++)
    {
        cout << "\nDetails of manager " << i + 1 << "\n";
        manager[i].getdata();
    }

    cout << "\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nManager" << i + 1 << "\n";
        manager[i].putdata();
    }


    return 0;
}
