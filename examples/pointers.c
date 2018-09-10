#include <stdio.h>
#include <stdlib.h>

//ptr is an abbreviation for pointer.  It is useful to use this verbal distinction to make your code more readible.


int ptrSeparation(int* a, int* b){
    return a-b;
}

int* stack(){
    int r=10;
    return &r;
}

main(){
    int x=1;
    int y=20;
    int z=300;
    int* px = &x;
    int* py = &y;
    int* pz = &z;
    int diff = ptrSeparation(px,pz);
    printf("%p\n",(void*)px);
    printf("%p\n",(void*)py);
    printf("%p\n",(void*)pz);
    printf("%d\n",diff);
    int* dangerous = stack();
    printf("%p\n",(void*)dangerous);
}
