#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//screen functions
void cleanscreen(void);
void invaildscreen(void);
void errorscreen(void);
void resultscreen(double result, int len);
void introduction(void);
char selectinput(void);
char selectinput2(void);
void checkselect(char select);

//mathematical functions
void exponential(void);
void squareroot(void);
void sum(void);
void substraction(void);
void mul(void);
void devide(void);
void mod(void);
/*void fac(void);
void inv(void);
void log(void);
void sin(void);
void cos(void);
void tan(void);
void pow(void);*/

int main(void)
{
	system("color b");
	cleanscreen();
	introduction();
	char select;
	select = selectinput();
	checkselect(select);

    return 0;
}

void cleanscreen(void)
{
	system("cls");
	printf("\t\tMini scientfic calculator\n");
	printf("\t\t-------------------------\n\n\n");
	printf("\t\t=========================\n");
	printf("\t\t|");
	for(int i=0;i<23;i++)
		printf(" ");
    	printf("|");
    	printf("\n");
    	printf("\t\t|=======================|\n");
	printf("\t\t| Q | C | E |exp|sqt|Fac|\n");
    	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|sin|cos|tan|inv|Pow|log|\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 1 | 2 | 3 | 4 | 5 | + |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 6 | 7 | 8 | 9 | 0 | - |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|ans|mod| . | * | / | = |\n");
	printf("\t\t=========================\n");


}

void invaildscreen(void)
{
	system("cls");
	printf("\t\tMini scientfic calculator\n");
	printf("\t\t-------------------------\n\n\n");
	printf("\t\t=========================\n");
	printf("\t\t| INVAILD INPUT         |\n");
    	printf("\t\t|=======================|\n");
	printf("\t\t| Q | C | E |exp|sqt|Fac|\n");
    	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|sin|cos|tan|inv|Pow|log|\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 1 | 2 | 3 | 4 | 5 | + |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 6 | 7 | 8 | 9 | 0 | - |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|ans|mod| . | * | / | = |\n");
	printf("\t\t=========================\n");

}

void errorscreen(void)
{
	system("cls");
	printf("\t\tMini scientfic calculator\n");
	printf("\t\t-------------------------\n\n\n");
	printf("\t\t=========================\n");
	printf("\t\t| MATH ERROR            |\n");
    	printf("\t\t|=======================|\n");
	printf("\t\t| Q | C | E |exp|sqt|Fac|\n");
    	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|sin|cos|tan|inv|Pow|log|\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 1 | 2 | 3 | 4 | 5 | + |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 6 | 7 | 8 | 9 | 0 | - |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|ans|mod| . | * | / | = |\n");
	printf("\t\t=========================\n");

}

void resultscreen(double result, int len)
{
	system("cls");
	printf("\t\tMini scientfic calculator\n");
	printf("\t\t-------------------------\n\n\n");
	printf("\t\t=========================\n");
	printf("\t\t|");
	printf("%.2lf",result);
	for(int i=0;i<(23-len);i++)
		printf(" ");
	printf("|\n");
    	printf("\t\t|=======================|\n");
	printf("\t\t| Q | C | E |exp|sqt|Fac|\n");
    	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|sin|cos|tan|inv|Pow|log|\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 1 | 2 | 3 | 4 | 5 | + |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t| 6 | 7 | 8 | 9 | 0 | - |\n");
	printf("\t\t|---|---|---|---|---|---|\n");
	printf("\t\t|ans|mod| . | * | / | = |\n");
	printf("\t\t=========================\n");

}

void introduction(void)
{
	printf("\n\n\n\nThis is a simple calculator which is written by c programming language\n");
	printf("Press E: For execution!\n");
	printf("Press C: For clearing screen!\n");
	printf("Press Q: For quit!\n");
}



