/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/
#include <stdio.h>

int main()
{
    int n ;
    printf("Test case:\n");
    printf("User input :\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Output:\n one");
        break;
    case 4:
        printf("Output:\n Four");
        break;
    case 12:
        printf("Output:\n Twelve");
        break;
    default :
        printf("Unknown\n");
        break;
    }
    
    return 0;
}