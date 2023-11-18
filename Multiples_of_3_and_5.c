#include<stdio.h>

int main()
{
    int t,n,sum=0;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        for(int i=0; i<n; i++)
        if(i%3==0 || i%5==0)sum+=i;    

        printf("%d\n", sum);
        sum=0;
    }
    

    return 0;
}