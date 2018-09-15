#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    //address
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and dounts address = " << &donuts << endl;
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    //pointer
    int updates = 6;
    int * p_updates;
    p_updates = &updates;//!

    cout << "Value updates " << updates;
    cout << ", *p_updates " << *p_updates << endl;

    cout << "Address: &updates " << &updates;
    cout << ", p_updates " << p_updates << endl;

    *p_updates = *p_updates + 1;//!
    cout << "Now updates = " << updates << endl;

    //init ptr
    int higgens = 5;
    int * pt0 = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt0 << "; Value of pt = " << pt0 << endl;

    //use_new
    int nights = 1001;
    int * pt = new int;//!
    *pt = 1001;

    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int value = " << *pt << ": location " << pt << endl;
    
    double * pd = new double;//!
    *pd = 10000001.0;
    cout << "double value = " << *pd << ": location " << pd << endl;

    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);//!
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);//! address same size
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    //arraynew
    double * p3 = new double[3];//new
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1;//指针前移
    cout << "Now p3[0] is " << p3[0] << " and ps[1] is " << p3[1] << ".\n";

    p3 = p3 -1;//后移
    delete [] p3;//free memory
    
    return 0;
}
