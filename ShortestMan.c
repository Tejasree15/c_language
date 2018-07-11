#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,pos,min;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     min=a[0];
    for(int i=0;i<n;i++)
    {

        if(min>a[i])
        {
            min=a[i];
            pos=i;
        }
    }
    if(min==a[0])
    {

        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        return 0;

    }
    else
    {
        int temp=a[pos];
        a[pos]=a[0];
        a[0]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
