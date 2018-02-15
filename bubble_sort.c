#include<stdio.h>


int main(){
    
    int i,j;
    int a[5] ;
    for(i = 0; i< 5; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i<4; i++){
        for(j = 0; j < 4-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i = 0; i< 5; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
