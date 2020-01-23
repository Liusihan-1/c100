#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <windows.h>
#include <conio.h>
#define SIZE 4
#define KEY 0x86
typedef struct Film
{
	int number;
	char film_name[20];
	char release_data[20];                    /*上映时间*/
	float grade;                              /*评分*/
	char protagonist_name[20];             /*主人公名字*/
	int box_office;                          /*票房*/
	int fares;                               /*票价*/ 
	struct film* next; 
}*list1;
typedef struct Vip 
{
	char name[20],phone[20];
	float score; 
	int num;           
	struct Vip* next;
}*list2;
typedef struct Adm
{
	char name[20],password[20];
	struct Adm* next;
}*list3;
void enter0();                           /*登陆界面*/
void Vis_window();                      /*游客界面*/
void Adm_window();                     /*管理员界面*/
void Adm_add();                        /*管理员录入*/
void Adm_change();                     /*管理员修改*/ 
void Adm_load();                      /*管理员登录 1*/  
void Adm_manage();                  /*管理员管理界面 2*/  
void Film_add();                        /*电影增添*/
void Film_find();                       /*电影查询*/
void Film_buy();                        /*电影票购买*/
void Film_change();                   /*电影信息更改*/ 
void Film_stat();                      /*电影种数统计*/
void Film_manage();                     /*电影管理界面*/
//void Vip_enter();                     /*会员信息录入*/ 
//int Vip_stat();                       /*会员数统计*/ 
//void Vip_find();                      /*会员信息查询 */
void Pro_bar() 
{
	system("cls");
	char arr[50] = {'\0'};
	const char *p = "|/-\\";
	memset(arr,0,sizeof(arr));
	int n = 50,i = 0;
	while(i<=n)
	{
		arr[i]= '=';
		printf("\t\t\t\t[%-50s][%d%%][%c]\r",arr,i*2,p[i%4]);
		fflush(stdout);
		i++;
		usleep(20000);
    }
	printf("\n");
}
void enter0()
{
	Pro_bar();
	system("cls");
	int num;
	char name[20];
	printf("\t\t\t\t **************************************************\n");
	printf("\t\t\t\t **************  欢迎来到电影俱乐部   *************\n");
	printf("\n");
	printf("\t\t\t\t **************     程序主界面      ***************\n");
	printf("\n");
	printf("\t\t\t\t *************     1.管理员界面      **************\n");
	printf("\n");
	printf("\t\t\t\t *************      2.游客界面      ***************\n");
	printf("\n");
	printf("\t\t\t\t *****************    3.退出   ********************\n");
	printf("\t\t\t\t **************************************************\n");
	printf("\t\t\t\t ");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
			Adm_window();
			break;
		case 2:
			Vis_window();
			break;
		case 3:
			Pro_bar(); 
			system("cls");
			exit(0);
			break;
		default :
		    printf("\t\t\t\t  未被定义，按任意键返回当前\n");
			system("cls"); 
			enter0();
    }
} 
void Vis_window()
{
	system("cls");
	int num;
	char name[20];
	printf("\t\t\t\t **************************************************\n");
	printf("\t\t\t\t ****************    观影者界面    ****************\n");
	printf("\n");
	printf("\t\t\t\t *****************   1.查找电影   *****************\n");
	printf("\n");
	printf("\t\t\t\t ****************   2.购买电影票   ****************\n");
	printf("\n");
	printf("\t\t\t\t *****************   3.返回上层  ******************\n"); 
	printf("\n");
	printf("\t\t\t\t **************************************************\n");
	printf("\t\t\t\t ");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
			//Film_find();
			break;
		case 2:
			//Film_buy();
			break;
		case 3:
			enter0();
			break;
		default:
			printf("\t\t\t\t  未被定义，按任意键返回当前\n");
			system("cls"); 
			enter0();
	}
}
void Adm_window()
{
	system("cls");
	int num;
	char name[20];
	printf("\t\t\t\t **************************************************\n");
	printf("\t\t\t\t ****************    管理员界面    ****************\n");
	printf("\n");
	printf("\t\t\t\t *****************  1.管理员录入  *****************\n");
	printf("\n");
	printf("\t\t\t\t ****************   2.管理员修改  *****************\n");
	printf("\n");
	printf("\t\t\t\t ****************   3.管理员登录  *****************\n"); 
	printf("\n");
	printf("\t\t\t\t ****************   4.返回上一层   ****************\n");
	printf("\n");
	printf("\t\t\t\t **************************************************\n");
	printf("\t\t\t\t ");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
			Adm_add(); 
			break;
		case 2:
			Adm_change();  
			break;
		case 3:
			Adm_load();
			break;
		case 4:
			enter0();
			break;
		default:
			printf("\t\t\t\t  未被定义，按任意键返回当前\n");
			system("cls"); 
			enter0();
	}
}
void Adm_add()
{
	system("cls");
	FILE *fp;
	int i,j=0,m;
	char name[20],name0[20],password[20],password0[20];
	fp = fopen("Adm_list.txt","r");
	if(fp == NULL)
	{
		j=1;
		fp = fopen("Adm_list.txt","a");
	} 
	fclose(fp);
	printf("\t\t\t\t  输入管理员名:");
	scanf("%s",name);
	if(j==0);
	{
		fp = fopen("Adm_list.txt","r");
		while(!feof(fp))
		{
			fscanf(fp," %s %s\n",name0,password0);
			{
				if (!strcmp(name0,name))
				{
					printf("\t\t\t\t  已存在该管理员，无需重复录入！\n");
					printf("\t\t\t\t  任意键返回上层！");
					getch();
					fclose(fp);
					enter0(); 
				}
			}
		}
	}
	fp = fopen("Adm_list.txt","a");
	printf("\t\t\t\t  输入密码:"); 
	for(i=0; ;i++)
	{
		m=0;
		password0[i]=getch();
		if(password0[i]=='\r')
		{
			password0[i]='\0';
			break;
		}
		if(password0[i]=='\b')
		{
			m=1;
			password0[i]='\0';
			password0[i-1]='\0';
			i = i-2;
			printf("\b \b");
		}
		if(m==0) printf("*");
	}
	printf("\n\t\t\t\t  请再次输入密码:");
	for(i=0; ;i++)
	{
		m=0;
		password[i]=getch();
		if(password[i]=='\r')
		{
			password[i]='\0';
			break;
		}
		if(password[i]=='\b')
		{
			m=1;
			password[i]='\0';
			password[i-1]='\0';
			i = i-2;
			printf("\b \b");
		}
		if(m==0) printf("*");
	}
	if(!strcmp(password0,password))
	{
		for (i=0;i<strlen(password);i++)
		{
			password0[i] = password[i]^KEY;		
		}
		fprintf(fp," %s %s\n",name,password0);
		printf("\n\t\t\t\t  录入成功，请按任意键返回上层！");
	}
	else
	{
		printf("\n\t\t\t\t  录入失败，密码不一致，请按任意键返回上层:");		
	}
	getch(); 
	fclose(fp);
	enter0(); 
}
void Adm_load()                      /*管理员登录 1*/ 
{
	system("cls");
	FILE *fp;
	char name[20],name0[20],password[20],password0[20];
	int flag=0,i,j;
	fp=fopen("Adm_list.txt","r");
	if(fp=NULL)
	{
		printf("尚不存在管理员，请按任意键创建并录入:");
		Adm_add();
	}
	printf("\t\t\t\t 请输入您的名字:");
	scanf("%s",name0);
	while(!feof(fp))
	{
		fscanf(fp,"%s %s\n",name,password);
		if(!strcmp(name,name0))
		{
			flag=1;
			printf("\t\t\t\t 请输入密码:");
			for(i=0; ;i++)
			{
				j=0;
				password[i]=getch();
				if(password[i]=='\r')
				{
					password[i]='\0';
					break;
				}
				if(password[i]=='\b')
				{
					j=1;
					password[i]='\0';
					password[i-1]='\0';
					i = i-2;
					printf("\b \b");
				}
				if(j==0)
				printf("*");
			}
			for(i=0;i<strlen(password);i++)
			{
				password[i]=password[i]^KEY;
			}
			if(!strlen("password,password0"))
			{
				Adm_manage();
			}
			else
			{
				printf("\t\t\t\t 输入的密码错误，请按任意键返回上层:");
				getch();
				enter0();
				break;
			} 
		}
	}
	if(flag==0)
	{
		printf("\t\t\t\t 该管理员不存在，请按任意键返回上层:");
		getch();
		enter0();
	}
}
void Adm_change() 
{
	system("cls");
	printf("\t\t\t\t  ******************************************\n");
	printf("\t\t\t\t  ***************管理员修改界面*************\n");
	printf("\n");
	printf("\t\t\t\t  ******************************************\n");
	printf("\n");
	printf("\t\t\t\t  *************   1.管理员删除   ***********\n");
	printf("\n");
	printf("\t\t\t\t  **************   2.密码修改   ************\n");
	printf("\n");
	printf("\t\t\t\t  **************   3.返回上层   ************\n");
	printf("\n");
	printf("\t\t\t\t  ******************************************\n");
	printf("\t\t\t\t  ") ;
	int q;
	scanf("%d",&q); 
	system("cls");
	FILE *fp;
	list3 head,p1,p2;
	char i,name[20],password[20];
	int j,l=0,m;
	fp = fopen("Adm_list.txt","r");
	if(fp==NULL)
	{
		printf("\t\t\t\t  不存在管理员！\n\t\t\t\t  请按任意键返回上层");
		getch();
		enter0(); 
	}
	p1 = head = (list3)malloc(sizeof(struct Adm));
	p1->next = NULL;
	while(!feof(fp))
	{
		fscanf(fp," %s %s\n",p2->name,p2->password);
		p2 = (list3)malloc(sizeof(struct Adm));
		p1->next=p2;
		p2->next=NULL;
		p1=p2;		
	}
	fclose(fp);
	if (q==1) 
	{
		fp = fopen("Adm_list.txt","w");
		p2 = head->next;
		printf("\t\t\t\t  要更改的管理员姓名为:");
		scanf("%s",name);
		while(p2)
		{
			m=0;
			if(!strcmp(p2->name,name))
			{
				l=1;
				printf("\t\t\t\t  是否删除该管理员？\n");
				printf("\t\t\t\t  回车删除，任意键返回！");
				i=getch();
				if (i==13)
				{
					m=1;
					p1 = p2;
					p2 = p2->next;
					free(p1);
				}
			}
			fprintf(fp," %s %s\n",p2->name,p2->password);
			p2 = p2->next;
		}
		fclose(fp);
	}
	else if(q==2)
	{
		fp = fopen("Adm_list.txt","w");
		p2 = head->next;
		printf("\t\t\t\t  要更改的管理员姓名为:");
		scanf("%s",name);
		while(p2)
		{
			l=1;
			printf("\n\t\t\t\t  存在该管理员，继续输入将覆盖原密码");
			for(j=0; ;j++)
			{
				password[j]=getch();
				if(password[j]=='\r')
				{
				password[j]='\0';
				break;
				}
				printf("*");
				fprintf(fp," %s %s\n",p2->name,p2->password);
				p2 = p2->next;
			}
			fclose(fp);
		}
	}
	else if(q==3)
	{
		enter0();
	}
	if(l==0)
	{
		printf("\n\t\t\t\t  该管理员未被录入！\n\t\t\t\t  任意键返回上层"); 
		getch();
		enter0();
	}
	printf("\n\t\t\t\t  操作完成，任意键返回上层！");
	getch();
	enter0();
}
void Film_add()
{
	system("cls");
	FILE *fp;
	char i=13;
	//int n; 
	list1 head,p1,p2;
	p1 = head = (list1)malloc(sizeof(struct Film));
	head->next = NULL;
	fp = fopen("Film_list.txt","a");
	//n = Film_stat();
	printf("\t\t\t\t  请按照以下格式录入服装信息：\n");
	while(i==13)
	{
		p2 = (list1)malloc(sizeof(struct Film));
		printf("\t\t\t\t   名称     上映时间     评分     主人公     票价\n\t\t\t\t  ");
		scanf("%s %s %s %s %f %d",p2->film_name,p2->release_data,p2->grade,p2->protagonist_name,&p2->fares);
		//p2->num = n;
		p1->next = p2;
		p2->next = NULL;
		p1 = p2; 
		printf("\t\t\t\t  是否继续输入?回车继续输入，任意键返回上层！\n");
		i=getch();
		//n++;
	}
	p2 = head->next;
	while(p2)
	{
		fprintf(fp," %d %s %s %s %s %f %d\n",p2->number,p2->film_name,p2->release_data,p2->grade,p2->protagonist_name,p2->fares);
		p2 = p2->next;
	}
	fclose(fp);
	Film_manage(); 
}

main()
{
	Adm_add();
	printf("eee"); 
}

