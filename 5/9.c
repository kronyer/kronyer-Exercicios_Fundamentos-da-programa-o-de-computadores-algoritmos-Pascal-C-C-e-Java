#include <stdio.h>
int main (){
    int mat[15][5] = {{1, 63, 3, 3, 3}, {6, 7, 56, 66, 10}, {66, 66, 56, 14, 68},
     {16, 17, 18, 19, 20}, {21, 63, 23, 24, 25}, {26, 27, 28, 29, 30}, {31, 32, 33, 34, 35},
      {16, 72, 38, 39, 40}, {56, 42, 63, 44, 45}, {46, 47, 56, 49, 50}, 
      {51, 52, 53, 54, 55}, {56, 57, 58, 59, 16}, {61, 62, 63, 68, 65}, {66, 67, 68, 69, 70},
       {71, 72, 73, 74, 75}};

    int qto_repete[15][5];

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            qto_repete[i][j] = 0;
            for (int k = 0; k < 15; k++)
            {
                for (int l = 0; l < 5; l++)
                {
                    if (mat[i][j] == mat[k][l])
                    {
                        qto_repete[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (qto_repete[i][j] > 1)
            {
                printf("o numero %d se repete %d vezes \n ", mat[i][j], qto_repete[i][j]);

            }
        }
        printf("\n");
    }
}