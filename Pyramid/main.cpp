#include "Pyramid.h"
#include "Regular.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <set>

int main()
{
    vector<Pyramid<int>*> pyramides;
    Pyramid<int>* p = new Pyramid<int>(48, 45, 31, 57);
    Pyramid<int>* p1 = new Pyramid<int>(28, 20, 16, 32);
    Regular<int>* p2 = new Regular<int>(16, 12 , 19, 20, 8);
    pyramides.push_back(p);
    pyramides.push_back(p1);
    pyramides.push_back(p2);

    for (auto p : pyramides)
    {
        p->display();
    }

    ofstream file("output.txt");
    for (auto p : pyramides)
    {
        p->displayIntoFile(file);
    }

}