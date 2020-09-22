#include "data.h"
#include <stdio.h>
#include <stdbool.h>

void saveData(char data[], char fileName[]) {
    bool hasSaved = initSaveData(data, fileName, ".txt");
    hasSaved == true ? printf("data successfully saved\n") : printf("had trouble saving data\n");
}

char* loadData(char fileName[]) {
    return initLoadData(fileName,".txt");
}