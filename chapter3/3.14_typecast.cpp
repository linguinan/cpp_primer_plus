#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);
    
    cout << "auks = " << auks;
    cout << ", bats = " << bats;
    cout << ", coots = " << coots;
    cout << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;//此处转换用了更严格的运算符

    return 0;
}
