//1 = true ; 0 = false

#include <stdio.h>
#include <math.h>
#define N 100
int v,n,i,mul;
void nl(){
	printf("\n");
}

int giaithua(int v){
	mul = 1;
	for (int i = 1; i <= n ; i++){
		mul = mul * i;
	}
	return mul;
}

int main(){
	scanf("%d",&n);//n
	printf("%d",giaithua(n));
	return 0;
}



