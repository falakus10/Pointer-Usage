#include <stdio.h>
void show(int);
int main() {
    int variable = 10;
    int *ptr;
    ptr = &variable;
    *ptr = 30;

    printf("%d\n", *ptr);
    show(20);
    void (*fptr)(int d);
    fptr = show;

    printf("%p\n", fptr);
    (*fptr)(44);
    fptr(55);

    return 0;
}
void show(int d){
    printf("%d", d);
}