#include <stdio.h>

int main() {
    float scores[3][3];  // สร้าง array 2 มิติ 3x3 [3 คน][3 วิชา]
    float avg_math = 0.0, avg_phy = 0.0, avg_chem = 0.0;  // ตัวแปรเก็บค่าเฉลี่ยแต่ละวิชา

    // รับค่าคะแนนของนักเรียนแต่ละคน
    for(int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &scores[i][0]);
        printf("Physics: ");
        scanf("%f", &scores[i][1]);
        printf("Chemistry: ");
        scanf("%f", &scores[i][2]);
    }

    // แสดงผลเป็นตารางคะแนน
    printf("\nScore Table:\n");
    printf("Student   Math   Physics   Chemistry\n");

    for(int i = 0; i < 3; i++) {
        printf("%-9d%-7.2f%-10.2f%-10.2f\n", i + 1,
               scores[i][0], scores[i][1], scores[i][2]);

        // รวมคะแนนเพื่อหาค่าเฉลี่ยรายวิชา
        avg_math += scores[i][0];
        avg_phy += scores[i][1];
        avg_chem += scores[i][2];
    }

    // คำนวณค่าเฉลี่ยรายวิชา
    avg_math /= 3;
    avg_phy  /= 3;
    avg_chem /= 3;

    // แสดงผลค่าเฉลี่ยรายวิชา
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", avg_math);
    printf("Physics: %.2f\n", avg_phy);
    printf("Chemistry: %.2f\n", avg_chem);

    return 0;
}
