#include <stdio.h>

int main() {
    char o;
    float soma = 0.0,M[12][12];
    int m,l,i,j;
    scanf("%c", &o);
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f",&M[i][j]);
		}
	}
	l=1;
	m=11;
    for(i=0;i<11;i++){
		for(j=0;j<m;j++){
			soma+=M[i][j];
		}
		m-=1;
	}
	
	if(o=='S'){
		printf("%.1f\n",soma);
	}else{
		printf("%.1f\n",soma/66.0);
	}
    return 0;
}
