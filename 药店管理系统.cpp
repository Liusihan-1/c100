
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
	void input_the_edicine_information(struct medicine med[]);/*输入药品信息*/
	void printf_all_the_information_of_the_medicines(struct medicine med[]);/*查看所有药品的信息*/
	void printf_the_medicine_information(struct medicine med[]);/*按药品的默认序号查看*/  
	void printf_the_medicine_informationt(struct medicine med[]);/*查看某一药品的信息（按药品的编号进行查看）*/ 
	void change_the_medicine_information(struct medicine med[]);/*修改药品信息（按药品的默认序号修改）*/
	void change_the_medicine_informationt(struct medicine med[]);/*修改药品信息（按药品的编号进行修改）*/
	void judge_the_medicine_category();/*判断药品的性质*/ 
	void take_the_rank_of_sell(struct medicine med[]);/*药品销售排序*/
	void take_the_rank_of_storage(struct medicine med[]);/*药品库存排序*/
}

