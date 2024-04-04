#include<stdio.h>
#include<stdlib.h>

int found=0;

void prime(int num)
{
    int arr[100],top=-1;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            int found1=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0) 
                {
                    found1++;
                    break;
                }
            }
            if(!found1) 
            {
                top++;
                arr[top]=i;
            }
        }
    }
    for(int i=0;i<=top-3;i++)
    {
        for(int j=i+1;j<=top-2;j++)
        {
            for(int k=j+1;k<=top-1;k++)
            {
                for(int h=k+1;h<=top;h++)
                {
                    if(num%(arr[i]*arr[j]*arr[k]*arr[h])==0)
                    {
                        found++;
                        return ;
                    }
                }
            }
        }
    }
}

int main()
{
    int i=90000;
    while(i)
    {
        prime(i);
        prime(i+1);
        prime(i+2);
        prime(i+3);
        if(found==4)
        {
            break;
        }
        found=0;
        i++;
    }
    printf("%d %d %d %d",i,i+1,i+2,i+3);
}