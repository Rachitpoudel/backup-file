
#include <stdio.h>
int main()
{
    int i,j,c1,c2,r1,r2;
    float a[5][5],b[5][5],c[5][5];
    printf("Enter the desired no of row and column in the first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter the desired no of row and column in the second matrix: ");
    scanf("%d %d",&r2,&c2);
    if ((r1==r2) &&(c1==c2))  {
        for (i=1; i<=r1; i++) {
            for (j=1; j<=c1; j++) {
                printf("\nEnter the element of first matrix : ");
                scanf("%f",&a[i][j]);
            }
        }
        for (i=1; i<=r1; i++) {
            for (j=1; j<=c1; j++) {
                printf("\nEnter the element of second matrix : ");
                scanf("%f",&b[i][j]);
            }
        }
        for (i=1; i<=r1; i++) {
            for (j=1; j<=c1; j++) {
                c[i][j]=a[i][j]+b[i][j];
            }
            

        }
        printf("\nThe first matrix you have enterd is : ");
        for (i=1; i<=r1; i++) {
            printf("\n");
            for (j=1; j<=c1; j++) {
                printf("\t %f",a[i][j]);
    }
        }
        printf("\nThe second matrix you have enterd is : ");
        for (i=1; i<=r1; i++) {
            printf("\n");
            for (j=1; j<=c1; j++) {
                printf("\t %f",b[i][j]);
    }
        }
        printf("\nThe sum of the two given %d*%d matrix is :",r1,c1);
        for (i=1; i<=r1; i++) {
            printf("\n");
            for (j=1; j<=c1; j++) {
                printf("\t %f",c[i][j]);
    }
        }
        

    }else{
        printf("\n The order of the matrix you have entered is invalid for addition");
    }
    printf("\n");
}

