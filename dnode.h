#ifndef DNODE_H
#define DNODE_H

template<class T>
class dnode{
    public:
        dnode(T d = T(), dnode* n = NULL, dnode* p = NULL){
            data_field = d;
            nextptr = n;
            prevptr = p;
        };

        dnode* next() {return nextptr;}
        dnode* prev() {return prevptr;}
        T data() {return data_field;}

        void set_next(dnode* n) {nextptr = n;}
        void set_prev(dnode* p) {prevptr = p;}
        void set_data(T item) {data_field = item;}

    private:
        dnode* nextptr;
        dnode* prevptr;
        T data_field;
};


#endif