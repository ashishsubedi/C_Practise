#include<stdio.h>
#include<math.h>
#include<string.h>

int todecimal(char bits[20],int length);
int main(){
  
    char bin[20];
    int i,l;

    scanf("%s",bin);
    l = strlen(bin);
    int dec = todecimal(bin,l);
    printf("%d",dec);
    return 0;

}
int todecimal(char bits[],int length){

    int dec = 0,i,r;
    r = length;
    for(i=0; i<length;i++,r--){
        
        dec += (bits[r-1]-'0') * pow(2,i);

    }
    return dec;
}