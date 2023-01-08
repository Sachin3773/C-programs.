#include<stdio.h>
int main()
/*{
    int a[10];
    int i,sum=0;
    for(i=0;i<=+9;i++)
    scanf("%d",&a[i]);     //sum of even numbers
    for(i=0;i<=9;i++)
    {
      if(a[i]%2==0)
      sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}*/
/*{
    int a[5];
    int i,c=0,d=0;
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    {
        if(a[i]<0)
        c++;
    }
    printf("number of negative numbers are %d",c);
    for(i=0;i<=4;i++)
    {
        if(a[i]>0)
        d++;
    }
    printf("\nnumber of positive numbers are %d",d);
    return 0;
}*/
/*{
   int a[10];
   int i,sum=0;
   for(i=0;i<=9;i++)
   scanf("%d",&a[i]);
   for(i=0;i<=9;i++)
   {
    if(i%2==0)
    sum=sum+a[i];
   }
   printf("%d",sum);
   return 0;
}*/
/*{
    int a[7];
    int i;
    for(i=0;i<=6;i++)         //reverse
    scanf("%d",&a[i]);
    for(i=7;i>=0;i--)
    {
      printf("%d\n",a[i]);
    }
return 0;

}*/
/*{
    int n,a=1,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {    s=a+i-1;
            for(int j=1;j<=i;j++)
            {
                if(i%2!=0)
                printf("%d ",a);
                else
                printf("%d ",s);
                a++;
                s--;
            }
            printf("\n");
}
}*/
/*{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);            //print element of array
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}*/
/*{
    int a[6];
    int i,c=0;
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    for(i=0;i<6;i++)
    {                                   //negative element count
        if(a[i]<0)
        {
            c++;
        printf("\n%d",a[i]);
    }
    printf("\nnumber of negative numbers are %d",c);
    }
    return 0;
}*/
/*{
    int a[8];
    int i,sum=0;
    for(i=0;i<8;i++)
    scanf("%d",&a[i]);        //sum of all element
    for(i=0;i<8;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}*/
/*{
    int a[10];
    int i,c=0,d=0;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)                //count even odd
    {
        if(a[i]%2==0)
        c++;
    }
    printf("number of even numbers are %d",c);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
        d++;
    }
    printf("number of odd numbers are %d",d);
    return 0;
}*/
/*{
    int a[5];
    int i,min,max;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);              //find min and max
    min=max=a[0];
    for(i=1;i<5;i++)
    {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    printf("minimum number is %d \n maximum number is %d",min,max);
    return 0;
}*/
/*{
    int n,a[500],i,j;
    printf("enter n :");
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)           //copy element
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
{
            b[n]=a[i];
        printf("%d\n",b[n]);
    }
    return 0;
    }*/
    /*{
        int n,m;
        printf("enter the number of blocks need in the two arr :");
        scanf("%d %d",&n,&m);
        int a[n],b[m];
        int i,j,k;
        int c[n+m];
        for(i=0;i<m+n-1;i++)
        {
        for(i=0;i<n;i++)
       { scanf("%d",&a[i]);
        c[k]=a[i];
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[j]);
            c[k]=b[j];
        }
            printf("%d",c[k]);
        }
         return 0;
    }*/
    /*{ 
        int a[100];
        int n,i;
        printf("enter n :");
        scanf("%d",&n);
        int b[n];
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        int pos,ele;
        i=0;                                            //insertion of a element
        printf("enter position and element :");
        scanf("%d %d",&pos,&ele);
        int k;
        for(k=n-1;k>=pos;k--)
        {
           b[k+1]=b[k];
        }
        b[pos]=ele;
        n++;
        for(i=0;i<n;i++)
        {
            printf("%d",b[i]);
        }
        return 0;
    }*/
    /*{
        int n;
        printf("enter n:");
        scanf("%d",&n);
        int m;
        int i,pos;
        printf("enter the number blocks you want:");
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        printf("enter the position which is to be deleted:");
        scanf("%d",&pos);
        i=0;
        for(i=pos;i<m-1;i++)
        {
            a[pos]=a[i+1];
        }
        m--;
        for(i=0;i<m;i++)
        printf("%d\n",a[i]);
        return 0;
    }*/
/*{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m],c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&b[i][j]);              //add two matrix
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d ",c[i][j]);
    
    printf("\n");
    }
}*/
/*{
    int n,m;
    printf("enter the row and columns:");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    printf("\nenter the elements of matrix:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    int s;
    printf("\n enter the scalar value to be multiply to matrix:");                                //multiply of  scalar
    scanf("%d",&s);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        b[i][j]=s*a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d  ",b[i][j]);
        printf("\n");
    }
    return 0;
}*/
/*{
    int n;
    printf("enter the number of rows and columns :");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("enter the elements of matrix A :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nenter the elements of matrix B :");                                                //multiply two matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("\n matrix A and B multiply\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        c[i][j]=a[i][j]*b[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}*/
