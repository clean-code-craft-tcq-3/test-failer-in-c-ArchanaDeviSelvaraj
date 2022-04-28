#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* colorpair[25];
char* buffer[25];
//const char* colorname[25];

int printColorMap() {
    char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d  %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            buffer[i]= minorColor[i];
            strcat(majorColor[i],buffer[i]);
            colorpair[i * 5 + j] = majorColor[i];
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(result == 0);
    //assert(colorpair[2]="WhiteOrange");
    printf("All is well (maybe!)\n");
    return 0;
}
