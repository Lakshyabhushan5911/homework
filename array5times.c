#include<stdio.h>
int main()
{
    int i=0;
    int marks[5];
 marks[0]=80;
 marks[1]=60;
  marks[2]=70;
   marks[3]=85;
    marks[4]=75;
for(i=0;i<5;i++){
    printf("\n%d %d %d %d %d mark[%d] %d",i,&marks[i]);
}
return 1;
}