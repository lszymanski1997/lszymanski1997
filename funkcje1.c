#include <stdio.h>
float f1(float);
int main(){
    float x;
    printf("podaj liczbe\n");
    scanf("%f",&x);
    printf("\n%f",f1(x));
return 0;
}
float f1(float x){
    if(x>0)
        return ((1+x)/(x+4));
    else
        return ((1-x)/(x-4));
}
