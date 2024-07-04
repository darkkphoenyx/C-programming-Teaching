#include <stdio.h>

int main()
{
    int array[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The original values are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");

    int oddArray[10];
    int evenArray[10];
    int oddIndex = 0, evenIndex = 0;

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenArray[evenIndex++] = array[i];
        }
        else
        {
            oddArray[oddIndex++] = array[i];
        }
    }

    printf("The even values are: ");
    for (int i = 0; i < evenIndex; i++)
    {
        printf("%d, ", evenArray[i]);
    }
    printf("\n");

    printf("The odd values are: ");
    for (int i = 0; i < oddIndex; i++)
    {
        printf("%d, ", oddArray[i]);
    }
    printf("\n");
}
