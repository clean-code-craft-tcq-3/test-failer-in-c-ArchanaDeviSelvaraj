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
            printf("%d  %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            majorColorlist[i * 5 + j] = majorColor[i];
            minorColorlist[i * 5 + j] = minorColor[i];
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    int output=0;
    printf("Pair number 1 : %s|%s\n", majorColorlist[0], minorColorlist[0]);
    printf("Pair number 4 : %s|%s\n", majorColorlist[3], minorColorlist[3]);
    printf("Pair number 16 : %s|%s\n", majorColorlist[15], minorColorlist[15]);
    const char* paironemajorcolor = "White";
    const char* pairtwominorcolor = "Orange";
    if(majorColorlist[0]==paironemajorcolor)
    {
        output=1;
        //output=1 means expected results obtained
    }
    if(minorColorlist[1]==pairtwominorcolor)
    {
        output=2;
        //output=2 means expected results not obtained
    }
    assert(output == 1);
    //assert(output == 2);
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
