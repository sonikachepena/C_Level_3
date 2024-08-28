
#include <stdio.h>
int sum14(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = sum14(number);
if(result == 1)
printf("Sum of Digits is 14");
else
printf("Sum of Digits is not 14");
return 0;
}
int sum14(int no)
{
int result;
int sum=0;
while(no!=0){
    sum+=no%10;
    no/=10;
}
if(sum==14){
    return 1;
}else
{
    return 0;
}
return result;
}