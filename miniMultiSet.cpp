#include "miniMultiSet.h"

#include <iostream>
#include <list>
#include <set>
#include <vector>


template <typename T>
bool miniMultiSet<T>::empty() const
{
    return l.empty();
}

// is the multiset empty?
template <typename T>
int miniMultiSet<T>::size() const
{
    return l.size();
}

// return the number of elements in the multiset
template <typename T>
int miniMultiSet<T>::count (const T& item)
{
    int tally = 0;
    std::list<int>::iterator is;
    for(is=l.begin(); is!=l.end(); ++is)
    {
        if(*is==item)
            tally++;
    }
    return tally;
}

// return the number of duplicate occurrences of item
// in the multiset
template <typename T>
std::list<int>::iterator miniMultiSet<T>::find (const T& item)
{
    std::list<int>::iterator it;
    for(it=l.begin(); it!=l.end(); ++it)
    {
        if(*it==item)
            break;
    }
    return it;
}

// search for item in the multiset and return an iterator
// pointing at the first occurrence matching item, or end()
// if it is not found
template <typename T>
std::list<int>::const_iterator miniMultiSet<T>::find (const T& item) const
{
    int count=0;
    std::list<int>::iterator it;
    for(it=l.begin(); it!=l.end(); ++it)
    {
        if(*it==item)
            break;
    }
}

// constant version
template <typename T>
std::list<int>::iterator miniMultiSet<T>::insert(const T& item)
{
    l.insert(l.end(), item);
    return l.end();
}

// insert item into multi set and return an
// iterator pointing at the new element.
template <typename T>
int miniMultiSet<T>::erase(const T& item)
{
    int count=0;
    std::list<int>::iterator it;
    std::list<int>::iterator il;
    for(it=l.begin(); it!=l.end(); ++it)
    {
        if(*it==item)
        {
            it=l.erase((it));
            it--;
            ++count;
        }

    }
    return count;
}

// erase all occurrences of item from the multi set
// and return the number of items erased.
template <typename T>
std::list<int>::iterator miniMultiSet<T>::begin()
{
    return l.begin();
}

// return an iterator pointing at the first member
// in the multiset
template <typename T>
std::list<int>::const_iterator miniMultiSet<T>::begin() const
{
    return l.cbegin();
}

// constant version
template <typename T>
std::list<int>::iterator miniMultiSet<T>::end()
{
    return l.end();
}

// return an iterator pointing just past the last
// member in the multiset
template <typename T>
std::list<int>::const_iterator miniMultiSet<T>::end() const
{
    return l.cend();
}

// constant version
template <typename T>
void miniMultiSet<T>::print()
{
    for (const_iterator i(l.begin()), end(l.end());i != end;++i)
        std::cout << *i << "\n";
}
