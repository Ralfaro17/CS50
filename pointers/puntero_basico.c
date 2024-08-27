#include <stdio.h>

int main(int argc, char **argv){
    int n = 50;

    char* puntero = &n;
    printf("%p\n", puntero);

    return 0;
}
