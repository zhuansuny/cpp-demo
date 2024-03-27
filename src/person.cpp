#include "../include/person.h"
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
using namespace std;
ostream &operator<<(ostream &os, const Person &p)
{
    os << "姓名: " << p.name << ", 年龄: " << p.age << ", 身高: " << *p.height << endl;
    return os;
}

void testMap()
{
    map<int, Person> mp;
    // Person p(18);
    // Person p1(55);
    // mp.insert(pair<int, Person>(1, Person(18)));
    // mp.insert(pair<int, Person>(2, Person(55)));
    mp[1] = Person(18);
    mp[2] = Person(55);
    for (const auto &pair : mp)
    {
        std::cout << "Person Key: " << pair.first << ", Person Value: " << pair.second << std::endl;
    }
}

void testVector()
{
    vector<Person> v1;
    v1.push_back(Person(18));
    v1.push_back(Person(55));
    v1.push_back(Person(166));
    for (const auto &p : v1)
    {
        cout << p << endl;
    }
    v1.resize(2);
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << endl;
    }
    v1.reserve(100);
}

void testList()
{
    list<Person> l;
    l.push_back(Person(18));
    l.push_back(Person(55));
    l.push_back(Person(166));
    for (const auto &p : l)
    {
        cout << p << endl;
    }
    l.empty();
}

Person test01()
{
    Person p(16);
    p.name = "张三";
    p.age = 18;
    p.height = new int(180);
    cout << "名称:" << p.name << "年龄:" << p.age << endl;
    return p;
}
void testPerson()
{
    Person p = test01();
    long &age = p.getAge();
    age = 23;
    cout << "名称:" << p.name << "年龄:" << p.age << "身高:" << *p.height << endl;
    Person p1(p);
    cout << "名称:" << p1.name << "年龄:" << p1.age << "身高:" << *p1.height << endl;
    p + p1;
    p.height = new int(180);
    cout << "名称:" << p.name << "年龄:" << p.age << "身高:" << *p.height << endl;
}