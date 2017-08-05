#include <stdio.h>

int main() {
	int a,b=0,c=0,d=0,sum                                                                                                                                                                                                                                                                                                                                                                                                            ;
	scanf("%d",&a);
	b=a+(a*10);
	c=b+(a*100);
	d=c+(a*1000);
	sum=a+b+c+d;
	printf("sum=%d",sum);
	return 0;
}
