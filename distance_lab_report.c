#include<stdio.h>
#include<math.h>
typedef struct{
    int x;
    int y;
}graph;
double distance(graph);
int main(){

    graph s;
    double dist;
    
    printf("Enter x and y coordinates");
    scanf("%d%d",&s.x,&s.y);
    dist= distance(s);
    printf("The distance is : %g", dist);

    return 0;
}
double distance(graph s){
    double dist = 0;
    dist = sqrt(pow(s.x,2)+pow(s.y,2));

    return dist;
}