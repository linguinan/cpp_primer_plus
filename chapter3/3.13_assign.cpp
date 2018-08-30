#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    //初始化类型转换
    float tree = 3;
    int guess(3.9832);//强转
    int debt = 7.2E12;//每次值都不同

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    return 0;
}
