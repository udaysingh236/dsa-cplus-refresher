#include <iostream>
#include <stdio.h>

using namespace std;


int main() {
    int stackVar = 10;
    int &refStackVar = ++stackVar; //It will work
    // int &refStackVar = stackVar++; //It will not work
    cout<<refStackVar<<endl;
    stackVar = 433;
    cout<<refStackVar<<endl;
    int oneMoreVar = 30;
    refStackVar = oneMoreVar;
    cout<<refStackVar<<endl;
    return 0;
}

/*
11
433
30
*/ 