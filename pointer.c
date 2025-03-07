#include <stdio.h>
int main() {
    int i=5;
    int* j=&i;
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",j);
    printf ("the value at adress j is %d\n",*(&i));

    return 0;
}
