#include <stdio.h>
#include <string.h>

#define RANGE 101

void eval(int num) {
    char result[10] = "";
    if ((num % 3 == 0) && (num % 5 == 0)) {
        strncpy(result, "\nFizzBuzz", sizeof(result));

    } else if (num % 3 == 0) {
        strncpy(result, "\nFizz", sizeof(result));

    } else if (num % 5 == 0) {
        strncpy(result, "\nBuzz", sizeof(result));
        
    } else {
        char temp[3];
        sprintf(temp, "\n%d", num);
        strncpy(result, temp, sizeof(result));
    }

    printf(result);
}        

int main() {
    
    for (int i = 1; i < RANGE; i++) {
        eval(i);
    }

    return 0;
}