
{
	int number;
	char name[20];
	int sell;
	int category;
	int storage;
	int qualityguaranteeperiod;	
}med[SIZE];
int main()
{
	int n,m,p;
	void input_the_edicine_information(struct medicine med[]);/*����ҩƷ��Ϣ*/
	void printf_all_the_information_of_the_medicines(struct medicine med[]);/*�鿴����ҩƷ����Ϣ*/
	void printf_the_medicine_information(struct medicine med[]);/*��ҩƷ��Ĭ����Ų鿴*/  
	void printf_the_medicine_informationt(struct medicine med[]);/*�鿴ĳһҩƷ����Ϣ����ҩƷ�ı�Ž��в鿴��*/ 
	void change_the_medicine_information(struct medicine med[]);/*�޸�ҩƷ��Ϣ����ҩƷ��Ĭ������޸ģ�*/
	void change_the_medicine_informationt(struct medicine med[]);/*�޸�ҩƷ��Ϣ����ҩƷ�ı�Ž����޸ģ�*/
	void judge_the_medicine_category();/*�ж�ҩƷ������*/ 
	void take_the_rank_of_sell(struct medicine med[]);/*ҩƷ��������*/
	void take_the_rank_of_storage(struct medicine med[]);/*ҩƷ�������*/
}

