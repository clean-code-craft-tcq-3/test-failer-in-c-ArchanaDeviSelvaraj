#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* majorColorlist[25];
const char* minorColorlist[25];

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %*6s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            majorColorlist[i * 5 + j] = majorColor[i];
            minorColorlist[i * 5 + j] = minorColor[i];
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    printf("Pair number 1 : %s|%s\n", majorColorlist[0], minorColorlist[0]);
    printf("Pair number 4 : %s|%s\n", majorColorlist[3], minorColorlist[3]);
    printf("Pair number 16 : %s|%s\n", majorColorlist[15], minorColorlist[15]);
    const char* paironemajorcolor = "White";
    //const char* pairtwominorcolor = "Orange";
    assert(majorColorlist[0]==paironemajorcolor);
    //assert(minorColorlist[1]==pairtwominorcolor);
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
