#include<stdio.h>

main(){
    int codigo;
    float precoUnitario, valorTotal, opcao;
    char abacaxi[12];
    char maca[12];
    char pera[12];

    do{
        printf("Opcoes de fruta: \n 1-Abacaxi (5,00)\n 2-Maca (2,00)\n 3-Pera (4,00)");

           scanf("%d", &codigo);

            switch (codigo){
               case 1:
               precoUnitario= 5.00;
               valorTotal += 5.00;
                 strcpy(abacaxi, "Abacaxi");

                 break;

                 case 2:
                 precoUnitario= 2.00;
                 valorTotal += 2.00;
                 strcpy(maca, "Maca");

                 break;

                 case 3:
                 precoUnitario= 4.00;
                 valorTotal += 4.00;
                 strcpy(pera, "Pera");

                 break;


            }
              printf("Deseja fazer uma nova compra? 1- Sim 2- Nao");
              scanf("%d", &opcao);
              
    }while(opcao != 0);

}