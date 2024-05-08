/******************************************************************************

Variable pointer, Pointer to Array and Pointer to Array created in Heap
Size of a pointer is always fixed, modern 64bit complier it is of 8 bytes
*******************************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle {
    int lenght;
    int breadth;
};

int main() {
    int stackVar = 10;
    int *stackVarPoint;
    stackVarPoint = &stackVar;
    cout<<*stackVarPoint<<endl; //10
    
    cout<<&stackVar<<endl; //address of stackVar
    
    cout<<stackVarPoint<<endl; //address of stackVar
    
    cout<<&stackVarPoint<<endl; //address of stackVarPoint which is different than stackVar
    
    
    // Pointer to array
    
    int stackArr[5] = {1,2,3,4,5};
    int *stackArrPointer;
    stackArrPointer = stackArr; //or stackArrPointer = &stackArr[0]
    for(int i=0; i<sizeof(stackArr)/sizeof(int); i++) {
        cout<<stackArr[i]<<endl;
        cout<<stackArrPointer[i]<<endl;
    }
    
    // Pointer to Heap array
    int *heapArrPointer;
    heapArrPointer = new int[5];
    for(int i=0; i<sizeof(stackArr)/sizeof(int); i++) {
        heapArrPointer[i] = i+10;
        cout<<heapArrPointer[i]<<endl;
    }
    
    delete []heapArrPointer;
    
    // Size of Pointers
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;
    cout<<sizeof(p1)<<endl; //8
    cout<<sizeof(p2)<<endl; //8
    cout<<sizeof(p3)<<endl; //8
    cout<<sizeof(p4)<<endl; //8
    cout<<sizeof(p5)<<endl; //8
    return 0;
}

/*
Output: 
10
0x7ffe8956f71c
0x7ffe8956f71c
0x7ffe8956f728
1
1
2
2
3
3
4
4
5
5
10
11
12
13
14
8
8
8
8
8
*/ 