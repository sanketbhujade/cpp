#include <stdio.h>
#include <iostream>

void update(int *a,int *b) {
     int c=*a;
     int d=*b;
    *a=abs(c+d);
    *b=abs(c-d);    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
