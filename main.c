#include "dataStatus.cpp"
#include <math.h>
#include <stdlib.h>

int main() {

    int dat = 2180;
    int digits = floor(log10(abs(dat)))+1;
    char fullDat[digits];
    char* loadedData;

    for (int i = 0; i < sizeof(fullDat); i++) {
        fullDat[i] = '2';
    }

    saveData(fullDat,"hellofile");
    loadedData = loadData("hellofile");

    printf("%s data loaded\n",loadedData);
}