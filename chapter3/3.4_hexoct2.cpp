#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;//以十六进制显示蒸熟
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;//八进制
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}
