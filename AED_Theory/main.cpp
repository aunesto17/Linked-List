//
//  main.cpp
//  AED_Theory
//
//  Created by Alexander Arturo Baylon Ibanez on 21/09/15.
//  Copyright © 2015 Alexander Arturo Baylon Ibanez. All rights reserved.
//

#include "linked_list.hpp"

int main(int argc, const char * argv[]) {
    //int a = 10;
    
    cList<int> prueba;
    cout << prueba.insert(10) << endl;
    cout << prueba.insert(9) << endl;
    cout << prueba.insert(8) << endl;
    cout << prueba.insert(10) << endl;
    cout << prueba.insert(12) << endl;
    cout << prueba.insert(1) << endl;
    cout << prueba.insert(1) << endl;
    cout << prueba.insert(1) << endl;
    cout << prueba.insert(1) << endl;
    //cout << prueba.insert(13) << endl;
    
    prueba.printList();
    
    cout << prueba.remove(1) << endl;
    cout << prueba.remove(12) << endl;
    cout << prueba.remove(10) << endl;
    prueba.printList();
    //cout << "Hola" << endl;
    
    return 0;
}
