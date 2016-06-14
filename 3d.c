#include <stdio.h>

main(){
	short i,j,t,f;
	short m=4;
	short n=4;
	double a[4][4]={{5,6,7,2},{2,9,8,3},{8,2,1,7},{3,6,2,9}};
	double b[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	for (j=0;j<=(m-1);j++){
		for (f=(j+1);f<=(m-1);f++){
			b[f][j]=a[f][j]/a[j][j];
				}
		for (i=(j+1);i<=(n-1);i++){
			for (t=j;t<=(n-1);t++){
				a[i][t]=a[i][t]-(a[j][t]*b[i][j]);
			}
		}
	}

	for (i=0;i<=(m-1);i++){
		for (j=0;j<=(n-1);j++){
			printf("%f",a[i][j]);
		}
		printf("\n");
	}
}
