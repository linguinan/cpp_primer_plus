#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    cout << "What year was your house built?\n";
    int year;
    cin >> year;

    //跳过换行符
    cin.get();

    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);//cin >> address;

    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done.\n";

    return 0;
}
