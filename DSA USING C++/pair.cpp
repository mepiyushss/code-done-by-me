#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, string> p;
    // p=make_pair(2,"abc");
    // another way to make pair
    // p={2,"abc"};

    // copy one pair in to another
    // pair<int,string> &p1=p;
    // p1.first=3;
    // make array of pair
    pair<int, int> p[3];
    p[0] = {1, 2};
    p[1] = {11, 22};
    p[2] = {11, 23};
    for (int i = 0; i < 3; i++)
    {

        cout << p[i].first << " " << p[i].second << endl;
    }
    swap(p[0], p[2]);
    for (int i = 0; i < 3; i++)
    {

        cout << p[i].first << " " << p[i].second << endl;
    }
    
    return 0;
}
