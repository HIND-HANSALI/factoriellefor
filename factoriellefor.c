#include <stdio.h>
int main(){
	int i, n, f = 1;
	
	printf("entrer un nombre n : ");
	scanf("%d",&n);
	
	if(n < 0){
		printf("ce nombre nagatif n'a pas de factorielle");
	}
    else if(n==0){
        printf("la factorielle est : 1");

    }
	else{
		for(i=1;i<=n;i++)
		{
			f = f  * i;
		}	
		printf("la factorielle de %d est %d\n", n, f);
	}	
}