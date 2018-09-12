#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter you name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter you favorite dessert:\n";
    cin.get(dessert, ArSize).get();

    cout << "I have some delicious " << dessert << " for you, " << name << endl;

    return 0;
}
