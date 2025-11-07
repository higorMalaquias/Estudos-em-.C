#include <stdio.h>

int main()
{
    float soma(int num1, int num2)
    {
        return num1 + num2;
    }

    int subtrai(int num1, int num2)
    {
        return num1 - num2;
    }

    int multiplica(int num1, int num2)
    {
        return num1 * num2;
    }

    float divide(float num1, float num2)
    {
        if (num2 == 0)
        {
            printf("o denominador nao pode ser zero\n");
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    }

    float res = 0;

    res = divide(8, 1);

    printf("o resultado e: %.2f", res);

    return 0;
}