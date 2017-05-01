#include <stdio.h>

#define MAX_NUM 20
#define MIN_NUM -20

int main(char** argv[],int argc) {
    int i,x,y = 0;
    for (i=0; i< MAX_NUM; i++) {
        add_numbers(x,5);
        mult_numbers(y+1,2);
    }
    printf("Numbers x, y are: %d,  %d\n", x, y);
    return 0;
}     
