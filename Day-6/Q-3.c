#include<stdio.h>
int countsetbit(int num)
{
    int count=0;
    while(num>0)
    {
        int lastdigit=num&1;
        count+=lastdigit;
        num=num>>1;

    }
    printf("%d\n",count);
    return count;

}
int main(){
    int num;

    scanf("%d",&num);
    countsetbit(num);
    return 0;
    

}