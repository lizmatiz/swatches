#include <iostream>
#include "dnode.h"
#include "node_iterator.h"
#ifndef DLIST_H
#define DLIST_H

template<class T>
class dlist{
    public:
        typedef node_iterator<T> iterator;

        dlist(){head = tail = NULL;}
        ~dlist();
        dlist<T>(const dlist<T>& other);
        dlist<T>& operator = (const dlist<T> &other);


        void rear_insert(T item);

        void show();

        void front_insert(T item);

        void front_remove();

        void rear_remove();

        void reverse_show();

        iterator begin() {return iterator(head);}

        iterator end() {return iterator(NULL);}

        iterator r_begin() {return iterator(tail);}

        iterator r_end() {return iterator (NULL);}

        void insert_before(node_iterator<T> it, T item);

        void insert_after(node_iterator<T> it, T item);

        int size();

        void remove(node_iterator<T> it);

    private:
        dnode<T> *head;
        dnode<T> *tail;
};

#endif

#include "dlist.template"

