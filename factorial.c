#include <stdio.h>

int main(void) {
	int n,f=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {
	 	f*=i;
	 }
	 printf("%d",f);
	return 0;
}
