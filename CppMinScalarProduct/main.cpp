/* 
 * File:   main.cpp
 * Author: raul
 *
 * Created on 30 de abril de 2011, 0:48
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>


using namespace std;

void testcase(short index);
int scalarproduct(int v1 [], int v2 [], int size);
/*
 * 
 */
int main(int argc, char** argv) {
    int tests ;
    cin >> tests;
    for (int i = 0; i < tests; i++) {
        testcase(i);
    }

    return 0;
}

void testcase(short index){
    int size ;
    cin >> size;

    int v1 [size];
    for (int i = 0; i < size; i++) {
        cin >> v1[i];
    }
    int v2 [size];
    for (int i = 0; i < size; i++) {
        cin >> v2[i];
    }

    sort(v1, v1+size );
    sort(v2, v2+size );

    long scalarproduct = 0;
    for (int i = 0; i < size; i++) {
        scalarproduct += (long)v1[i] * v2[size -1 -i];
    }

    cout << "Case #" << index + 1 << ": " << scalarproduct << "\r\n";
}


