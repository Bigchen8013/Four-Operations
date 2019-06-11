#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNumber(int a,int b)
{
	return a+rand()%(b-a+1);
}
void initializeSeed(void){
	srand(time(NULL));
}
int main(void){
	int sum,n,a,b,i=1,count=0,score,m,t,s;
    char operation;
    clock_t start,end;
    /*sum是两数运算的结果；s是选择等级模式；a,b是随机产生的两个数； 
	 m是当产生的a<b时，中间做交换的数；t是随机产生的符号；count是表示做对了几题；
	 score表示做后得分；n表示输入的答案；start和end表示做题花费的时间*/ 
printf("提示：\n");
printf("1为勇者模式！\n");
printf("2为英雄模式！\n"); 
printf("请输入你选的等级：（慎重选择哦！）\n",s);
scanf("%d",&s);
switch(s)
{
   case 1:
   	printf("欢迎进入勇者模式，期待你的表现！\n"); 
        start=clock();
        initializeSeed();
    do{
    t=generateRandomNumber(1,8);
    switch(t){                        
    	case 1:
		case 2:  
		      operation='+';
		         break;
		case 3:
		case 4:	
			operation='-';
			     break;
		case 5:
		case 6:
		        operation='*';
		          break;
		case 7:
		case 8:
		        operation='/';
		           break;	     
	} 
	
    
    a=generateRandomNumber(1,10);
	b=generateRandomNumber(1,10);
	if((operation=='-')&&(a<b))
	{                                                   
		m=a;
		a=b;
		b=m;
	}
    if(operation=='/')
    {
    	if(b==0)
    	{
    		b=1;
		}
		a=a*b;
	}
    printf("%d%c%d=",a,operation,b);
    scanf("%d",&n);
    switch(operation)
    {
    	case '+':
    		sum=a+b;
    		break;
    	case '-':
    		sum=a-b;
    		break;
    	case '*':
    		sum=a*b;
    		break;
    	case '/':
    		sum=a/b;
    		break;
	}
    if(n==sum){
    printf("恭喜答对了，加油！\n");
    count++;
   }
	else
	printf("答案错误，请认真思考!正确答案是%d\n",sum);
	i++;
}while(i<=20);
       score=count*5;
          printf("此次做对了%d题共计%d分,再接再厉哟！\n",count,score);
         switch(score/10){
   	   case 10:printf("等级：A\n");
   	   break;
   	   case 9:printf("等级：A\n");
	   break;
	   case 8:printf("等级：B\n");
	   break;
	   case 7:printf("等级:C\n");
	   break;
	   case 6:printf("等级：D\n");
	   break;
	   default:printf("等级：E\n    ");
	   break;
   }
       end=clock();
       printf("花费的时间：%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;  
	break;
   case 2:
   	printf("欢迎进入英雄模式，期待你的表现！\n") ;
        start=clock();
        initializeSeed();
    do{
    t=generateRandomNumber(1,12);
    switch(t){                                   /*case1至12表示让出现乘和除的次数多一些，增加难度*/ 
    	case 1: 
		case 2: 
		      operation='+';
		         break;
		case 3:
		case 4:
			operation='-';
			     break;
		case 5:
		case 6:
		case 7:
		case 8:
		        operation='*';
		          break;
		case 9:
		case 10:
		case 11:
		case 12:
		        operation='/';
		           break;	     
	} 
	
    
    a=generateRandomNumber(10,25);
	b=generateRandomNumber(10,20);
	if((operation=='-')&&(a<b))
	{                                                   
		m=a;
		a=b;
		b=m;
	}
    if(operation=='/')
    {
    	if(b==0)
    	{
    		b=1;
		}
		a=a*b;
	}
    printf("%d%c%d=",a,operation,b);
    scanf("%d",&n);
    switch(operation)
    {
    	case '+':
    		sum=a+b;
    		break;
    	case '-':
    		sum=a-b;
    		break;
    	case '*':
    		sum=a*b;
    		break;
    	case '/':
    		sum=a/b;
    		break;
	}
    if(n==sum){
    printf("恭喜答对了，加油！\n");
    count++;
   }
	else
	printf("答案错误，请认真思考!正确答案是%d\n",sum);
	i++;
}while(i<=20);
       score=count*5;
          printf("此次做对了%d题共计%d分,再接再厉哟！\n",count,score);
         switch(score/10){
   	   case 10:printf("等级：A\n");
   	   break;
   	   case 9:printf("等级：A\n");
	   break;
	   case 8:printf("等级：B\n");
	   break;
	   case 7:printf("等级:C\n");
	   break;
	   case 6:printf("等级：D\n");
	   break;
	   default:printf("等级：E\n    ");
	   break;
   }
       end=clock();
       printf("花费的时间：%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;  
}
}



