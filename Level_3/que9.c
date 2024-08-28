#include <stdio.h>
int swap_digits(int no);
int main()
{
int number, result;
scanf("%d",&number);
result = swap_digits(number);
printf("%d",result);
return 0;
}
int swap_digits(int no)
{
int result=0;
while(no>0){
    int first= no%10;
    int last= no/10;
    result=first*10+last;
    return result;
}
return result;
}