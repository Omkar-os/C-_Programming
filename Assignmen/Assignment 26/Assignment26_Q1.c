#include<stdio.h>

void pattern(int iNo)
{
    char ch = 'A';

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c ", ch);
        ch++;                                   // move to next character
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    pattern(iValue);

    return 0;
}
