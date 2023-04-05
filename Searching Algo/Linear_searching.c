#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int n;
    scanf("%d",&n);
    int i,pos =-1;
    for (i=0;i<10;++i)
    {
        if(a[i] == n)
        {
            printf("Position of  %d ",i+1);
            pos = i;
            break;
        }
    }
    if(pos==-1)
        printf("Not Found !");
    else
        printf(" position %d",pos);
    return 0;
}