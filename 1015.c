#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,d,f;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF){
    d=x2-x1;
    f=y2-y1;
    printf("%.4lf\n",sqrt(d*d+f*f));
    }
    return 0;

}
