#include <stdio.h>

int main(int argc, char **argv){

    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));

    return 0;
}