#include<stdio.h>
int main(){
int meses, dias, anos;

    printf("Digite a idade em anos");
    scanf("%d",&anos);

    printf("Digite a idade em meses");
    scanf("%d",&meses);

    printf("Digite a idade em dias");
    scanf("%d",&dias);

    int idadeEmDias = (anos * 365) + (meses *30) + dias;
    printf("A idade total em dias e: %d\n", idadeEmDias);

    return 0;

}