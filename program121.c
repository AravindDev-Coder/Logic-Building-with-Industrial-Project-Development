// Row = 4  Col = 4
/*
    *   *   *   *
    $   $   $   $
    *   *   *   *
    $   $   $   $
    
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    //    1       2      3     
    for(i = 1; i<=iRow; i++)       // Outer (Rows)
    {   //    1       2       3      
        for(j =1; j <= iCol; j++)  // Inner (Columns)
        {
            if(i % 2 == 0)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);

    return 0;
}