#include "vector.h"
#include <vector>
void vector_demo()
{
    Dog dog;
    dog.run();
    vector<Dog> vd;

    for (int i = 0; i < 10; i++)
    {
        vd.push_back(Dog("1", i));
    }
    for (int i = 0; i < vd.size(); i++)
    {
        vd[i].run();
    }
}