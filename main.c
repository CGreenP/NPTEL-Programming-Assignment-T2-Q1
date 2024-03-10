#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,size=0;
    float inp,sum=0.0;
    float res[100];
    scanf("%f",&inp);
    while(inp!=(-1))
    {
        sum+=inp;
        res[i]=(float)(sum/(float)(i+1));
        i++;
        scanf("%f",&inp);
    }
    size=i;
    for(i=0;i<size-1;i++)
    {
        printf("%.2f ",res[i]);
    }
    printf("%.2f\n",res[size-1]);
    return 0;
}
