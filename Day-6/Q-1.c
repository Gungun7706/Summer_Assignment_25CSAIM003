
    #include<stdio.h>
int main(){
    int num, rem;
    int binary[32];   
    int i = 0;

    printf("Enter the decimal number: ");
    scanf("%d", &num);

    if(num == 0)
    {
       
        return 0;
    }

    while(num != 0)
    {
        rem = num % 2;
        binary[i] = rem;
        i++;
        num = num / 2;
    }

    printf("Binary: ");
    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}
