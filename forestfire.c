 #include<stdio.h>
int main()
{
   static int i,j,m,n,k,l,temp;
   char a[100][100],count=2;
    scanf("%d %d\n",&m,&n);
    scanf("%d %d\n",&k,&l);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%c ",&a[i][j]);
        }
    }
    /*for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",a[i][j]);
        }printf("\n");
    }*/
    a[k][l]=1;temp=1;
    while(temp!=0)
    {
        temp=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                //printf("yes");
                 
                if(a[i][j]==count-1)
                {
                    k=i;
                    l=j;
                    if(a[k+1][l]=='T')
                    {
                        a[k+1][l]=count;
                        temp=1;
                        
                    }
                    if(a[k+1][l+1]=='T')
                    {
                        a[k+1][l+1]=count;
                        temp=1; 
                        
                    }
                     
                    if(a[k][l+1]=='T')
                    {
                        a[k][l+1]=count;
                        temp=1;  
                    }
                    if(a[k-1][l-1]=='T')
                    {
                        a[k-1][l-1]=count;
                        temp=1;
                    }
                    if(a[k-1][l]=='T')
                    {
                        a[k-1][l-1]=count;
                        temp=1;
                    }
                    if(a[k-1][l+1]=='T')
                    {
                        a[k-1][l+1]=count;
                        temp=1;
                    }
                    if(a[k][l-1]=='T')
                    {
                        a[k][l-1]=count;
                        temp=1;
                    }
                    if(a[k+1][l-1]=='T')
                    {
                        a[k+1][l-1]=count;
                        temp=1; 
                    }
                }
            }count++;//printf("%d",count);
        }
    }
   printf("%d",count);
    return 0;
}
