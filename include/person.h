#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    long age;
    int *height;
    Person()
    {
        this->age = 1;
        this->name = "";
        this->height = new int(180);
    };
    Person(long age)
    {
        this->age = age;
        this->name = "麻子";
        this->height = new int(180);
    };

    Person(const Person &p)
    {
        this->age = p.age;
        this->name = p.name;
        this->height = new int(*p.height);
    };
    Person &operator=(const Person &p)
    {
        if (this != &p)
        {
            // 处理自赋值，释放当前对象的资源
            delete height;
            name = p.name;
            age = p.age;
            height = new int(*p.height);
        }
        return *this;
    };
    long &getAge()
    {
        return age;
    }

    void operator+(Person &p)
    {
        age = age + p.age;
        return;
    };

    ~Person()
    {
        cout << "调用了Person的析构函数" << endl;
        if (height != NULL)
        {
            delete height;
            height = NULL;
        }
        cout << "height释放了" << endl;
    };
};

void testPerson();
void testMap();
void testVector();