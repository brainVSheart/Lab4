#include <stdio.h>
void go(int ***p, int **z){
    *p = z;
}
int main(){
    int *b = new int;
    int *c = new int;
    int **a;
    *b = 10;
    *c = 20;
    go(&a, &b);
    printf("%d %p %p %p\n", **a, *a, a, &a);
    go(&a, &c);
    printf("%d %p %p %p\n", **a, *a, a, &a);
    delete b;
    delete c;
    return 0;
}