#include <stdio.h>
int main()
{
	int a;
	printf("\a请任意输入一个字母，数字或符号:");
	a=getchar();
	        if(a>='0'&&a<='9'){
                       printf("\aIt is a digit Character\n\n");}
			
		else if((a>='a'&& a<='z')||(a>='A'&&a<='Z')){
			printf("\aIt is an English character\n\n");}
		else {
		       	printf("It is other character\n\n");}

	return 0;
}
