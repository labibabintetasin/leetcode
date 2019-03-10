#include<stdio.h>

int main()
{

 int i,j,m,n,max,count = 1,temp;

 while(scanf("%d %d",&i,&j) != EOF){

    if(!(i || j)) break;

        max=-120;

        printf("%d %d ",i,j);

        if(i>j){

                temp=j;
                j=i;
                i=temp;
        }

        for(m=i;m<=j;m++)
            {
                n = m;
                count=1;

                while(n != 1)
                {
                    if(n%2==0)
                    {
                      n = n / 2;
                    }
                    else
                    {
                        n = 3*n + 1;
                    }
                    count++;
                }

            if(count>max)
            {
                max=count;
            }


            }

            printf("%d\n",max);

 }

    return 0;

}
