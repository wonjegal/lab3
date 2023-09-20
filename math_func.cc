///// Do Not Edit Here! /////

// here we go!!//
// just thought experiment //
#include <iostream>
#include <string.h>
#include "math_func.h"

using namespace std;
/////////////////////////////

int math_func(int a){
    int ret = 1;
    while (a){
        ret *= a;
        a -= 1;
    }
    return ret;
}

int math_func(int a, int b, char *op){
    if(!strcmp(op, "add")) return a + b;
    else if (!strcmp(op, "sub")) return a - b;
    else if (!strcmp(op, "mul")) return a * b;
    else if (!strcmp(op, "div")){
        if (b == 0) return 0;
        return a / b;
    }
}
    
void math_func(int a, int b, char *op, float &c){
    if(!strcmp(op, "add")) c = c + a + b;
    else if (!strcmp(op, "sub")) c = c + a - b;
    else if (!strcmp(op, "mul")) c = c + a * b;
    else if (!strcmp(op, "div")){
        if (b != 0) c = c + static_cast<float>(a)/b;
    }
}
////////// fill //////////

