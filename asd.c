#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char **a,char **b){
    char *n ;
    n = *a;
    *a = *b;
    *b = n;
}
int main(){
    // char x[20] = "Hello", y[20] = "world";
    char * x = (char*)malloc(sizeof(char*)* 20);
    char *y = (char *)malloc(sizeof(char *) * 20);
    x = "Hello"; y ="world";
    char ** px = &x; char **py = &y;
   
    
    swap(px,py);
    printf("%s %s", *px,*py);

}