/*
Level 4) Remove Duplicates From Sorted Array (Stable, In-place)
เป้าหมาย
กำจัดค่าซ้ำในอาเรย์ ที่เรียงแล้ว (non-decreasing) ให้เหลืออย่างละตัว โดยทำ in-place และรายงานความยาวใหม่ m.

เงื่อนไข/แนะแนว
พอยน์เตอร์อ่าน/เขียน: int *r = arr; int *w = arr;
เขียนตัวแรกแน่ ๆ: *w++ = *r++
จากนั้นถ้า *r != *(w-1) ค่อยเขียน *w++ = *r
ความยาวใหม่ m = (int)(w - arr)
ต้องคงลำดับเดิม (stable)

ตัวอย่าง
arr(sorted) = 1 1 2 2 2 3 5 5
→ m = 4
→ arr (front m) = 1 2 3 5
*/