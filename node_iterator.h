// node_iterator.h file for template node_iterator

// forward declaration of the Template_LL class so that the compiler will continue reading through the node_iterator code
template<class T> class dlist;

template<class T>
class node_iterator{
    public:
        // make this class a friend of the Template_LL so that Template_LL functions can access the current pointer in a node_iterator object
        friend class dlist<T>;

        node_iterator(dnode<T>* c = NULL){current = c;}

        bool operator != (node_iterator other)const;
        bool operator == (node_iterator other)const;

        T operator * ()const;

        // prefix ++
        node_iterator operator ++ ();

        // postfix ++
        node_iterator operator ++ (int);
    
        // prefix --
        node_iterator operator -- ();

        // postfix --
        node_iterator operator -- (int);

    private:
        dnode<T>* current;
};

#include "node_iterator.template"