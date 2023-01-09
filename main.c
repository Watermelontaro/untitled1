#include <stdio.h>

int main() {
    int a,b,d;
    a=b=d=10;
    a<<=1;
    b<<=3;
    d>>=1;
    printf("%d",a);
    return 0;
}
