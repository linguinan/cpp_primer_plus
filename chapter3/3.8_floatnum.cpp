#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    //设置输出使用定点表示法，不会转为E表示法
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint;
    cout << " and a million mints = " << million * mint << endl;
    return 0;
}
