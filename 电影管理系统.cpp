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
	char release_data[20];                    /*��ӳʱ��*/
	float grade;                              /*����*/
	char protagonist_name[20];             /*���˹�����*/
	int box_office;                          /*Ʊ��*/
	int fares;                               /*Ʊ��*/ 
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
void enter0();                           /*��½����*/
void Vis_window();                      /*�οͽ���*/
void Adm_window();                     /*����Ա����*/
void Adm_add();                        /*����Ա¼��*/
void Adm_change();                     /*����Ա�޸�*/ 
void Adm_load();                      /*����Ա��¼ 1*/  
void Adm_manage();                  /*����Ա������� 2*/  
void Film_add();                        /*��Ӱ����*/
void Film_find();                       /*��Ӱ��ѯ*/
void Film_buy();                        /*��ӰƱ����*/
void Film_change();                   /*��Ӱ��Ϣ����*/ 
void Film_stat();                      /*��Ӱ����ͳ��*/
void Film_manage();                     /*��Ӱ�������*/
//void Vip_enter();                     /*��Ա��Ϣ¼��*/ 
//int Vip_stat();                       /*��Ա��ͳ��*/ 
//void Vip_find();                      /*��Ա��Ϣ��ѯ */
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
	printf("\t\t\t\t **************  ��ӭ������Ӱ���ֲ�   *************\n");
	printf("\n");
	printf("\t\t\t\t **************     ����������      ***************\n");
	printf("\n");
	printf("\t\t\t\t *************     1.����Ա����      **************\n");
	printf("\n");
	printf("\t\t\t\t *************      2.�οͽ���      ***************\n");
	printf("\n");
	printf("\t\t\t\t *****************    3.�˳�   ********************\n");
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
		    printf("\t\t\t\t  δ�����壬����������ص�ǰ\n");
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
	printf("\t\t\t\t ****************    ��Ӱ�߽���    ****************\n");
	printf("\n");
	printf("\t\t\t\t *****************   1.���ҵ�Ӱ   *****************\n");
	printf("\n");
	printf("\t\t\t\t ****************   2.�����ӰƱ   ****************\n");
	printf("\n");
	printf("\t\t\t\t *****************   3.�����ϲ�  ******************\n"); 
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
			printf("\t\t\t\t  δ�����壬����������ص�ǰ\n");
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
	printf("\t\t\t\t ****************    ����Ա����    ****************\n");
	printf("\n");
	printf("\t\t\t\t *****************  1.����Ա¼��  *****************\n");
	printf("\n");
	printf("\t\t\t\t ****************   2.����Ա�޸�  *****************\n");
	printf("\n");
	printf("\t\t\t\t ****************   3.����Ա��¼  *****************\n"); 
	printf("\n");
	printf("\t\t\t\t ****************   4.������һ��   ****************\n");
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
			printf("\t\t\t\t  δ�����壬����������ص�ǰ\n");
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
	printf("\t\t\t\t  �������Ա��:");
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
					printf("\t\t\t\t  �Ѵ��ڸù���Ա�������ظ�¼�룡\n");
					printf("\t\t\t\t  ����������ϲ㣡");
					getch();
					fclose(fp);
					enter0(); 
				}
			}
		}
	}
	fp = fopen("Adm_list.txt","a");
	printf("\t\t\t\t  ��������:"); 
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
	printf("\n\t\t\t\t  ���ٴ���������:");
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
		printf("\n\t\t\t\t  ¼��ɹ����밴����������ϲ㣡");
	}
	else
	{
		printf("\n\t\t\t\t  ¼��ʧ�ܣ����벻һ�£��밴����������ϲ�:");		
	}
	getch(); 
	fclose(fp);
	enter0(); 
}
void Adm_load()                      /*����Ա��¼ 1*/ 
{
	system("cls");
	FILE *fp;
	char name[20],name0[20],password[20],password0[20];
	int flag=0,i,j;
	fp=fopen("Adm_list.txt","r");
	if(fp=NULL)
	{
		printf("�в����ڹ���Ա���밴�����������¼��:");
		Adm_add();
	}
	printf("\t\t\t\t ��������������:");
	scanf("%s",name0);
	while(!feof(fp))
	{
		fscanf(fp,"%s %s\n",name,password);
		if(!strcmp(name,name0))
		{
			flag=1;
			printf("\t\t\t\t ����������:");
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
				printf("\t\t\t\t �������������밴����������ϲ�:");
				getch();
				enter0();
				break;
			} 
		}
	}
	if(flag==0)
	{
		printf("\t\t\t\t �ù���Ա�����ڣ��밴����������ϲ�:");
		getch();
		enter0();
	}
}
void Adm_change() 
{
	system("cls");
	printf("\t\t\t\t  ******************************************\n");
	printf("\t\t\t\t  ***************����Ա�޸Ľ���*************\n");
	printf("\n");
	printf("\t\t\t\t  ******************************************\n");
	printf("\n");
	printf("\t\t\t\t  *************   1.����Աɾ��   ***********\n");
	printf("\n");
	printf("\t\t\t\t  **************   2.�����޸�   ************\n");
	printf("\n");
	printf("\t\t\t\t  **************   3.�����ϲ�   ************\n");
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
		printf("\t\t\t\t  �����ڹ���Ա��\n\t\t\t\t  �밴����������ϲ�");
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
		printf("\t\t\t\t  Ҫ���ĵĹ���Ա����Ϊ:");
		scanf("%s",name);
		while(p2)
		{
			m=0;
			if(!strcmp(p2->name,name))
			{
				l=1;
				printf("\t\t\t\t  �Ƿ�ɾ���ù���Ա��\n");
				printf("\t\t\t\t  �س�ɾ������������أ�");
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
		printf("\t\t\t\t  Ҫ���ĵĹ���Ա����Ϊ:");
		scanf("%s",name);
		while(p2)
		{
			l=1;
			printf("\n\t\t\t\t  ���ڸù���Ա���������뽫����ԭ����");
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
		printf("\n\t\t\t\t  �ù���Աδ��¼�룡\n\t\t\t\t  ����������ϲ�"); 
		getch();
		enter0();
	}
	printf("\n\t\t\t\t  ������ɣ�����������ϲ㣡");
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
	printf("\t\t\t\t  �밴�����¸�ʽ¼���װ��Ϣ��\n");
	while(i==13)
	{
		p2 = (list1)malloc(sizeof(struct Film));
		printf("\t\t\t\t   ����     ��ӳʱ��     ����     ���˹�     Ʊ��\n\t\t\t\t  ");
		scanf("%s %s %s %s %f %d",p2->film_name,p2->release_data,p2->grade,p2->protagonist_name,&p2->fares);
		//p2->num = n;
		p1->next = p2;
		p2->next = NULL;
		p1 = p2; 
		printf("\t\t\t\t  �Ƿ��������?�س��������룬����������ϲ㣡\n");
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

