#include <iostream>

const int ArSize = 16;

int main(int argc, char const *argv[])
{
    using namespace std;

    //1.forloop
    for(int i = 0; i < 5; i++)
    {
        cout << "C++ konws loops.\n";
    }
    cout << "C++ konws when to stop.\n";

    //2.num_test
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    
    int i;
    for(i = limit; i; i--)
    {
        cout << "i = " << i << endl;
    }
    cout << "Done now that i = " << i << endl;
    
    //3.express
    int x;
    cout << "The expression x = 100 has the value: ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value: ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value: ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "The expression x < 3 has the value: ";
    cout << (x < 3) << endl;
    cout << "The expression x > 3 has the value: ";
    cout << (x > 3) << endl;

    //4.formore
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    
    for(int i = 0; i < ArSize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    
    




    return 0;
}