void checkcommand(char command[4])
{
	char com1[4]="exp",com2[4]="sqt",com3[4]="sum",com4[4]="sub";
	char com5[4]="mul",com6[4]="div",com7[4]="fac",com8[4]="pow";
	char com9[4]="inv",com10[4]="log",com11[4]="sin",com12[4]="cos";
	char com13[4]="tan",com14[4]="mod";
	if(strcmp(command,com1)==0)
		exponential();
	else if(strcmp(command,com2)==0)
		squareroot();
	else if(strcmp(command,com3)==0)
		sum();
	else if(strcmp(command,com4)==0)
		substraction();
	else if(strcmp(command,com5)==0)
		mul();
	else if(strcmp(command,com6)==0)
		devide();
	/*else if(strcmp(command,com7)==0)
		fac();
	else if(strcmp(command,com8)==0)
		power();
	else if(strcmp(command,com9)==0)
		inv();
	else if(strcmp(command,com10)==0)
		log();
	else if(strcmp(command,com11)==0)
		sin();
	else if(strcmp(command,com12)==0)
		cos();
	else if(strcmp(command,com13)==0)
		tan();*/
	else if(strcmp(command,com14)==0)
		mod();
	else
		printf("\nINVAILD INPUT");
	system("exit");
}

void directionlist(void)
{
	system("color b");
	printf("\n==>Write 'exp' : for getting exponential of a number!\n");
	printf("\n==>Write 'fac' : for getting factorial of a number!\n");
	printf("\n==>Write 'pow' : for getting power of a number!\n");
	printf("\n==>Write 'sqt' : for getting square root of a value!\n");
	printf("\n==>Write 'inv' : for getting inverse of a number!\n");
	printf("\n==>Write 'log' : for getting 10 base logarithmic of a number!\n");
	printf("\n==>Write 'sin' : for getting value of sine of an angel!\n");
	printf("\n==>Write 'cos' : for getting value of cosine of an angel!\n");
	printf("\n==>Write 'tan' : for getting value of tangent of an angel!\n");
	printf("\n==>Write 'sum' : for getting summation of two numbers!\n");
	printf("\n==>Write 'sub' : for getting substraction of two numbers!\n");
	printf("\n==>Write 'mul' : for getting multiplication of two numbers!\n");
	printf("\n==>Write 'div' : for getting division of two numbers!\n");
	printf("\n==>Write 'mod' : for getting remainder of two  numbers!\n");

}



void checkselect(char select)
{

	if(select=='C' || select=='c')
	{
		system("cls");
		cleanscreen();
		introduction();
		select = selectinput();
		checkselect(select);
	}
	else if(select=='Q' || select=='q')
	{
		printf("\nThanks for using this program!");
		printf("\nProgram created by Openheimer");
		printf("\n");
		system("pause");
		system("exit");
	}
	else if(select=='E' || select=='e')
	{
		//system("cls");
		directionlist();
		char command[4],enter;
		printf("\nEnter command: ");
		fgets(command, sizeof(command), stdin);
		system("cls");
		printf("\nYou selected %s ",command);

		checkcommand(command);


	}
	else
	{

		invaildscreen();
		introduction();
		select = selectinput();
		checkselect(select);
	}

}

char selectinput(void)
{
	char select,enter;
	printf("\nSelect: ");
	scanf("%c%c",&select,&enter);


	return select;
}

char selectinput2(void)
{
	char select,enter;
	printf("\nSelect: ");
	scanf("%c%c%c",&enter,&select,&enter);

	return select;
}

void exponential(void)
{
	char select;
	double num,expnum;
	printf("\nEnter a number for exponential: ");

	//scanf("%c",&enter);
    if(scanf("%lf",&num) ==1)
    {
            expnum = exp(num);
            char numline[24];
            snprintf(numline,24,"%.2lf",expnum);
            if(strlen(numline)>23)
            {
                invaildscreen();
                introduction();
                select=selectinput2();
                checkselect(select);
            }
            else
            {
                resultscreen(expnum,strlen(numline));
                introduction();
                select=selectinput2();
                checkselect(select);
            }
        }
    else
    {
            invaildscreen();
            introduction();
            select=selectinput();
            checkselect(select);
    }

}

void squareroot(void)
{
	char select;
	double num,sqrtnum;
	printf("\nEnter a number for sqrt: ");
	scanf("%lf",&num);
	if(num<0 || scanf("%lf",&num)!=1)
	{
		errorscreen();
		introduction();
		select=selectinput();
		checkselect(select);
	}
	else if(num<=18446744073709551616.00)
	{
		sqrtnum = sqrt(num);
		char numline[24];
		snprintf(numline,24,"%.2lf",sqrtnum);
		if(strlen(numline)>23)
		{
			invaildscreen();
			introduction();
			select=selectinput2();
			checkselect(select);
		}
		else
		{
			resultscreen(sqrtnum,strlen(numline));
			introduction();
			select=selectinput2();
			checkselect(select);
		}
	}
	else
	{
		errorscreen();
		introduction();
		select=selectinput2();
		checkselect(select);
	}

}

