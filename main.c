#include<stdio.h>

int SimpleInterest(char opt, int amount, int Rate, int Time)
{
	if(opt == 'a' || opt == 'A')
	{
		return (amount*Rate*Time/36500);
	}
	if(opt == 'b' || opt == 'B')
	{
		return (amount*Rate*Time/1200);
	}
	if(opt == 'c' || opt == 'C')
	{
		return (amount*Rate*Time/100);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char a;
	int b;
	int c;
	int d;
	int e;
	printf("Simple Interest Calculator © by SomeTroller77\n");
	printf("Enter an option\na)Daily\nb)Monthly\nc)Yearly\n\nOption:");
	scanf("%c", &a);
	if(a != 'A' && a != 'a' && a != 'b' && a != 'B' && a != 'c' && a != 'C')
	{
		printf("entered option is not valid");
	}
	else
	{
		printf("Enter amount:");
		scanf("%d", &b);
		if(b <= 0)
		{
			printf("Entered value cannot be or lower than 0");
		}
		else
		{
			printf("Enter rate of interest:");
			scanf("%d", &c);
			if(c <= 0)
                	{
                        printf("Entered value cannot be or lower than 0");
                	}
		else
		{
			printf("Enter time:");
			scanf("%d", &d);
			if(d <= 0)
			{
				printf("Entered value cannot be or lower than 0");
			}
		}
		}
	  }
	int si=SimpleInterest(a, b, c, d);
	if(si == 0)
	{
		printf("\nError Calculating Simple Interest");
	}
	else
	{
	printf("%d", si);
	}
}
