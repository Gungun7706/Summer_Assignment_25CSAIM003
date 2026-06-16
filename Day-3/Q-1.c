#include<stdio.h>
int main(){
    int n;
    printf("Enter  the number");
    scanf("%d",&n);
if(n<1)
{
    return 0;

}
 for(int x=2;x<=n-1;x++)
    {
       if (n%x==0){

       
       printf("Not a prime number");
         break;

        
    }
    else 
    {
        printf("number is a prime");
        break;
        

    }
}
return 0;


}