void sum(void)
{
	char select,op,equal,enter;
	double num1,num2,sum;
	printf("\nEnter expression (for example: 4+4=) :");
	scanf("%lf%c%lf%c%c",&num1,&op,&num2,&equal,&enter);
	if(op!='+' || equal!='=')
	{
		invaildscreen();
		introduction();
		select=selectinput2();
		checkselect(select);
	}

	else
	{
		sum = num1 + num2;
		char numline[24];
		snprintf(numline,24,"%.2lf",sum);
		if(strlen(numline)>23)
		{
			errorscreen();
			introduction();
			select=selectinput2();
			checkselect(select);
		}
		else
		{
			resultscreen(sum,strlen(numline));
			introduction();
			select=selectinput2();
			checkselect(select);
		}
	}

}

void substraction(void)
{
	char select,op,equal;
	double num1,num2,sub;
	printf("\nEnter expression (for example: 4-4=) :");
	scanf("%lf%c%lf%c",&num1,&op,&num2,&equal);
	if(op!='-' || equal!='=')
	{
		invaildscreen();
		introduction();
		select=selectinput2();
		checkselect(select);
	}

	else
	{
		sub = num1 - num2;
		char numline[24];
		snprintf(numline,24,"%.2lf",sub);
		if(strlen(numline)>23)
		{
			errorscreen();
			introduction();
			select=selectinput2();
			checkselect(select);
		}
		else
		{
			resultscreen(sub,strlen(numline));
			introduction();
			select=selectinput2();
			checkselect(select);
		}
	}

}

void mul(void)
{
	char select,op,equal;
	double num1,num2,mul;
	printf("\nEnter expression (for example: 4*4=) :");
	scanf("%lf%c%lf%c",&num1,&op,&num2,&equal);
	if(op!='*' || equal!='=')
	{
		invaildscreen();
		introduction();
		select=selectinput2();
		checkselect(select);
	}

	else
	{
		mul = num1 * num2;
		char numline[24];
		snprintf(numline,24,"%.2lf",mul);
		if(strlen(numline)>23)
		{
			errorscreen();
			introduction();
			select=selectinput2();
			checkselect(select);
		}
		else
		{
			resultscreen(mul,strlen(numline));
			introduction();
			select=selectinput2();
			checkselect(select);
		}
	}

}

void devide(void)
{
	char select,op,equal;
	double num1,num2,quotient;
	printf("\nEnter expression (for example: 4/4=) :");
	scanf("%lf%c%lf%c",&num1,&op,&num2,&equal);
	if(op!='/' || equal!='=')
	{
		invaildscreen();
		introduction();
		select=selectinput();
		checkselect(select);
	}

	else
	{
		quotient = num1 / num2;
		char numline[24];
		snprintf(numline,24,"%lf",quotient);
		if(strlen(numline)>23)
		{
			errorscreen();
			introduction();
			select=selectinput2();
			checkselect(select);
		}
		else
		{
			resultscreen(quotient,strlen(numline));
			introduction();
			select=selectinput2();
			checkselect(select);
		}
	}

}

void mod(void)
{
	char select,op,equal;
	long long unsigned num1,num2,mod;
	printf("\nEnter expression (for example: 4%%4=) :");
	scanf("%llu%c%lllu%c",&num1,&op,&num2,&equal);
	if(op!='%' || equal!='=')
	{
		invaildscreen();
		introduction();
		select=selectinput2();
		checkselect(select);
	}

	else
	{
		mod = num1 % num2;
		char numline[24];
		snprintf(numline,24,"%.2lf",mod);
		if(strlen(numline)>23)
		{
			errorscreen();
			introduction();
			select=selectinput2();
			checkselect(select);
		}
		else
		{
			resultscreen(mod,strlen(numline));
			introduction();
			select=selectinput2();
			checkselect(select);
		}
	}

}


