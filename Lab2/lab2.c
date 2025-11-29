#include <stdio.h>

int main(){
//Bài_1:XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int a, b, tong, hieu;
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    tong = a+b;
    hieu = a-b;
    printf("\nTong cua 2 so nguyen la: %.2d", tong);
    printf("\nHieu cua 2 so nguyen la: %.2d", hieu);
#include <stdio.h>

//Bai_2:XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
float CD, CR, Chuvi, Dientich;
    printf("\nNhap chieu dai: ");
    scanf("%f", &CD);
    printf("\nNhap chieu rong: ");
    scanf("%f", &CR);
    Chuvi = ((CD+CR) * 2);
    Dientich = CD * CR;
    printf("\nChu vi hinh chu nhat: %.2f", Chuvi);
    printf("\nDien tich hinh chu nhat: %.2f", Dientich);
#include <stdio.h>
//Bài_3:XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#define PI 3.14
    float r, ChuviHT, DientichHT;
    printf("\nNhap ban kinh hinh tron: ");
    scanf("%f", &r);
    ChuviHT = 2 * PI * r;
    DientichHT = 2 * r * r;
    printf("\nChu vi hinh tron: %.2f", ChuviHT);
    printf("\nDien tich hinh tron: %.2f", DientichHT);
//Bài_4: XÂY DỤNG CÔNG THỨC TÍNH ĐIỂM TRUNG BÌNH CỦA BA MÔN TOÁN,LÝ,HÓA
#include <stdio.h>
    float toan, ly, hoa;
    printf("\nNhap diem mon toan: ");
    scanf("%f", &toan);
    printf("\nNhap diem mon ly: ");
    scanf("%f", &ly);
    printf("\nNhap diem mon hoa: ");
    scanf("%f", &hoa);
float dtb = ((toan * 3) + (ly * 2) + hoa)/6;
    printf("\nDiem trung binh ba mon: %.3f", dtb);
    //Bài_5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TAM GIÁC VUÔNG
#include <stdio.h>
    float ch, cgv, dc, dientich, chuvi;
    printf("\nNhap canh huyen: ");
    scanf("%f", &ch);
    printf("\nNhap canh goc vuong: ");
    scanf("%f", &cgv);
    printf("\nNhap duong cao: ");
    scanf("%f", &dc);
    dientich = (cgv * dc)/2;
    chuvi = ch + cgv + dc;
    printf("\nChu vi hinh tam giac vuong: %.3f", chuvi);
    printf("\nDien tich hinh tam giac vuong: %.3f", dientich);
return 0;
}