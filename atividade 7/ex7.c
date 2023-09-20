#include<stdio.h>

main(){
    char olhos, cabelos, sexo;
    int idade, totalHabitantes= 0, totalEspecifico= 0;
    float salario;



    do{
        totalHabitantes++;

        do{
            printf("Digite o sexo: (m ou f)");
            scanf("%c", &sexo);
            if(sexo != 'm' && sexo != 'f'){
                printf("Opcao invalida. Digite novamente");
            }

        }while(sexo != 'm' && sexo != 'f');


        do{
            fflush(stdin);
            printf("Digite a cor dos olhos:(v- verde, p-preto, a- azul, c- castanho)");
            scanf("%c", &olhos);
            if(olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos !='c'){
                printf("Opcao invalida. Digite novamente");
            }

        }while(olhos != 'a' && olhos != 'v' && olhos != 'p' && olhos != 'c');

        do{
             fflush(stdin);
            printf("Digite a cor dos cabelos:(l- loiro, c- castanho, p-preto, r- ruivo)");
            scanf("%c", &cabelos);
            if(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && olhos !='r'){
                printf("Opcao invalida. Digite novamente");

            }
                

        }while(cabelos != 'l' && cabelos != 'c'&& cabelos != 'p' && cabelos !='r');

        do{
            fflush(stdin);
            printf("Digite o salario:");
            scanf("%c", &salario);
            if(salario <0){
                printf("Opcao invalida. Digite novamente");
            }

        }while(salario < 0);

        do{
            fflush(stdin);
            printf("Digite a idade");
            scanf("%d", &idade);
            if(idade < 10 || idade > 100){
                printf("Valor invalido");

            }

        }while(idade <10 || idade > 30);

        if(sexo == 'f' && cabelos == 'c' && olhos == 'c' & (idade > 18 && idade < 35)){
            totalEspecifico++;
        }

       


        printf("Deseja registrar um novo habitante? 2-Sim, -1 Nao");
        scanf("%d", &idade);
    }while(idade != -1);
}