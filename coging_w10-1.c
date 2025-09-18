#include <stdio.h>

int main() {
    int n;              // ตัวแปร n เอาไว้เก็บจำนวนนักเรียน
    float score, sum = 0.0;  // score ใช้เก็บคะแนนแต่ละคน, sum ใช้เก็บผลรวมของคะแนนทั้งหมด
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);  // รับค่าจำนวนนักเรียนจากผู้ใช้

    printf("Enter %d student scores (one per line):\n", n);  // บอกให้ผู้ใช้ใส่คะแนน n คน

    for(i = 1; i <= n; i++) {
        printf("Score %d: ", i);    // พิมพ์ลำดับที่ของนักเรียน
        scanf("%f", &score);        // รับคะแนนเข้ามา
        sum += score;               // เอาคะแนนมาบวกสะสมใน sum
    }

    printf("\nNumber of students = %d\n", n);  // แสดงจำนวนนักเรียน
    printf("Average score = %.2f\n", sum / n); // คำนวณและแสดงค่าเฉลี่ย โดยให้ทศนิยม 2 ตำแหน่ง

    return 0;
}
