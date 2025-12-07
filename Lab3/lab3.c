/*
//Bài_1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
#include <stdio.h>

int main(){
    double dtb;
    printf("Nhập vào điểm trung bình của bạn: ");
    scanf("%lf", &dtb);
    if (dtb>=9)
    {
        printf("Xuất sắc");
    }else if (dtb>=8)
    {
        printf("Giỏi");
    }else if (dtb>=6.5)
    {
        printf("Khá");
    }else if (dtb>=5)
    {
        printf("Trung bình");
    }else{
    printf("Yếu");
    }
    return 0;
}*//*
//Bài_2: GIẢI PHƯƠNG TRÌNH BẬC NHẤT
#include <stdio.h>

int main(){
    printf("\nPhương trình có dạng ax + b = 0\n");
    float a, b;
    printf("\nNhập a:  ");
    scanf("%f", &a);
    printf("Nhập b: ");
    scanf("%f", &b);
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
        printf("Phuong trinh co 1 nghiem: x = %.2f\n", x);
    }
return 0;
}*//*
#include <stdio.h>
#include <math.h>
//Bài_3: GIẢI PHƯƠNG TRÌNH BẬC 2
int main(){
    printf("Phương trình có dạng ax2 + bx + C = 0\n");
double a1,b1,c1,delta,x1,x2;
    printf("\nNhap a1: ");
    scanf("%lf",&a1);
    printf("Nhap b1: ");
    scanf("%lf",&b1);
    printf("Nhap c1: ");
    scanf("%lf",&c1);
    if(a1==0){
    if(b1==0){
        if(c1==0){
            printf("Phuong trinh vo so nghiem");
        }else{
            printf("Phuong trinh vo nghiem");
        }
    }else{
        x1=-c1/b1;
        printf("Phuong trinh co nghiem x= %.2lf",x1);
    }
}else{
    delta=b1*b1-4*a1*c1;
    if(delta<0){
        printf("Phuong trinh vo nghiem");
    }else if(delta==0){
        x1=-b1/(2*a1);
        printf("Phuong trinh co nghiem kep x1=x2= %.2lf",x1);
    }else{
        x1=(-b1+sqrt(delta))/(2*a1);
        x2=(-b1-sqrt(delta))/(2*a1);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1= %.2lf\n",x1);
        printf("x2= %.2lf\n",x2);
    }
}
}*//*
#include <stdio.h>
#include <stdlib.h>
//Bài_4: TÍNH TIỀN ĐIỆN
    void tinhtiendien(){
    float soDien, tienDien=0;
    printf("\nNhap so dien tieu thu trong thang: ");
    scanf("%f", &soDien);
    if(soDien <= 50){
        tienDien = soDien * 1.678;
    }else if(soDien <= 100){
        tienDien = 50 * 1.678 + (soDien - 50) * 1.734;
    }else if(soDien <= 200){
        tienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
    }else if(soDien <= 300){
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
    }else if(soDien <= 400){
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
    }else{
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
    }
    printf("So tien dien phai dong: %.2f VND\n", tienDien);
}
    int main(){
    tinhtiendien();
    return 0;
    }*?
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int menu;
    printf("\n---MENU---\n");
    printf("1. Tinh hoc luc\n");    
    printf("2. Giai phuong trinh bac nhat\n");
    printf("3. Giai phuong trinh bac hai\n");
    printf("4. Tinh tien dien\n");
    printf("5. Thoat\n");
    printf("Chon chuc nang (1-5): ");
    scanf("%d", &menu);
    switch(menu){
        case 1:
            // Gọi hàm tính học lực
            break;
        case 2:
            // Gọi hàm giải phương trình bậc nhất
            break;
        case 3:
            // Gọi hàm giải phương trình bậc hai
            break;
        case 4:
            break;
        case 5:
            printf("Thoat chuong trinh.\n");
            exit(0);
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
    }            
    return 0;
}*/
