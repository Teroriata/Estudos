#include <stdio.h>
#include <math.h>


int main(){

    float x1, y1, x2 ,y2;

    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);

    float d;

    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("A DISTANCIA ENTRE A E B = %.2f\n",d);

    return 0;
}