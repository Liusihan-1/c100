#include<stdio.h>
#include<stdlib.h>
// ���������ֵ���
void reversenums(int* nums, int numsSize){
    int     i       = 0;
    int     iTmp    = 0;

    if ((NULL == nums) || (0 == numsSize))
    {
        return nums;
    }

    for (i = 0; i < (numsSize / 2); i++)
    {
        iTmp = nums[i];
        nums[i] = nums[numsSize - i - 1];
        nums[numsSize - i - 1] = iTmp;
    }
    return;
}


//˼·��
//�Ӻ���ǰ����������һ��������������ͷ��βΪ���򣬽�������ʱ����β�����ֺ�ͷ��ǰ���֣������������������
//�����ǰ�����ǴӴ�С����˵����������һ����������У��������������г���С������
void nextPermutation(int* nums, int numsSize){
    int     i       = 0;
    int     j       = 0;
    int     iTmp    = 0;

    int     iTail   = 0;        //����β��
    int     iHead   = 0;        //����ͷ��

    if ((NULL == nums) || (0 == numsSize) || (1 == numsSize))
    {
        return nums;
    }

    iTail = numsSize - 1;
    iHead = numsSize - 1;

    //1, ��λ������head ָ���һ��С�� head + 1��λ��
    for (i = numsSize - 1; i > 0; i--)
    {
        if (nums[i - 1] < nums[i])
        {
            // ��λ����ͷ��λ��
            iHead = i - 1;

            // ��λ����β��λ��
            for (j = iTail; j > iHead; j--)
            {
                if (nums[i - 1] >= nums[j])
                {
                    iTail -= 1;
                }
            }

            break;
        }
    }

    printf("[1] head=%d, tail=%d\n", iHead, iTail);
    if (iHead != iTail)
    {
        //2, ��������λ�ã�
        //1) ��head �� Tail ֮������ֵ���
        //2) ��Tail �� numsSize ֮������ֵ���
        //3) ��Tail �� numsSize ֮������ֲ��뵽 head ǰ
        reversenums(&nums[iHead + 1], iTail - iHead - 1);
        reversenums(&nums[iTail + 1], numsSize - iTail - 1);

        for (i = 0; i < numsSize; i++)
        {
            printf("%d ", nums[i]);
        }
        printf("\n");

        for (i = numsSize - 1; i >= iTail; i--)
        {
            iTmp = nums[numsSize - 1];
            memmove(&nums[iHead + 1], &nums[iHead], sizeof(int) * (numsSize - iHead - 1));

/*
            for (j = numsSize - 1; j > iHead; j--)
            {
                nums[j] = nums[j - 1];
            }
*/
            nums[iHead] = iTmp;
        }
    }
    else
    {
        //3, �������������Ϊ���򣬲����ڸ��������
        reversenums(nums, numsSize);
    }
    return nums;
}


