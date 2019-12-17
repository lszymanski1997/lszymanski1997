#include <stdio.h>
int ilecyfr(int);
int main(){
    int liczba;
    printf("podaj liczbe\n");
    scanf("%i",&liczba);
    printf("\nliczba cyfr = %i",ilecyfr(liczba));
return 0;
}
int ilecyfr(int liczba){
    int cyfry=0;
    while (liczba!=0){
               liczba/=10;
                cyfry++;
           }
return cyfry;
}
