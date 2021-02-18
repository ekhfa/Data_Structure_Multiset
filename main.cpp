#include <iostream>
#include <list>
#include <set>
#include <algorithm>

#include "miniMultiSet.cpp"

using namespace std;

int main()
{
    miniMultiSet<int> A;
    std::multiset<int>::iterator it;

    for(int i=0;i<3;i++)
    {
        int l;
        cin>>l;
        A.insert(l);
    }

    A.print();

    cout << "This size of the Multi Set is: " << A.size() << endl;

    int n;
    cin>>n;

    if(A.find(n)!=A.end())
        A.erase(n);

    A.print();

    return 0;
}
