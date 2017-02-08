#include<stdio.h>
#include<stdlib.h>

int colaA[10], frenteA=-1, finalA=-1;
int colaB[10], frenteB=-1, finalB=-1;
int pilaA[10], topeA=-1;

/*cola insertar*/
void insertar(int cola[10],int *frente,int *final, int dato){
	if(*final<9){
		if(*final==-1){
			*final=0;
			*frente=0;
			cola[*final]=dato;}
		else{
			*final=*final+1;
			cola[*final]=dato;}
	}else{
		printf("Overflow");
	}}
/*cola mostrar*/
void mostrar(int cola[10],int *frente,int *final){
	if(*frente!=-1){
		for(int i=*frente;i<=*final;i++){
			printf("%d\t", cola[i]);}
	}else{
		printf("Cola Vacia\n\n");
	}}
/*pila insertar*/
void push(int pila[10], int *tope,int x){
    if(*tope<10){
		*tope=*tope+1;
		pila[*tope]=x;
    }else{printf("Overflow");}
}
/*cola eliminar*/
void eliminar(int cola[10],int *frente,int *final){
	int x;
    if(*frente!=-1){
		x=cola[*frente];
		
		if(cola[*frente]%2==0){
                              push(pilaA,&topeA,x);
                              }else{
                                    insertar(colaB,&frenteB,&finalB,x);}
		
        *frente=*frente+1;
		if(*frente>*final){
			*frente=-1;
			*final=-1;}
	    }else{printf(" Underflow");}
}

/*pila mostrar*/
void mostrarp(int pila[10],int *tope){
	if(*tope!=-1){
	for(int i=*tope;i>=0;i--){
		printf("%i\t",pila[i]);}
	}else{printf("pilaVacia\n");}
}
/*main*/
int main(){
    int op, x;
	printf("--Bienvenido al programa colas y pilas--\n\nTanspasar los datos pares de una cola a una pila, sin perder los impares de la cola\n\nTarea 1, prueba 2\n\n");
	for(;;){
        printf("\n1.- Ingrese datos(max 10)\n2.- Mostrar cola  \n3.-Separa pares en pila y impares en cola \n4.-Mostrar archivos separados\n\nOpcion:");
		scanf("%d",&op);
		switch(op){
		case 1: printf("Ingrese valor: ");scanf("%d",&x);
			    insertar(colaA,&frenteA,&finalA,x);
				break;
		case 2: mostrar(colaA,&frenteA,&finalA);
			    break;
		case 3: do{eliminar(colaA,&frenteA,&finalA);}while(frenteA!=-1);  
				break;
		case 4: printf("mostrando cola\n");
                mostrar(colaB,&frenteB,&finalB);
		        printf("\nmostrando pila\n");
                mostrarp(pilaA,&topeA);
                break;
		}//fin switch
	}//fin for
}
