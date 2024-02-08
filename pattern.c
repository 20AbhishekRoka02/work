#include<stdio.h>

void printpattern(){
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (i==0){
                if ((j>2 && j<6) || (j>9 && j<13))
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            }
            else if (i==1)
            {
                if ((j>1 && j<7) || (j>9 && j<14))
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==2)
            {
                if ((j>0 && j<3) || (j>5 && j<8) || (j>9 && j<12) || (j>13 && j<16))
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==3)
            {
                if ((j>-1 && j<9) || (j>9 && j<12) || (j>13 && j<16) )
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==4)
            {
                if ((j>-1 && j<9) || (j>9 && j<15) )
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==5)
            {
                if ((j>-1 && j<2) || (j>6 && j<9) || (j>9 && j<14) )
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==6)
            {
                if ((j>-1 && j<2) || (j>6 && j<9) || (j>9 && j<14) )
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==7)
            {
                if ((j>-1 && j<2) || (j>6 && j<9) || (j>9 && j<12) || (j>12 && j<15) )
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            } else if (i==8)
            {
                if ((j>-1 && j<2) || (j>6 && j<9) || (j>9 && j<12) || (j>13 && j<16) )
                {
                    printf("*");
                } else{
                    printf(" ");
                }
            }
            
        }
        printf("\n");
        
    }
    
}

int main(){
    printpattern();
    return 0;

}