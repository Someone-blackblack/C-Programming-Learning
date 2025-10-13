#include <stdio.h>
/*
int main(void)
{
    int num;
    num = 0;
    char ch;
    scanf("%c",&ch);
    while(ch != '#')
    {
        if(('A' <= ch) && (ch<= 'Z'))
        {
            num = num +1;

        }
        scanf("%c",&ch);
    }
    printf("%d\n", num);

    return 0 ;
}
*/
int main(void)
{
    int num;
    int sum;
    sum = 0;
    scanf("%d", &num);
    while(num >=0)
    {
        if(num%2 != 0)
        {
            sum = sum + num;
        }
        scanf("%d", &num);
    }
    printf("sum = %d\n", sum);

    return 0;
}
