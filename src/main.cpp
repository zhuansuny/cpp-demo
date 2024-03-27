#include <iostream>
#include "vector.h"
#include "thread_pool.h"
#include "class.hpp"
#include "person.h" // 设置 -I
#include "add.h"
using namespace std;
int main()
{
    testMap();
    // // tread_demo();
    vector_demo();
    Add(1, 2);
}
