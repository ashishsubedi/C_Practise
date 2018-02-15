#include<stdio.h>

int main(){

    int n,i;
    double avg,sum=0;
    scanf("%d",&n);

    double a[n];
    for(i = 0; i< n; i++){
        scanf("%lf",&a[i]);
        sum += a[i];
    }
    avg = (sum)/n;
    printf("The average is %lf\n",avg);

    return 0;
}
