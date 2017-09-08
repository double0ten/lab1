#include <stdio.h>

int main (int argc, char * argv[]){
    int x=5;
    int *y;
    y = &x;
    printf("%d\n",x);
    printf("%p\n",y);
    printf("%p\n",&x);
    printf("%p\n",&y);
    printf("%d\n",y);
}
