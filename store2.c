#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct item
{
	int code;
	int rate;
	int quantity;
	char name[25];
		
};

void addGoods()
{
	struct item add;
	char name[20];
	int code,rate,quan,opt;
	FILE *fp;
	fp = fopen("file3.txt", "ab");
	printf("Do you want to enter goods(0/1):");
	scanf("\n%d",&opt);
	printf("%d",opt);
	while(opt==0)
	{
		
		if(fp==NULL)
		{
			printf("Error loading file");
		}
		printf("\n**********Departmental Store*************");
		printf("\n\n\nAdd articles");
		printf("\n\n");
		printf("Enter new code of article:");
		scanf("%d",&add.code);
		printf("code----->%d",add.code);
		fprintf(fp,"%d",code);
		printf("\n");
		printf("Enter rate of the item:");
		scanf("%d",&add.rate);
		fprintf(fp,"%d",code);
		printf("\n");
		printf("Enter quantity of the item:");
		scanf("%d",&add.quantity);
		fprintf(fp,"%d",code);
		printf("\n");
		printf("Enter name of the item:");
		scanf(" %[^\n]",add.name);
		fputs(name,fp);
		printf("Do you want to enter goods(0/1)");
		scanf("%d",&opt);
	}
	if(opt==1)
	{
		main();
	}
	fclose(fp);
}

int main()
{
	int ch,con=0;
	while(con!=1)
	{
		printf("******** FASHION WEAR *********");
		printf("      DEPARTMENTAL STORE");
		printf("\n\n\n\n");
		printf("1.Calculate bill\n");
		printf("2.Add Goods\n");
		printf("3.Edit goods\n");
		printf("4.Display Info\n");
		printf("5.Search\n");
		printf("6.Delete goods\n");
		printf("7.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
			break;
			case 2 : addGoods();
			break;
			case 3 :
			break;
			case 4 :
			break;
			case 5 :
			break;
			case 6 :
			break;
			case 7 :con=1;
			break;
			default : "Wrong choice";
		}
		return 0;	
	}	
}
