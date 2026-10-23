#include<stdio.h>
int main()
{
    int test1, test2;
    float finalscore;

    printf("Enter test1 score: ");
    scanf("%d",&test1);

    printf("Enter test2 score: ");
    scanf("%d",&test2);

    finalscore = (test1 = test2) /2.0;
    printf("final score: %.2f\n", finalscore);

     return 0;
}