#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    int rn;
} student;
int main(){
    student s[5];
    int i,j;
    for(i =0; i<5; i++){
        printf("Details of %d student",i+1);
        scanf(" %[^\n]",s[i].name);
        fflush(stdin);
        //scanf("%d",&s[i].rn);
    }
    for(i = 0; i< 4; i++){
        for(j = 0; j < 4-i; j++){
            if(strcmp(s[j].name,s[j+1].name)>0){
               
              student temp= s[j];
              s[j] = s[j+1];
              s[j+1] = temp;

            }
        }
    }
    for(i=0; i<5; i++){
        printf("%s\t%d\n", s[i].name, s[i].rn);
    }

}