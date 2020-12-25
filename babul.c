#include<stdio.h>
int main()
{
    int i,j,temp;
    int ara[10]={6,4,9,5,8,7,10,1,2,3};
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)

        {
            if(ara[i]<ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;

            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",ara[i]);
    }
}
