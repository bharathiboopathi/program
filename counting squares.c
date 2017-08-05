#include<stdio.h>
int main()
{
    int N,i,j,l,k,ch=1,lim=0,z1=0,z2=0,z3=0,z4=0,count=0,t=0,n1=0,n2=0,n3=0,n4=0,tt=1,in1=0,in2=0,in3=0,in4=0,m;
    scanf("%d\n",&N);
    int aa=N-1,t1=0,t2=1,a=t1,b=t2,op1=t1,op2=t2,cc=1,rr1=t1,rr2=t2,bb=aa;
    printf("%d %d %d %d %d %d %d %d\n",aa,t1,t2,op1,op2,a,b,cc);
    lim=(N*2)-1;
    char mat[lim][lim];
    scanf("%d\n",&m);
    char line[m][1];int fir[m][3],sec[m][3];
    for(i=0;i<m;i++)
    {
        for(j=0;j<1;j++)
        {
            scanf("%c,%d,%d\n",&line[i][j],&fir[i][j],&sec[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<1;j++)
        {
            printf("%c,%d,%d\n",line[i][j],fir[i][j],sec[i][j]);
        }
    }
   
    for(i=0;i<lim;i++)
    {
     for(j=0;j<lim;j++)
     {
         if(i%2==0&&j%2!=0)
         {
           mat[i][j]='-'; 
         }
         else if(i%2!=0&&j%2==0)
         {
             mat[i][j]='!';
         }
         else
         {
             mat[i][j]=' ';
         }
     }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<1;j++)
        {
            if(line[i][j]=='H')
            {
             mat[(fir[i][j]*2)-2][(sec[i][j]*2)-1]=' '; 
            }
            else if(line[i][j]=='V')
            {
             mat[(sec[i][j]*2)-1][(fir[i][j]*2)-2]=' ';  
            }
        }
    }
    for(i=0;i<aa;i++)
    {
        for(j=0;j<bb;j++)
        {
            for(l=0;l<bb;l++)
            {
                ch=1;
         switch (ch)
         {
             case 1:
             {
                 for(k=0;k<cc;k++)
                 {
                     if((mat[op1][op2]=='-')||(mat[op1][op2]=='!'))
                     {
                         printf("yes1 %d %d %d %d %d %d\n",op1,op2,z1,cc,rr1,rr2);
                         z1++;
                         if(z1<cc)
                        {
                        op2=op2+2;
                        in1++;
                        }
                     }
                     else
                     {
                     z1=0;z2=0;z3=0;z4=0;
                  n1++;
                   ch=2;
                     }
                 }
                 if(z1==cc)
                 {
                     z1=0;
                     op1++;op2++;
                     ch=2;
                 }
                 else
                 {
                     if(n1==0)
                     {
                     z1=0;z2=0;z3=0;z4=0;
                   op2=op2+2;
                     break;
                     }
                     else
                     {
                         op1=rr1;
                         rr2=rr2+2;op2=rr2;
                         break;
                     }
                 }
             }
             case 2:
             {
               for(k=0;k<cc;k++)
               {
                 if((mat[op1][op2]=='-')||(mat[op1][op2]=='!')) 
                 {
                     printf("yes2 %d %d %d %d\n",op1,op2,z2,cc);
                     z2++;
                     if(z2<cc)
                     {
                      op1=op1+2;
                      in2++;
                     }
                 }
                 else
                 {
                     z1=0;z2=0;z3=0;z4=0;
                   n2++;
                   ch=3;
                 }
               }
               if(z2==cc)
               {
                  
                   z2=0;
                   op1++;op2--;
                   ch=3;
               }
               else
                 {
                     if(n2==0)
                     {
                     z1=0;z2=0;z3=0;z4=0;
                   op2=op2+2;
                   break;
                     }
                     else
                     {
                        op1=rr1;
                         rr2=rr2+2;op2=rr2;
                         break;
                     }
                 }
             }
             case 3:
             {
              for(k=0;k<cc;k++)
               {
                 if((mat[op1][op2]=='-')||(mat[op1][op2]=='!')) 
                 {
                     printf("yes3 %d %d %d %d\n",op1,op2,z3,cc);
                     z3++;
                     if(z3<cc)
                     {
                     op2=op2-2;
                     in3++;
                     }
                 }
                 else
                 {
                 z1=0;z2=0;z3=0;z4=0;
                 n3++;
                   ch=4;
                 }
               }
               if(z3==cc)
               {
                  
                   z3=0;
                   op1--;op2--;
                   ch=4;
               }
               else
                 {
                     if(n3==0)
                     {
                     z1=0;z2=0;z3=0;z4=0;
                   op2=op2+2;
                     break;
                     }
                     else
                     {
                        op1=rr1;
                         rr2=rr2+2;op2=rr2;
                         break;
                     }
                 }
             }
             case 4:
             {
              for(k=0;k<cc;k++)
               {
                 if((mat[op1][op2]=='-')||(mat[op1][op2]=='!')) 
                 {
                     printf("yes4 %d %d %d %d %d %d\n",op1,op2,z4,cc,rr1,rr2);
                     z4++;
                     if(z4<cc)
                     {
                     op1=op1-2;
                     in4++;
                     }
                 }
                 else
                 {
                     printf(" comeon\n");
                  z1=0;z2=0;z3=0;z4=0;
                  n4++;
                 }
               }
               if(z4==cc)
               {
                   printf("count\n");
                   z4=0;
                   op1=rr1;
                   rr2=rr2+2;op2=rr2;
                   count++;
                   break;
               }
               else
                 {
                     if(n4==0)
                     {
                         printf("yes yeswww\n");
                     z1=0;z2=0;z3=0;z4=0;
                     op1=rr1;
                   rr2=rr2+2;op2=rr2;
                     break;
                     }
                     else
                     {
                         printf("%d %d\n",rr1,rr2);
                        rr1=rr1-2;op1=rr1;
                         rr2=rr2+2;op2=rr2;
                         break; 
                     }
                 }
             }
         }
        
         }
         z1=0;z2=0;z3=0;z4=0;
          t1=t1+2;
          op1=t1;
          op2=t2;rr1=t1;rr2=t2;
        }
        bb--;
        z1=0;z2=0;z3=0;z4=0;
        t1=0;t2=1;op1=t1;op2=t2;rr1=t1;rr2=t2;
        cc++;
    }
    printf("\n");
    printf("%d\n",count);
    for(i=0;i<lim;i++)
    {
        for(j=0;j<lim;j++)
        {
            printf("%c",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
