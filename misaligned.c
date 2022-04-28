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
            //printf("%d  %s | %s\n", i * 5 + j, majorColorlist[i], minorColorlist[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    int output;
    printf("%s|%s\n", majorColorlist[0], minorColorlist[0]);
    printf("%s|%s\n", majorColorlist[3], minorColorlist[3]);
    printf("%s|%s\n", majorColorlist[15], minorColorlist[15]);
    output = strcmp(majorColorlist[0], "White");
    assert(output == 1);
    assert(result == 25);
    //assert(result == 0);
    //assert(strcmp(majorColorlist[0],"White"));
    //assert(strcmp(minorColorlist[0],"Blue"));
    printf("All is well (maybe!)\n");
    return 0;
}
