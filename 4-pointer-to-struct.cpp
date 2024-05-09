#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main()
{
    // Pointer to stack struct
    rectangle r1 = {10,29};
    rectangle *stackP = &r1;
    cout<<stackP->length<<endl;


    // rectangle *heapP = (struct rectangle*)malloc(sizeof(r1)); //C kind of syntax
    rectangle *heapP = new rectangle;
    heapP->length = 400;
    heapP->breadth = 200;
    cout<<heapP->length<<endl;
    cout<<heapP->breadth<<endl;
    
    return 0;
}

/*
Output:
10
400
200
*/ 