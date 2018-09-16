#include <iostream>
#include <cstring>


struct inflatable
{
    char name[20];
    float volume;
    double price;
};

using namespace std;

char * getname();

int main(int argc, char const *argv[])
{

    //addpntrs
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double * pw = wages;//指向数组
    short * ps = &stacks[0];//等同于，指向数组的第一项的地址

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";

    //ptrstr
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps0;

    cout << animal << " and " << bird << endl;
    cout << "Enter a kind of animal: ";
    cin >> animal;
    cin.get();//end input
    ps0 = animal;
    cout << ps << "!\n";

    //字符串强制转换，以输出指针地址
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps0 << " at " << (int *) ps0 << endl;

    ps0 = new char[strlen(animal) + 1];
    strcpy(ps0, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps0 << " at " << (int *) ps0 << endl;
    delete [] ps0;

    //newstrct

    //箭头成员运算符，用于指向结构的指针
    inflatable * ps1 = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps1->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps1).volume;
    cout << "Enter price: $";
    cin >> ps1->price;
    cout << "Name: " << (*ps1).name << endl;
    cout << "Volume: " << ps1->volume << " cubic feet\n";
    cout << "Price: $" << ps1->price << endl;
    delete ps1;

    //delete
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete [] name;//释放内存，回收

    name = getname();
    cout << name << " at " << (int *) name << endl;//重复利用释放内存
    delete [] name;

    return 0;
}

char * getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}