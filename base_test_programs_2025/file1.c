#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int data[8192] = {0};
int contextStack[8192] = {0}, contextStackIndex = 0;
int opStack[8192] = {0}, opStackIndex = 0, opTemp = 0;
int lastBindDataIndex = 0;

int main() {
    contextStackIndex = 0;
    opStackIndex = 0;
    opTemp = 0;
    lastBindDataIndex = 0;

    //";"

    //"4"
    opStack[++opStackIndex] = opTemp = 0x00000004;

    //"read"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"8"
    opStack[++opStackIndex] = opTemp = 0x00000008;

    //"read"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"sub"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex]; --opStackIndex;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"*"
    opTemp = opStack[opStackIndex - 1] *= opStack[opStackIndex]; --opStackIndex;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"/"
    opTemp = opStack[opStackIndex - 1] /= opStack[opStackIndex]; --opStackIndex;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"%"
    opTemp = opStack[opStackIndex - 1] %= opStack[opStackIndex]; --opStackIndex;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"sub"
    opTemp = opStack[opStackIndex - 1] -= opStack[opStackIndex]; --opStackIndex;

    //"10"
    opStack[++opStackIndex] = opTemp = 0x0000000A;

    //"*"
    opTemp = opStack[opStackIndex - 1] *= opStack[opStackIndex]; --opStackIndex;

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"10"
    opStack[++opStackIndex] = opTemp = 0x0000000A;

    //"/"
    opTemp = opStack[opStackIndex - 1] /= opStack[opStackIndex]; --opStackIndex;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"XXX"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"XXX"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"10"
    opStack[++opStackIndex] = opTemp = 0x0000000A;

    //"%"
    opTemp = opStack[opStackIndex - 1] %= opStack[opStackIndex]; --opStackIndex;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"XXX"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"YYY"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    return 0;
}