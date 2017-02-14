#include <iostream>
#include "./AddFromOneToN/AddFromOneToN.h"
#include <stdio.h>
#include "./CountOneInBinary/CountOnInBinary.h"

void printFunctionList() {
    FILE *fp;
    char ch;
    fp = fopen("/Users/zhangyiming/Documents/code/oneAlgorithmPerDay/project/functionlist.txt", "r");
    if (fp == NULL)
        printf("can not open!\n");
    else {
        fscanf(fp, "%c", &ch);
        while (!feof(fp)) {
            putchar(ch);
            fscanf(fp, "%c", &ch);
        }
        fclose(fp);
    }
    printf("\n");
};

int main() {


    printFunctionList();
    char *functionNumber;

    std::cout << "please input the function number:";
    std::cin >> functionNumber;

    int funN = std::atoi(functionNumber);


    switch (funN) {
        case 1: {
            PROJECT_USEFUNCTIONPOINTERTOADD_H::useFuncionpointerToAdd();
            break;
        }
        case 2: {
            PROJECT_USEGENERATERFUNCTIONTOADD_H::useGeneraterFunctionToAdd();
            break;
        }
        case 3: {
            PROJECT_USEABSTRACTFUNCTIONTOADD_H::useAbstractFunctionToAdd();
            break;
        }
        case 4: {
            PROJECT_COUNTONINBINARY_H::intNumberToMoveToRight(-10);
            break;
        }
        case 5: {
            PROJECT_COUNTONINBINARY_H::flagToMoveLeft(10);
            break;
        }
        case 6:{
            PROJECT_COUNTONINBINARY_H::useAndFunction(10);
            break;
        }
        case 7:
        {
            PROJECT_COUNTONINBINARY_H::useORFunctionToGetZeroInIntNumber(10);
            break;
        }
    }


    return 0;
}

