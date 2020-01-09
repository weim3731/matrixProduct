#include <stdio.h>

struct
{

int m;
int n;

} jz1,jz2;

int main()
{
	printf("请输入第一个矩阵\n");
	scanf("%dx%d",&jz1.m,&jz1.n);
	printf("请输入第二个矩阵\n");
	scanf("%dx%d",&jz2.m,&jz2.n);
	if(jz1.n==jz2.m)
	{
		printf("相乘后矩阵大小为");
		printf("%dx%d",jz1.m,jz2.n);
	}else{
		printf("N");
	}
	return 0;
}
