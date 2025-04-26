#include <iostream>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void ones();
    void display();
};

void binary::read()
{
    cout << "Enter the string you want to enter" << "\n";
    cin >> s;
}

void binary ::chk_bin()
{
    read();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "incorrect binary format";
            exit(0);
        }
    }
}

void binary::ones()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()

{

    cout << "the binary string is " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}