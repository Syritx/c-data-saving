#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef SAVE_DATA_INIT
#define SAVE_DATA_INIT

bool initSaveData(char* data, char* name, char* fileType) {
    FILE *file;
    
    char* fullFileName = malloc(strlen(name)+1+4);

    strcpy(fullFileName,name);
    strcat(fullFileName,fileType);

    // writing the data
    file = fopen(fullFileName,"w+");
    if (file == NULL) return false;

    for (int i = 0; i < sizeof(data)/2; i++) {
        fprintf(file, "%c",data[i]);
    }
    fclose(file);
    return true;
}

char* initLoadData(char* fileName, char* fileType) {
    FILE *file;
    char* fullFileName = malloc(strlen(fileName)+1+4);

    strcpy(fullFileName,fileName);
    strcat(fullFileName,fileType);

    static char data[1000];
    int id = 0; 

    file = fopen(fullFileName,"r");
    while (fgets(data,1000,file) != NULL) {}
    return data;
}

#endif