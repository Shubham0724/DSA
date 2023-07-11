//what is the time complexity of the following snippet of code?

#include<stdio.h>

int isPrime(int n)
{
    for (int i = 2; i*i <10000; i++)
    {
        if(n % i == 0)
        {
            return 0 ;
        }
    }
    return 1;

}
int main()
{
    int number = 4;
    int result = isPrime(number);

    if (result == 1)
    {
        printf("%d is prime.\n", number);
    }
    else
    {
        printf("%d is not prime.\n", number);
    }

    return 0;
}