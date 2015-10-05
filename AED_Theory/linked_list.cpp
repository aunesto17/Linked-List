//
//  linked_list.cpp
//  AED_Theory
//
//  Created by Alexander Arturo Baylon Ibanez on 21/09/15.
//  Copyright © 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

//#include "linked_list.hpp"


/*
char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};



template<class T>
bool cList<T>::insert(T x)
{
    cNode<T> ** p;
    if (find(x,p)) return 0;
    cNode<T> * t = new cNode<T>(x);
    t->m_next = *p;
    *p = t;
    return 1;
}

template<class T>
bool cList<T>::erase(T x)
{
    cNode<T> ** p;
    if (!find(x,p)) return 0;
    cNode<T> * t = *p;
    *p = (*p)->m_next; // igualamos puntero simple a simple
    delete t;
    return 1;
}



template<class T>
bool cList<T>::find(T x, cNode<T>**&p)
{
    for (p=&m_head; *p && (x<(*p)->m_data); p=&(*p)->m_next) {
        return *p && (x==(*p)->m_data);
    }
}


template<class T>
void cList<T>::printList()
{
    cNode<T> temp = m_head;
    int i = 0;
    cout << "-> ";
    while (temp!=nullptr) {
        cout << letras[i++] << "(" << temp->m_data << ")" << " -> ";
        temp = temp->m_next;
    }
    cout << "end" << endl;
}
*/