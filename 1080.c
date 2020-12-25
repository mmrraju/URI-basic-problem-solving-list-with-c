#include<stdio.h>
#include<string.h>
int main()
{
    int a[100];
    int i,j,k,n,l,tmp, max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
        break ;
    }
    max=a[k];
    for(l=0;l<n;l++)
    {
        if(a[l]==max)
        {
            printf("%d\n",l+1);
            break ;
        }
    }
    return 0;

}
