
#include <stdio.h>
// int main ()
/*{
    int a, b, c;
    printf("Nhap a va b:");
    scanf("%d %d", &a, &b);
    c = a + "c la: %d", c);
    return 0;
}*/
/*{
    int x, y;
    x = 5;
    y = 2;
    printf("int: %d & %d \n", x, y);
    printf("bieu thuc : %d \n", x + y);
    printf("bieu thuc %d \n", x - y);
    printf("bieu thuc: %d \n", x % y);
    getchar();
}*/
/*{
    char ch;
    printf("Nhap ki tu: ");
    scanf("%c", &ch);
    printf("ki tu ban da nhap la: %c \n", ch);
    return 0;
}*/
/*{
    float r,c,s;
    printf("ban kinh cua hinh tron la r= ");
    scanf("%f", &r);
    c=6.28*r;
    s=3.14*r*r;
    printf("\n");
    printf("ket qua tinh chu vi va dien tich hinh tron: \n");
    printf("=============================\n");
    printf("ban kinh hinh tron:     r=%8.1f met \n",r);
    printf("chu vi hinh tron:     r=%8.1f met \n",c);
    printf("dien tich hinh tron:     r=%8.1f met vuong \n",s);
    printf("=============================\n\n");
  //  ==========vd2============
    printf("Data type     \t| Size of byte \n");
    printf("int           \t| %d byte \n",sizeof(int));
    printf("float         \t| %d byte \n",sizeof(float ));
    printf("unsigned int  \t| %d byte \n",sizeof( unsigned int));
    printf("short int     \t| %d byte \n",sizeof( short int));
    printf("long int      \t| %d byte \n",sizeof(long int));
    printf("double        \t| %d byte \n",sizeof(double));
    return 1;


}*/


/*int main()
    {
         char fullName[100];
         printf("moi ban nhap ten: ");
         gets(fullName);
         printf("xin chao ban %s", fullName);
         return 0;
    }*/
// vidu 1
/*int main ()
{
    int  c, b, d, a;
    printf("Nhap d: \n ");
    scanf("%d", &d);
    printf("Nhap c: \n ");
    scanf("%d", &c);
    a = 5*(c-3+d);
    printf("a = %d ",a);
    return 0;
}*/
//vidu2
/*int main () {
    int c, b, d, a, e;
    printf("Nhap d: \n ");
    scanf("%d", &d);
    printf("Nhap a: \n ");
    scanf("%d", &a);
    printf("Nhap b: \n ");
    scanf("%d", &b);
    printf("Nhap c: \n ");
    scanf("%d", &c);
    e = a * (b + c / d) - 22;
    printf("e = %d", e);
    return 0;
}*/
/*int main()
{
    int i = 10;
    int r;
    r = ++i%7;
    printf("i= %d", i);
    printf("r= %d", r);
    return 0;
}*/
int main() {
    int a = 76;
    float b = 24.67892345;
    char ch = 'A';
    printf("Inter data = %d \n", a);
    printf("char data 76= %c \n", a);
    printf("float data 76= %f \n", b);
    printf("character 76= %c \n", ch);
    printf("number of 'A'= %d \n", ch);
    printf("This prints the string \n");
    printf("%s", "this also printf a string \n");
    return 0;
}

