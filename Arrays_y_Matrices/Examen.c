//Ejercicio del examen de Programaci�n I del dia 19/11/2021 realizada con funciones.
#include <stdio.h>
#include <stdlib.h>
#define min 3
#define max 25
// ================ PROTOTIPOS ============================== //
void carga_matriz(float (*m)[max],int fil,int col);
void max_filas(float (*m)[max],int fil, int col);
void media_col(float (*m)[max],int fil, int col);
void minimo_global(float (*m)[max],int fil, int col);
void salida(float (*m)[max],int fil, int col);
// ========================================================== //
void carga_matriz(float (*m)[max],int fil,int col){
	int i,j;
	for(i=0;i<fil-1;i++){
		for(j=0;j<col-1;j++){
			printf("Introduzca elemento [%d] [%d] ==> ",i+1,j+1);
			scanf("%f",&m[i][j]);
		}
	}
}
void max_filas(float (*m)[max],int fil, int col){
	int i,j;
	for(i=0;i<fil-1;i++){
		m[i][col-1]=m[i][0];
		for(j=1;j<col-1;j++){
			if (m[i][j]>m[i][col-1])
				m[i][col-1]=m[i][j];
		}
	}	
}
void media_col(float (*m)[max],int fil, int col){
	int i,j;
	for(j=0;j<col-1;j++){
		m[fil-1][j]=0;
		for(i=0;i<fil-1;i++)
			m[fil-1][j]+=m[i][j];
		m[fil-1][j]/=fil-1;
	}
}
void minimo_global(float (*m)[max],int fil, int col){
	int i,j;
	m[fil-1][col-1]=m[0][0];
	for (i=0;i<fil-1;i++)
		for(j=0;j<col-1;j++){
			if (m[i][j]<m[fil-1][col-1])
				m[fil-1][col-1]=m[i][j];
		}
}
void salida(float (*m)[max],int fil, int col){
	int i,j;
	printf("\n\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%3.0f",m[i][j]);
		}
		printf("\n");
	}
}
int main(){
	float m[max][max];
	int fil,col;
	do{
		printf("Introduzca el n� de filas ==> ");
		scanf("%d",&fil);
	}
	while(fil<3 || fil>25);
	do{
		printf("Introduzca el n� de columnas ==> ");
		scanf("%d",&col);
	}
	while(col<3 || col>25);
	carga_matriz(m,fil,col);
	max_filas(m,fil,col);
	media_col(m,fil,col);
	minimo_global(m,fil,col);
	salida(m,fil,col);
	return 1;
}