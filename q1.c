//Write a program that takes a non-negative integer as input and outputs the following:
//(1) The number of digits in the integer.
//(2) The digits of the integer in reverse order.
//Example: If the input is 12345, output "5 digits" and 54321.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int sum;
    int a;
    int re;
    sum = 0;
    re = 0;
    printf("������һ���Ǹ�������");
    scanf("%d",&num);
    while(num > 0)
    {
        a = num % 10;
        re = a + re*10;
        num = (num - a) / 10;
        sum = sum + 1;
    }
    printf("������Ϊ %d λ��,�������������Ϊ%d\n",sum,re);
    return 0;
}
