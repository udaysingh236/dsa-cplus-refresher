/*

1.) Pass and return array as arguements

*/ 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

// array is always passed as call by address
void chngArrInd(int *aptr, int chngIndx, int chngVal) { 
    aptr[chngIndx] = chngVal;
}

// create any array in heap and return pointer to it
int * crtHeapArr(int sizeOfArr) {
    return new int[sizeOfArr];
}

int areaByValue(rectangle r1) {
    r1.length = 20; //This doesnot change the value in actual structure r
    return r1.length * r1.breadth;
}

int areaByRef(rectangle &r2) {
    r2.length = 50; // This will change the value
    return r2.length * r2.breadth;
}

int main()
{
    // Array as Parameter +++ Starts ++

    int stackArr[3] = {1,2,3};
    cout<<stackArr[2]<<endl;
    chngArrInd(stackArr, 2, 10);
    cout<<stackArr[2]<<endl;
    int *hPtr = crtHeapArr(5);
    hPtr[0] = 1;
    cout<<hPtr[0]<<endl;
    
    delete []hPtr;

    // Array as Parameter +++ Ends ++

    // Structure as Parameter +++ Starts ++
    
    rectangle r = {10,20};
    cout<<areaByValue(r)<<endl;
    cout<<r.length<<endl;
    cout<<areaByRef(r)<<endl;
    cout<<r.length<<endl;

    // Structure as Parameter +++ Ends ++


    return 0;
}


/*
Output:
10
1
400
10
1000
50
*/ 