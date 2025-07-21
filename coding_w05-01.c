#include <stdio.h>

int main() {
    // ประกาศตัวแปร name เป็นตัวอักษรภาษาอังกฤษตัวแรกของชื่อเล่น (ตัวพิมพ์ใหญ่)
    char name = 'P'; 

    // ประกาศตัวแปร age เป็นจำนวนเต็ม แทนอายุของตัวเอง
    int age = 19;

    // ประกาศตัวแปร weight เป็นเลขทศนิยม แทนน้ำหนักของตัวเอง
    float weight = 75.5;

    // แสดงผลชื่อ อายุ และน้ำหนัก บรรทัดที่ 1
    printf("My nickname starts with: %c\n", name);

    // แสดงผลอายุและน้ำหนัก บรรทัดที่ 2
    printf("I am %d years old and weigh %.1f kg.\n", age, weight);

    return 0;
}