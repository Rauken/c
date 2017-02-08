#include<stdio.h>
#include<stdlib.h>
#define pf printf

void llenar(int A[10]){

	for(int i=0;i<=9;i++){
		A[i]=rand()%19+1;
		pf(" %i ",A[i]);
	}
}
/******************************************************/
int mayor(int A[10]){
  int may=0;
  for(int i=0;i<=9;i++){
	  if(may<A[i]){
		  may=A[i];}
  }
      return may;
}
/********************************************************/
int menor(int A[10]){
  int men=A[0];
  for(int i=0;i<=9;i++){
	  if(men>A[i]){
		  men=A[i];}
  }
      return men;
}
/********************************************************/
int suma(int A[10]){
   int sum=0;
   for(int i=0;i<=9;i++){
	   sum=sum+A[i];
      }
return sum;
}
/*****************************************************/
int prom(int A[10]){

	int p=suma(A);
	return p/10;
}

void main(){

	int A[10],may,men,sum,p;
	llenar(A);
	may=mayor(A);
	men=menor(A);
	sum=suma(A);
	p=prom(A);
	printf("El mayor es %i,el menor es %i, la suma es %i, el promedio es %i   ",may,men,sum,p);
}
