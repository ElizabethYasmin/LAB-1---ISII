

#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "node.h"
#include "node.cpp"

using namespace std;

template <class T>

class List
{
    public:
        List();
        ~List();

        void add_sort(T);
      
        void del_by_data(T);
        void del_by_position(int);
        void print();
       
        void search(T);
       

    private:
        Node<T> *m_head;
        int m_num_nodes;
};

#endif // LIST_H
