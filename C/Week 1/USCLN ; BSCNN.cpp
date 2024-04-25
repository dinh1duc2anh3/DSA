//1 = true ; 0 = false

#include <stdio.h>
#include <math.h>
#define N 100

int v,n,a,b;
void nl(){
	printf("\n");
}

//int equal (int a, int b){
//	if (a != b) return 0;
//	return a;
//}
//
//int uscln(int a, int b){
//	if (a >= b) {
//		if (equal(a % b,b)) return equal(a%b,b);
//		else uscln(a % b,b);
//	}
//	else {
//		if (equal(a,b%a)) return equal(a,b%a);
//		else uscln(a,b%a);
//	}
//}

int main(){
	scanf("%d %d",&a,&b);
	printf("haha %d",uscln(a,b));
	return 0;
}



