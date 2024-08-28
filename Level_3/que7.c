
#include <stdio.h>
int compare_numbers(int no1,int no2);
int main()
{
int number1,number2,result;
scanf("%d",&number1);
scanf("%d",&number2);
result = compare_numbers(number1,number2);
 if(result == 1)
 printf("Same");
 else
 printf("Not Same");
return 0;
}
int compare_numbers(int no1,int no2)
{
int result;
while(no1>0 && no2>0){
    if(no1%10 != no2%10){
        return 0;
    }
    no1/=10;
    no2/=10;
}
if(no1==0 && no2==0){
    return 1;
}

return result;
}