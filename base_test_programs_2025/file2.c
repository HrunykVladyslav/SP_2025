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

    //"12"
    opStack[++opStackIndex] = opTemp = 0x0000000C;

    //"read"
    (void)scanf_s("%d", &opTemp);
    data[opStack[opStackIndex]] = opTemp, opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"if"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_0000000002AD7F70;

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_0000000002AD7F70:

    //"else" (part of "elseif")
    if (opTemp != 0) goto LABEL__AFTER_ELSE_0000000002ADA0B0;

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"gt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] > opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "elseif")
    if (opTemp == 0) goto LABEL__AFTER_THEN_0000000002ADCE68;

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"}" (after "then"-part of elseif-operator)
    opTemp = 1;
LABEL__AFTER_ELSE_0000000002ADA0B0:
LABEL__AFTER_THEN_0000000002ADCE68:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_0000000002ADEFA8;

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"16"
    opStack[++opStackIndex] = opTemp = 0x00000010;

    //"->"
    lastBindDataIndex = opStack[opStackIndex];
    data[lastBindDataIndex] = opTemp = opStack[opStackIndex - 1], opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "else")
LABEL__AFTER_ELSE_0000000002ADEFA8:

    //null statement (non-context)

    //"MAX"
    opStack[++opStackIndex] = opTemp = data[0x00000010];

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //"if"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"=="
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"=="
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"=="
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] == opStack[opStackIndex]; --opStackIndex;

    //"&"
    opTemp = opStack[opStackIndex - 1] &= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_0000000002AE6C58;

    //"1"
    opStack[++opStackIndex] = opTemp = 0x00000001;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_0000000002AE6C58:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_0000000002AE8970;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "else")
LABEL__AFTER_ELSE_0000000002AE8970:

    //"if"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"|"
    opTemp = opStack[opStackIndex - 1] |= opStack[opStackIndex]; --opStackIndex;

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"|"
    opTemp = opStack[opStackIndex - 1] |= opStack[opStackIndex]; --opStackIndex;

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_0000000002AEE4E0;

    //"-1"
    opStack[++opStackIndex] = opTemp = 0xFFFFFFFF;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_0000000002AEE4E0:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_0000000002AF01F8;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "else")
LABEL__AFTER_ELSE_0000000002AF01F8:

    //"if"

    //"AAA"
    opStack[++opStackIndex] = opTemp = data[0x00000004];

    //"BBB"
    opStack[++opStackIndex] = opTemp = data[0x00000008];

    //"CCC"
    opStack[++opStackIndex] = opTemp = data[0x0000000C];

    //"add"
    opTemp = opStack[opStackIndex - 1] += opStack[opStackIndex]; --opStackIndex;

    //"lt"
    opTemp = opStack[opStackIndex - 1] = opStack[opStackIndex - 1] < opStack[opStackIndex]; --opStackIndex;

    //"!"
    opTemp = opStack[opStackIndex] = !opStack[opStackIndex];

    //null statement (non-context)

    //after cond expresion (after "if")
    if (opTemp == 0) goto LABEL__AFTER_THEN_0000000002AF48A0;

    //"10"
    opStack[++opStackIndex] = opTemp = 0x0000000A;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "then"-part of if-operator)
    opTemp = 1;
LABEL__AFTER_THEN_0000000002AF48A0:

    //"else"
    if (opTemp != 0) goto LABEL__AFTER_ELSE_0000000002AF65B8;

    //"0"
    opStack[++opStackIndex] = opTemp = 0x00000000;

    //"write"
    (void)printf("%d\r\n", opTemp = opStack[opStackIndex]), opStackIndex = 0;

    //null statement (non-context)

    //";"

    //";" (after "else")
LABEL__AFTER_ELSE_0000000002AF65B8:

    return 0;
}