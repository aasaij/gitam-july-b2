//Program to multiply two matrices
#include <stdio.h>
void printMatrix(int rSize, int cSize,int res[rSize][cSize]){
	for (int r = 0; r<rSize; r++)	{
		for (int c =0; c<cSize; c++)
			printf("%4d", res[r][c]);
		printf("\n");
	}
}
int main(){
	int r1,r2,c1,c2;
	scanf("%dx%d", &r1, &c1);
	scanf("%dx%d", &r2, &c2);
	if (c1 == r2){
		int a[r1][c1], b[r2][c2], res[r1][c2];
		//getting values for matrix A
		for (int r = 0; r<r1; r++)
			for (int c = 0; c<c1; c++)
				scanf("%d", &a[r][c]);
		//getting values for matrix B
		for (int r = 0; r<r2; r++)
			for (int c = 0; c<c2; c++)
				scanf("%d", &b[r][c]);
		//Multiplying both matrices
		for (int r = 0; r<r1; r++){
			for (int c = 0; c<c2; c++){
				res[r][c]= 0;
				for (int k = 0; k<c1; k++)
					res[r][c]+=a[r][k]*b[k][c];
			}
		}
		printMatrix(r1,c2,res);
	}
	else
		printf("-1");
	return 0;
}