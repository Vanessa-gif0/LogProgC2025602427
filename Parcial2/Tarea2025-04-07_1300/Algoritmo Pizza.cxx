 #include <stdio.h>

int main(){


char opcion;
int escoger;

printf("Quieres una pizza vegetariana? (s/n) \n");
scanf("%c", &opcion);

if(opcion == 's'){

    printf("Escoge un ingrediente extra. 1. Pimiento 2. Tofu \n");
    scanf("%d", &escoger);

    if(escoger == 1){
        printf("Tu pizza es vegetariana y los ingredientes son: mozzarella, tomate y pimiento");

    }else if (escoger == 2){
        printf("Tu pizza es vegetariana y los ingredientes son: mozzarella, tomate y tofu");

    }else{
    printf("No escogiste una opcion de la lista");

}

}else if(opcion == 'n'){

    printf("Escoge un ingrediente. 1. Pepperoni 2. Jamon 3. Salmon \n");
    scanf("%d", &escoger);

    if(escoger == 1){
        printf("Tu pizza no es vegetariana y los ingredientes son: mozzarella, tomate y Pepperoni");

    }else if (escoger == 2){
        printf("Tu pizza no es vegetariana y los ingredientes son: mozzarella, tomate y Jamon");

    }else if(escoger == 3){
        printf("Tu pizza no es vegetariana y los ingredientes son: mozzarella, tomate y Salmon");

    }else{
    printf("No escogiste una opcion de la lista");

}


}else{
    printf("No escogiste una opcion (s/n)");

}




return 0;
}