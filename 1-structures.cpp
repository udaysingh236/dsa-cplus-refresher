/******************************************************************************
Structure Refresher with structure padding concept.

*******************************************************************************/
#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle 
{
    int length;
    int breadth;
} r1={10,5}, r2={20, 10};

struct structurePadding {
    int length;
    int breadth;
    char slackByte;
};

int main()
{
    struct rectangle r3;
    struct rectangle r4={30,15};
    cout<<sizeof(r3)<<endl;
    cout<<r4.length<<endl;
    cout<<sizeof(r3.breadth)<<endl;
    
    
    // Structure padding
    
    struct structurePadding sp1={10,5,'U'};
    cout<<sizeof(sp1)<<endl;
    cout<<sizeof(sp1.slackByte)<<endl;
    cout<<sp1.slackByte<<endl;
    return 0;
}

/*
Output:
8
30
4
12
1
U
*/