/*{
    int n;
    printf("enter the number of rows and columns for the matrix:");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("enter the elements of matrix A\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("\n enter the elements of matrix B\n");                                                    //check equal matrix or not
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&b[i][j]);
        printf("\n");
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==b[i][j])
            k++;
        }
    }
    if(k==n*n)
    printf("both are equal matrix\n");
    else
    printf("both are not a equal matrix");
    return 0;
}*/
/*{
    int n;
    printf("enter the number of rows you want in square matrix:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("\n enter the elements if matrix:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)                                                                          //sum of minor diagonal
        scanf("%d",&a[i][j]);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            s=a[i][j]+s;
        }
    }
    printf("sum of minor diagonal of matrix is %d",s);
    return 0;
}*/
/*{
    int n,m;
    printf("enter the number of columns and rows :");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("enter the elements of matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<m;j++)
        {                                                                         //sum of each row and column
        s=a[i][j]+s;
        }
        printf("sum of %d row is %d \n",i+1,s);
    }
    for(int j=0;j<m;j++)
    {
        int p=0;
        for(int i=0;i<n;i++)
        {
            p=p+a[i][j];
        }
        printf("sum of %d column is %d\n",j+1,p);
    }
    return 0;
}*/
/*{
    int n;
    printf("enter the number of rows and column u need in matrix:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
            int s=0;                                                        //interchange the diagonals
            s=a[i][j];
            a[i][j]=a[i][n-1-i];
            a[i][n-1-i]=s;
            }
        }
    }
    printf("matrix after interchanging the diagonals \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}*/
/*{
    int n;
    printf("enter number of rows and columns : \n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of matrix \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);                                                 // triangular matrix
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        s=s+a[i][j];
    }
    printf("sum of lower triaangular matrix is %d",s);
    return 0;
}*/
/*{
    int n,m;
    printf("enter the number of rows and column u need\n");
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    printf("enter the elements of matrix \n");
    for(int i=0;i<n;i++)
    {                                                                                             //transpose of a matrix & symmetric
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("transpose of the matrix is \n");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        b[i][j]=a[j][i];
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(a[i][j]==b[i][j])
        s++;
    }
    if(s==(m*n))
    printf("it is a symmetric matrix");
    return 0;
}*/
/*{
    int n;
    printf("enter number of rows and columns : \n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int s,p;
    for(int i=0;i<n;i++)                                                                 //identity matrix check
    {
        for(int j=0;j<n;j++)
        {
            if(i==j&&a[i][j]==1)
            s=1;
            if((i-j)!=0&&a[i][j]==0)
            p=1;
        }
    }
    if(p==s)
    printf("it is a identity matrix");
    else
    printf("it is not a identity matrix");
}*/
/*{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int s;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
       { if(a[i]>a[j])                                                   //sorting
       { s=a[i];
        a[i]=a[j];
        a[j]=s;
    }}}
    for(int i=0;i<n;i++)
    printf("\n %d ",a[i]);
    return 0;
}*/
/*{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int ele,pos;
    printf("\nenter element to be inserted and on which position :");                                    //insertion
    scanf("%d%d",&ele,&pos);
    n++;
    for(int i=n-1;i>=pos;i--)
     a[i]=a[i-1];
     a[pos-1]=ele;
     for(int i=0;i<n;i++)
     printf("\n %d",a[i]);
     return 0;
}*/
/*{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("\n enter elements of array :");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)                                                           //multiplication of matrix
    scanf("%d",&b[i1][j1]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=a[i][j]*b[j][i]+a[i][j]*b[j][i+1]+a[i][j]*b[j][i+2];
            c[i][j]=sum;
            sum=0;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}*/
/*{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)                                                  //match table looser winner
        scanf("%d",&b[i][j]);
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                for(int l=0;l<m;l++)
                {
                    if(a[i][j]==b[k][l])
                    s++;
                }
            }
        }
    }
    if(s>=9)
    printf("\n WINNER");
    else
    printf("\nLOOSER");
    return 0;
}*/
{
    int a,k=0;
    scanf("%d",&a);
    int n=100;
    int c[n],b,i=0;
    
    
    while(a!=0)
    {
        b=a%2;
        a=a/2;
        c[i]=b;
        i++;
    }
   
   for(int j=i-1;j>=0;j--)
   printf("%d",c[j]);
   return 0;
}