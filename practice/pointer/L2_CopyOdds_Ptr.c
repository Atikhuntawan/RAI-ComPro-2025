/*
Level 2) Copy Odd Numbers (Reader/Writer Pointers)
เป้าหมาย
ให้ src ขนาด n คัดเฉพาะ เลขคี่ ไปยัง dst โดย คงลำดับเดิม และบอกจำนวนที่คัดได้ odd_count.

เงื่อนไข/แนะแนว
พอยน์เตอร์อ่าน: int *r = src; เดินถึง src + n
พอยน์เตอร์เขียน: int *w = dst;
เมื่อเจอเลขคี่ ((*r) % 2 != 0) ให้คัดลอกด้วย *w++ = *r; และเพิ่ม odd_count
ช่วงข้อมูลจริงใน dst คือ dst[0 .. odd_count-1] หรือ w - dst == odd_count

ตัวอย่าง
src = 3 8 5 6 7 4 9 2 1 0
→ odd_count=5
→ dst: 3 5 7 9 1
*/

#include <stdio.h>

int main(){
    int n;
    
    printf("Enter number of integers: ");
    scanf("%d",&n);
    
    int src[n];
    int dst[n];
    
    for (int i = 0; i < n; i++){
        printf("Input integer %d: ",i+1);
        scanf("%d", &src[i]);
    }
    
    int *r   = src;      // r = "ตัวชี้อ่าน" (reader) เริ่มชี้สมาชิกตัวแรกของ src  (= &src[0])
    int *end = src + n;  // end = "เซนทินัล" ชี้ตำแหน่งหลังสมาชิกสุดท้าย 1 ช่อง (ห้าม dereference ใช้แค่เปรียบเทียบหยุดลูป)
    int *w   = dst;      // w = "ตัวชี้เขียน" (writer) ชี้ตำแหน่งที่จะเขียนตัวถัดไปลงใน dst  (= &dst[0] ตอนเริ่ม)
    int odd_count = 0;   // จำนวนนับของค่าที่เป็น "เลขคี่" ที่คัดลอกได้แล้ว
    
    while (r < end) {                // เดิน r ตั้งแต่ต้น src ไปจนถึงก่อน end (ไม่ออกนอกอาเรย์)
        if ((*r) % 2 != 0) {         // ถ้าค่าที่ r ชี้อยู่เป็นเลขคี่ (อ่านค่าด้วย *r)
            *w = *r;                 // คัดลอกค่าคี่จาก src → dst (เขียนที่ตำแหน่งที่ w ชี้)
            w++;                     // ขยับตำแหน่งเขียนไปขวา 1 ช่อง (ชี้ไปยัง "ช่องว่าง" ถัดไปใน dst)
            odd_count++;             // เพิ่มตัวนับว่าคัดได้อีก 1 ค่า
        }
        r++;                         // ขยับตำแหน่งอ่านไปขวา 1 ช่อง เพื่อตรวจสมาชิกตัวถัดไปใน src
    }
    
    printf("\nodd_count = %d\n", odd_count);
    printf("dst: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");
    return 0;
}
