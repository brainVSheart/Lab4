#include <stdio.h>
void go(int **p, int *z){
    *p = z;
}
int main(){
    int *a;
    int b = 10, c = 20;
    go(&a, &b);
    printf("%d %p %p\n", *a, (void *)a, (void *)&a);
    go(&a, &c);
    printf("%d %p %p\n", *a, (void *)a, (void *)&a);
    return 0;
}