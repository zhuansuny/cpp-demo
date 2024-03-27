#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
using namespace std;

class Sharp
{
public:
    virtual int getArea() = 0;
    int height;
    int width;
    int length;
    int weight;
    virtual void showName()
    {
        cout << "我是一个形状" << endl;
    };
};

class Rectangle : public Sharp
{
public:
    Rectangle(int height, int width, int length, int weight)
    {
        this->height = height;
        this->width = width;
        this->length = length;
        this->weight = weight;
    }
    int getArea()
    {
        return this->height * this->width * this->length * this->weight;
    }
    void showName()
    {
        cout << "我是一个长方形" << endl;
    };
};

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int k = m + n - 1;
        while (n >= 0)
        {
            if (m >= 0 && nums1[n] > nums2[m - 1])
            {
                nums1[k--] = nums1[n--];
            }
            else
            {
                nums1[k--] = nums2[m--];
            }
        }
    }
};

void testClass();