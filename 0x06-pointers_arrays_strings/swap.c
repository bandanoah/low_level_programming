#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b){
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main (void){
    int x,y;
    x = 5;
    y = 10;
    printf("x:%d y:%d\n",x,y);
    swap(&x,&y);
    printf("x:%d y:%d\n",x,y);
}