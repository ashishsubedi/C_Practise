
#include <stdio.h>
typedef struct rashika
{
    int a;
} as;
int main(){
    as a1;
    struct rashika as;
    as.a = 5;
    as.a = 10;
    a1.a = 5;
    printf("%d\t%d ",a1.a,as.a);
}