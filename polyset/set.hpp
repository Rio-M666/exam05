#ifndef SET_HPP
#define SET_HPP

#include "searchable_bag.hpp"

// Non-owning wrapper: the supplied bag must outlive the set.
class set
{
private:
    searchable_bag *_bag;

public:
    explicit set(searchable_bag &source);
    set(const set &other);
    set &operator=(const set &other);
    ~set();

    bool has(int value) const;
    void insert(int value);
    void insert(int *values, int count);
    void print() const;
    void clear();
    const searchable_bag &get_bag() const;
};

#endif
