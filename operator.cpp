#include <iostream>

using namespace std;
class base
{
public:
    int data;
    string s;
    base(string val)
    {
        s = val;
    }
    base operator+(base a)
    {
        base temp("");
        temp.s = s + a.s;
        return temp;
    }
};

int main()
{

    // Example of operator overloading
    base a("kartik");
    base b("meena");
    base c = a + b;
    cout << c.s << endl;

    return 0;
}