#include <stdio.h>

int main(){

    int h,m,s;
    
    scanf("%i", &h);
    scanf("%i", &m);
    scanf("%i", &s);

    printf("O TEMPO EM SEGUNDOS E = %i\n",(((h*60)+m)*60)+s);
    
    return 0;
}