#include <stdio.h>
int czycyfra(char);
int main(){
    char znak;
    printf("podaj znak\n");
    scanf("%c",&znak);
    printf("\n%i",czycyfra(znak));
return 0;
}
int czycyfra(char znak){
    if(znak>='0' &&znak<='9')
        return 1;
    else
        return 0;
}
