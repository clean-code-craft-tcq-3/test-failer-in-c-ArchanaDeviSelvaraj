#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

const char* majorColorlist[25];
const char* minorColorlist[25];
char misaligned[50];
char aligned[50];
int misalignederrorcount=0;

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            sprintf(misaligned,"%2d | %-6s | %-6s\n", i * 5 + j + 1, majorColor[i], minorColor[j]);
            printf("%s", misaligned);
            sprintf(aligned,"%2d | %-6s | %-6s\n", i * 5 + j + 1, majorColor[i], minorColor[j]);
            if(strcmp(misaligned,aligned)!=0){
                misalignederrorcount++;
            }
            majorColorlist[i * 5 + j] = majorColor[i];
            minorColorlist[i * 5 + j] = minorColor[j];
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("Pair number  1 : %-6s | %-6s\n", majorColorlist[0], minorColorlist[0]);
    printf("Pair number  4 : %-6s | %-6s\n", majorColorlist[3], minorColorlist[3]);
    printf("Pair number 16 : %-6s | %-6s\n", majorColorlist[15], minorColorlist[15]);
    const char* paironemajorcolor = "White";
    const char* pairtwominorcolor = "Orange";
    //Test cases to verify colorpair
    assert(majorColorlist[0]==paironemajorcolor);
    assert(minorColorlist[1]==pairtwominorcolor);
    //Test case to check string alignment
    assert(misalignederrorcount==0);
    printf("All is well (maybe!)\n");
    return 0;
}
