#include<stdio.h>
int main()
{
    printf("+----------------+--------+--------+");
    printf("\n|%-16s|%8s|%8s|"," Name","score1 ","score2 ");
    printf("\n+----------------+--------+--------+");
    printf("\n|%-16s|%8s|%8s|"," Alice","85 ","90 ");
    printf("\n|%-16s|%8s|%8s|"," Bob","78 ","82 ");
    printf("\n|%-16s|%8s|%8s|"," Charlie","92 ","88 ");
    printf("\n+----------------+--------+--------+");

    return 0;
}