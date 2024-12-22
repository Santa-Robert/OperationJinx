#include <iostream>
#include "problems.h"

using namespace std;

int digLen(int x ) {

    int counter = 0;

    while(x>0){

        x=x/10;
        counter++;

    }

    return counter;

}
