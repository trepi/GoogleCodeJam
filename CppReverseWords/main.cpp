/* 
 * File:   main.cpp
 * Author: raul
 *
 * Created on 27 de abril de 2011, 0:05
 */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

void test(int test);
/*
 * 
 */
int main(int argc, char** argv) {
    int tests = 0;
    cin >> tests ;
    string new_line ;
    getline(cin, new_line, '\n');
    for (int i = 0; i < tests; i++) {
        test(i);
    }
    return 0;
}

void test(int test) {
    string line;
    getline(cin, line, '\n');

    istringstream iss (line);

    string word;
    stack<string> words;
    while ( iss >> word ) {
        words.push(word);
    }

    cout << "Case #" << (test + 1) << ':' ;
    while ( !words.empty() ){
        cout << ' ' << words.top() ;
        words.pop();
    }
    cout << "\r\n";
}

