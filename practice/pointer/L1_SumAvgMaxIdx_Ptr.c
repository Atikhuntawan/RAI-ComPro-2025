/*
Level 1) Sum, Average, Max & First Index (Pointer-only)
เป้าหมาย
อ่านจำนวนเต็ม n ค่าใส่ในอาเรย์ arr แล้วหาค่า:
ผลรวม sum
ค่าเฉลี่ย avg
ค่าสูงสุด max
“ดัชนีแรก” ของ max (first index of max)

เงื่อนไข/แนะแนว
เดินอาเรย์ด้วยพอยน์เตอร์: int *p = arr; เดินจน p < arr + n
เก็บตำแหน่ง max ด้วยพอยน์เตอร์: int *p_max = arr;
ดัชนีแรกของ max: index = (int)(p_max - arr)
ควรตั้งต้น max = *arr; p_max = arr; หลังตรวจว่า n > 0

n=6
arr = 2 9 4 9 1 0
→ sum=25  avg=4.17  max=9  index=1
*/

#include <stdio.h>

int main(){
    int n;
    printf("Input a total number of integer: ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter integer %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int *p     = arr;
    int *p_max = arr;
    int *end   = arr + n;
    int   max  = *arr;
    float sum  = 0.0f;

    while (p < end){
        sum += *p;
        if (*p > max){
            max = *p;
            p_max = p;
        }
        p++;
    }

    int   index = (int)(p_max - arr);
    float avg   = sum / (float)n;

    printf("\nSum of integers is: %.0f", sum);
    printf("\nAverage of integers is: %.2f", avg);
    printf("\nMaximum integer is %d and it in index %d\n", max, index);

    return 0;
}