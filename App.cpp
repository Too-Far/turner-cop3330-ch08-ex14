/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Turner
 */

#include "std_lib_facilities.h" 

void function1(const int x){
    cout<<x*10<<endl;
}

void function2(int i){
    i = 7;
    cout<<i<<endl;
}

void function3(int j){
    j = 2;
    cout<<j-10<<endl;
}

int main()
{
    function1(17);
    int i = 12;
    int j = 5;
    function2(i);
    function3(j);
    return 0;
}