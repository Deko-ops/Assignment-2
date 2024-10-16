//arrays in c-2D
/*
arrays in c-2D
Author:Derrick Maina
reg no-CT101/G/22604/24
Date:15/10/2024
*/
#include<stdio.h>
int main() {
      int marks[2][3][4]={{ {1,2,3,8}, {4,5,6,4}, {7,8,9,9}}, {{10,11,12,14},{23,26,25,28},{34,32,29,43}} };
      int i,j,k;
      for(i=0;i<2;i++)
      for(j=0;j<3;j++)
      for(k=0;k<4;k++) {
      printf("%d\n",marks[i][j][k]);
      }
      return 0;
      }