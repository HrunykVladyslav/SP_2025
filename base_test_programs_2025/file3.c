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

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"while"
LABEL__WHILE_0000000002AD6258:

    //"CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "while")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_0000000002AD6258;

    //"CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"*"
    opTemp = opStack[opStackIndex - 1] *= opStack[opStackIndex]; --opStackIndex;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"XVL"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //end of while
    goto LABEL__WHILE_0000000002AD6258;
LABEL__AFTER_WHILE_0000000002AD6258:

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"while"
LABEL__WHILE_0000000002AE1510:

    //"CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "while")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_0000000002AE1510;

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"while"
LABEL__WHILE_0000000002AE5368:

    //"CYB"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "while")
    if (opTemp == 0) goto LABEL__AFTER_WHILE_0000000002AE5368;

    //"XVL"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"20"
    opStack[++opStackIndex] = opTemp = 0x00000014;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"CYB"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //end of while
    goto LABEL__WHILE_0000000002AE5368;
LABEL__AFTER_WHILE_0000000002AE5368:

    //"CYA"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //end of while
    goto LABEL__WHILE_0000000002AE1510;
LABEL__AFTER_WHILE_0000000002AE1510:

    //null statement (non-context)

    //"XVL"
    opStack[++opStackIndex] = opTemp = data[0x00000014];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    return 0;
}