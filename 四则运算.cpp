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
    /*sum����������Ľ����s��ѡ��ȼ�ģʽ��a,b������������������� 
	 m�ǵ�������a<bʱ���м�������������t����������ķ��ţ�count�Ǳ�ʾ�����˼��⣻
	 score��ʾ����÷֣�n��ʾ����Ĵ𰸣�start��end��ʾ���⻨�ѵ�ʱ��*/ 
printf("��ʾ��\n");
printf("1Ϊ����ģʽ��\n");
printf("2ΪӢ��ģʽ��\n"); 
printf("��������ѡ�ĵȼ���������ѡ��Ŷ����\n",s);
scanf("%d",&s);
switch(s)
{
   case 1:
   	printf("��ӭ��������ģʽ���ڴ���ı��֣�\n"); 
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
    printf("��ϲ����ˣ����ͣ�\n");
    count++;
   }
	else
	printf("�𰸴���������˼��!��ȷ����%d\n",sum);
	i++;
}while(i<=20);
       score=count*5;
          printf("�˴�������%d�⹲��%d��,�ٽ�����Ӵ��\n",count,score);
         switch(score/10){
   	   case 10:printf("�ȼ���A\n");
   	   break;
   	   case 9:printf("�ȼ���A\n");
	   break;
	   case 8:printf("�ȼ���B\n");
	   break;
	   case 7:printf("�ȼ�:C\n");
	   break;
	   case 6:printf("�ȼ���D\n");
	   break;
	   default:printf("�ȼ���E\n    ");
	   break;
   }
       end=clock();
       printf("���ѵ�ʱ�䣺%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;  
	break;
   case 2:
   	printf("��ӭ����Ӣ��ģʽ���ڴ���ı��֣�\n") ;
        start=clock();
        initializeSeed();
    do{
    t=generateRandomNumber(1,12);
    switch(t){                                   /*case1��12��ʾ�ó��ֳ˺ͳ��Ĵ�����һЩ�������Ѷ�*/ 
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
    printf("��ϲ����ˣ����ͣ�\n");
    count++;
   }
	else
	printf("�𰸴���������˼��!��ȷ����%d\n",sum);
	i++;
}while(i<=20);
       score=count*5;
          printf("�˴�������%d�⹲��%d��,�ٽ�����Ӵ��\n",count,score);
         switch(score/10){
   	   case 10:printf("�ȼ���A\n");
   	   break;
   	   case 9:printf("�ȼ���A\n");
	   break;
	   case 8:printf("�ȼ���B\n");
	   break;
	   case 7:printf("�ȼ�:C\n");
	   break;
	   case 6:printf("�ȼ���D\n");
	   break;
	   default:printf("�ȼ���E\n    ");
	   break;
   }
       end=clock();
       printf("���ѵ�ʱ�䣺%lf\n",(double)(end-start)/CLOCKS_PER_SEC);
	return 0;  
}
}



