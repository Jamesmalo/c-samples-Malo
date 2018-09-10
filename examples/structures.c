#include <stdio.h>
#include <stdlib.h>


struct Prism {
    double baseArea;
    double height;
};

int prismVolume(struct Prism psm){
    return psm.baseArea * psm.height;
}

struct Pyramid {
    double baseArea;
    double height;
};

int pyramidVolume(struct Pyramid pymd){
    return pymd.baseArea * pymd.height / 3;
}

int main(){
    struct Prism paul = {100,12};
    struct Pyramid priya = {100,12};

    int paulVol = prismVolume(paul);
    int priyaVol = pyramidVolume(priya);

    printf("%d\n",paulVol );
    printf("%d\n",priyaVol );
    return 0;
}
