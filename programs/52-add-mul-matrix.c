//  Kashish Ahuja
//  Program for addition and multiplication of two matrices

#include<stdio.h>
#include<conio.h>

void main()
{
    int arr_a[5][5], arr_b[5][5], arr_c[5][5], i, j, k, ra, ca, rb, cb, rc, cc, sum, mul;
    
    //  first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d",&ra, &ca);

    printf("Enter elements of first matrix: ");
    for(i=0; i<ra; i++)
    {
        for(j=0; j<ca; j++)
            scanf("%d",&arr_a[i][j]);
    }

    //  second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d",&rb, &cb);

    printf("Enter elements of second matrix: ");
    for(i=0; i<rb; i++)
    {
        for(j=0; j<cb; j++)
            scanf("%d",&arr_b[i][j]);
    }

    //  addition
    if(ra==rb && ca==cb)
    {   
        rc=ra; cc=ca;
        printf("\nElements of added matrix are: \n");
        for(i=0; i<rc; i++)
        {
            for(j=0; j<cc; j++)
                printf("%d ",(arr_a[i][j]+arr_b[i][j]));
            printf("\n");
        }
    }
    else
        printf("\nAddition is not possible because of different number of rows and columns of both the matrices.");

    //  multiplication
    if(ca==rb)
    {
        rc=ra; cc=cb;
        printf("\nElements of multiplied matrix are: \n");
        for(i=0; i<ra; i++)
        {
            for(k=0; k<cb; k++)
            {
                sum=0;
                for(j=0; j<rb; j++)
                {
                    mul=arr_a[i][j]*arr_b[j][k];
                    sum=sum+mul;
                }
                //  arr_c[i][k]=sum
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else
        printf("\nMultiplication is not possible because of different number of columns of first matrix and rows of second matrix.");

    getch();
} 
