//判断闰年
//判断月份天数
#include <stdio.h>
int main()
{
	int year,month;
	printf("\n\n请输入一个年份和月份：");
	scanf("%d %d",&year,&month);
	if(month >= 1 && month <= 12)
	  {
	      switch(month)
		{                           		
		    case 1:
		    case 3:
		    case 5:
		    case 7:
		    case 8:
		    case 10:
		    case 12:
			 printf("%d 年 %d 月有31天！\n\n",year,month);
		       						break;
		    case 4:
		    case 6:
		    case 9:
		    case 11:
			 printf("%d 年 %d 月有30天！\n\n",year,month);
	 							break;
		    case 2:
			if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)) 
			  {
			  printf("%d 年 %d 月有29天！\n\n",year,month);									        
			  					 break;
			  }
		        else
			  printf("%d 年 %d 月有28天！\n\n",year,month);
		    						 break;
		}
	  }
	else
	       printf("\n您输入的月份有误，请重新输入1-12的数字！\n\n");
	printf("\n\n请输入一个年份和月份：");
        scanf("%d %d",&year,&month);
	      switch(month)
                {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                         printf("%d 年 %d 月有31天！\n\n",year,month);
                                                                break;
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                         printf("%d 年 %d 月有30天！\n\n",year,month);
                                                                break;
                    case 2:
                        if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
                          {
                          printf("%d 年 %d 月有29天！\n\n",year,month);
                                                                 break;
                          }
                        else
                          printf("%d 年 %d 月有28天！\n\n",year,month);
                                                                 break;
                }

	return 0;
}
