#include <stdio.h>

struct  Tri
{
    int x;
    int y;
    int z;
};

void main (void) {
    
    struct Tri v1 = {1,0,5};
    struct Tri v2 = {3,3,3};
    struct Tri v3 = {0,10,0};
    printf("(%d,%d,%d)",v1.y,v2.y,v3.y);
    v1.z+= 10;
    v2.z+= 10;
    v3.z+= 10;
    printf("(%d,%d,%d)",v2.x,v2.y,v2.z);
    
}
