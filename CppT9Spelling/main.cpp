/* 
 * File:   main.cpp
 * Author: raul
 *
 * Created on 29 de abril de 2011, 22:55
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void spelling(char c );
void testcase(short index, string line);

static short lastkey= -1;
static string keys [] = {   " "     ,
                            ""      , "abc" ,  "def",
                            "ghi"   , "jkl",  "mno",
                            "pqrs"  , "tuv" ,  "wxyz"};


/*
 * 
 */
int main(int argc, char** argv) {
    short tests;
    cin >> tests;

    string line;
    getline(cin, line, '\n');

    for (int i = 0; i < tests; i++) {
        lastkey = -1;
        getline(cin, line);
        testcase(i, line);
    }

    return 0;
}

void testcase(short index, string line ){
    cout << "Case #" <<  (index + 1) << ": " ;
    for (int i = 0; i < line.length(); i++) {
        spelling(line[i]);
    }
    cout << "\r\n";

}

void spelling (char ch) {
    short key ;
    for (key = 0; key < 10 ; key++) {
        string chs = keys[key];
        short pos = chs.find(ch);
        if ( pos != string::npos  ){
            if ( lastkey == key ) {
                cout << ' ' ;
            }
            for (int i = 0; i <= pos; i++) {
                cout << key ;
            }
            lastkey = key ;
            break;
        }

    }
}