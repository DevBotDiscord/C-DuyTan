#include <stdio.h>
#include <string.h>
#include <ctype.h>

void timtheoten(string tens[], char ten[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(strcmp(strupr(tens[i]), strupr(ten)) == 0) {
            printf("Ten HS: %s\n", tens[i]);
            break;
        }
    }
}

int main() {
    string tens[] = {
        "John Doe",
        "Jane Doe",
        "Michael Smith"
    };

    char ten[] = "john doe";
    timtheoten(tens, ten, 3);

    return 0;
}