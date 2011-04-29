/* 
 * File:   main.cpp
 * Author: raul
 *
 * Created on 24 de abril de 2011, 22:54
 */

#include <iostream>

using namespace std;

void run_test(short test);

/*
 * 
 */
int main(int argc, char** argv) {
    short tests = 0;
    cin >>  tests;

    for (int i = 0; i < tests; i++) {
        run_test(i);
    }

    return 0;
}

void run_test(short test ) {
    short credit = 0;
    cin >> credit;

    short items = 0;
    cin >> items;

    short prices [items];

    for (int i = 0; i < items; i++) {
        short price;
        cin >> price;

        for (int j = 0; j < i; j++) {
            if ( prices[j] + price == credit ){
                cout << "Case #" << (test + 1 )<< ": " << ( j + 1 ) << " " << ( i + 1 ) << "\r\n";
            }
        }

        prices[i] = price;

    }


    
}



