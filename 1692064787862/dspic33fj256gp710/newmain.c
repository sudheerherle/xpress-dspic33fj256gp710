/* 
 * File:   newmain.c
 * Author: I14746
 *
 * Created on May 10, 2020, 3:12 PM
 */

#include <stdio.h>
#include <stdlib.h>
const char mystring[31896]  = "This is my string ";
/*
 * 
 */

int add(int a,int b);

int main(int argc, char** argv) {
    int d = 12;
    int e = 15;
    int f = 0;
    char a;
    char b;
    char myString1[20000] = "this is me";
    f = add(d,e);
    while(1){
    f = f * 2;   
    for(int p=0;p<10;p++){
        f = f + 1;
        a = myString1[p];
        b = myString1[p+1];
    }
    // return (EXIT_SUCCESS);
    }
}

int add(int a, int b){
    int c = 0;
    char m;
    c = a + b;
    char myString2[20000] = "this is me";
    return c;
}