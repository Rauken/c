#include <stdio.h>
#include <stdlib.h>

struct pila{
       int x;
       struct pila *sig;
       };
       
struct cola{
       int x;
       struct cola *sig;
       };
       
struct pila *tope, *p;
struct cola *q ,*c,*frente, *final;
/**************************************************************/ 
void push (struct pila *p){
     if(tope==NULL){
                    tope=p;
                    p->sig=NULL;
                    }
     else{
          p->sig=tope;
          tope=p;
          }
     }
/***************************************************************/
void insertar(struct cola *q,int x){
        q->x=x;   
     if(frente==NULL){
                     frente=q;
                     final=q;
                     q->sig=NULL;                                   
                     }
      else{
        final->sig=q;
        q->sig=NULL;
        final=q;}
     }
     
/***************************************************************/
void mostrar(struct pila *p){
     if(tope!=NULL){
     while(p!=NULL){
                    printf("%d, ",p->x);
                    p=p->sig;
                    }
                    }
     else{
          printf("pila vacia");
          }
     }
/***************************************************************/

int eliminar(struct pila *p){
    int x;
    if(tope!=NULL){
                   x=p->x;
                   tope=tope->sig;
                   }
    else{
         printf("pila vacia");
         }
    free(p);
    return x;
    }
/****************************************************************/
int main(){
     int x,op;
     tope =NULL;
     frente=NULL;
     final=NULL;
     do{
          printf("\n1.-ingrese    \n2.-mostrtar    \n3.-llenar cola, eliminar pila   \n4-salir\n\n");
          scanf("%d",&op);
          switch(op){
                     case 1: p=(struct pila *)malloc(sizeof(struct pila));
                     p->x=rand()%10;
                     push(p);
                     break;
                     
                     case 2:mostrar(tope);
                     break;
                     
                     case 3:
                          do{
                          x=eliminar(tope);
                         // printf("el eliminado es %d", x);
                          q=(struct cola *)malloc(sizeof(struct cola));
                          insertar (q,x);
                          }while(tope!=NULL);
                         
                          q=frente;
                          while(q!=NULL){
                             printf("%d, ",q->x);
                             q=q->sig;
                             }           
                     break;
                     }
          }while(op!=4);
     }
