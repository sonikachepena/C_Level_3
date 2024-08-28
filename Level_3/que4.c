
#include <stdio.h>
int isPrime(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = isPrime(number);
if(result == 1)
printf("Number is Prime");
else
printf("Number is not Prime");
return 0;
}
int isPrime(int no)
{
int result;
int isprime=1;
if (no <= 1)  // 0 and 1 are not prime numbers
        return 0;
    for (int i = 2; i <= no / 2; i++)  // loop from 2 to half of the number
    {
        if (no % i == 0)
            return 0;  // if divisible by any number, it's not prime
    }
return result;
}

