#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,n,y1,y2,yt,leng,m,l,z=1;
    scanf("%d %d %d", &x1, &x2, &n);
    yt = n/2 ;
    y2 = yt/2;
    y1 = yt - y2;
    leng = (x1 * y1 + x2 * y2);
    l = leng+1;
    while(l>0)
    {
        l--;
        printf("-");
        if(l-1==0 && z==1)
        {
            printf("*");
            l = leng;
            z = 0;
        }
    }
    printf("\n");
    l = leng+1;
    for(int i=y1 ; i>0 ;i--)
    {
        m+=x1;
        while(l>0)
        {
            l--;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        while(leng>l)
        {
            l++;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        l++;
        printf("\n");
    }
    for(int i=y2 ; i>0 ;i--)
    {
        m+=x2;
        while(l>0)
        {
            l--;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        while(leng>l)
        {
            l++;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        l++;
        printf("\n");
    }
    for(int i=y2 ; i>0 ;i--)
    {
        m-=x2;
        while(l>0)
        {
            l--;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        while(leng>l)
        {
            l++;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        l++;
        printf("\n");
    }
    for(int i=y1 ; i>0 ;i--)
    {
        m-=x1;
        while(l>0)
        {
            l--;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        while(leng>l)
        {
            l++;
            if (l==m)
            {
                printf("*");
                continue;
            }
            printf("-");
        }
        l++;
        printf("\n");
    }
    return 0;
}
