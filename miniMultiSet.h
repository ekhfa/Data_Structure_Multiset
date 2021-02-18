#ifndef MINIMULTISET_H_INCLUDED
#define MINIMULTISET_H_INCLUDED

#include <iostream>
#include <list>
#include <set>
#include <vector>

using namespace std;

template <typename T>
class miniMultiSet
{
public:

    typedef typename list<T>::iterator iterator;
    typedef typename list<T>::const_iterator const_iterator;
    // miniMultiSet iterators are simply list iterators

    bool empty() const;
    // is the multiset empty?
    int size() const;
    // return the number of elements in the multiset

    int count (const T&);
    // return the number of duplicate occurrences of item
    // in the multiset

    list<int>::iterator find (const T&);
    // search for item in the multiset and return an iterator
    // pointing at the first occurrence matching item, or end()
    // if it is not found

    list<int>::const_iterator find (const T&) const;
    // constant version

    list<int>::iterator insert(const T&);
    // insert item into multi set and return an
    // iterator pointing at the new element.

    int erase(const T&);
    // erase all occurrences of item from the multi set
    // and return the number of items erased.

    list<int>::iterator begin();
    // return an iterator pointing at the first member
    // in the multiset

    list<int>::const_iterator begin() const;
    // constant version

    list<int>::iterator end();
    // return an iterator pointing just past the last
    // member in the muktiset

    list<int>::const_iterator end() const;
    // constant version
    void print();


private:
    list<T> l;
    // multiset implemented using a list
};


#endif // MINIMULTISET_H_INCLUDED
