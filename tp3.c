/* Saya Alghaniyu Naufal Hamid [2105673] mengerjakan
   soal tugas praktikum 3
   dalam mata kuliah algoritma dan pemrograman 1 
   untuk keberkahanNya maka saya tidak melakukan kecurangan 
   seperti yang telah dispesifikasikan. Aamiin
*/

//Libary yang digunakan
#include<stdio.h>
#include<math.h>

//membuat bungkusan untuk kode k
typedef struct
{
    int bil1, bil2, bil3; //mamasukan bungkusan 3 integer
}kode; //nama bungkusan

//Deklarasi fungsi
int main()//fungsi main = fungsi utama dalam program
{
    //deklarasikan variabel
    kode k;            //memberikan nama pada bungkusan 
    float r1;          //untuk menampung r1
    float x1, y1;      //untuk menampung x1 dan juga y1
    float r2;          //untuk menampung r2 
    float x2, y2;      //untuk menampung x2 dan juga y2 
    int p;             //untuk menampung p persen
    char c;            //untuk menampung char menentukan lingkaran

    //memasukan input 
    scanf("%d", &k);
    scanf("%.2f", &r1);
    scanf("%.2f", &x1);
    scanf("%.2f", &y1);
    scanf("%.2f", &r2);
    scanf("%.2f", &x2);
    scanf("%.2f", &y2);
    scanf(" %c", &c);
    scanf("%d", &p);

    //memasukan switch untuk bilangan pertama di kode k
    switch (k.bil1)
    {
        //bila memasukan kode k bilangan pertama 1
    case 1:
        printf("Eluas AB: %.2f cm2", (3.14 * sqrt(r1)) + (3.14 * sqrt(r2))); //rumus mencari luas lingkaran lalu menjumlahkannya
        break;

    case 2:
        printf("EKeliling AB: %.2f cm", (2 * 3.14 * r1) + (2 * 3.14 * r2)); //rumus mencari keliling lingkaran lalu menjumlahkannya
        break;

    case 3:
        printf("Jarak AB: %f setuan", (sqrt(x2 - x1) + (y2-y1)));//rumus mencari jarak antara pusat kedua lingkaran
        break;

    case 7:
        if('A')//membuat if untuk menentukan masukan charnya A atau B
        {
        printf("Luas %d %c: %.2f cm2", c, (p / 100));//rumus mencari persen
        }
        break;

    case 8:
        if('B')
        {
        printf("Luas %d %c: %.2f cm2", c, (p / 100));
        }
        break;
    }
    
    //memasukan switch untuk bilangan kedua di kode k
    switch (k.bil2)
    {
        //bila memasukan kode k kedua 
    case 1:
        printf("Eluas AB: %.2f cm2", (3.14 * sqrt(r1)) + (3.14 * sqrt(r2)));//rumus mencari luas lingkaran lalu menjumlahkan 
        break;

    case 2:
        printf("EKeliling AB: %.2f cm", (2 * 3.14 * r1) + (2 * 3.14 * r2));//rumus mencari luas lingkaran lalu menjumlahkan
        break;

    case 3:
        printf("Jarak AB: %f setuan", (sqrt(x2 - x1) + (y2-y1)));//rumus mencari jarak 
        break;

    case 7:
        if('A')//memasukan if untuk menentukan apakah charnya A atau B
        {
        printf("Luas %d %c: %.2f cm2", c, (p / 100));//mencari persen 
        }else{
            printf("tidak sesuai");
        }
        break;

    case 8:
        if('B')
        {
        printf("Luas %d %c: %.2f cm2", c, (p / 100));
        }
        break;
    }

    //memasukan switch untuk bilangan ketiga di kode k
    switch (k.bil3)
    {
    case 1:
        printf("Eluas AB: %.2f cm2", (3.14 * sqrt(r1)) + (3.14 * sqrt(r2)));//rumus mencari luas lingkaran lalu menjumlahkan 
        break;

    case 2:
        printf("EKeliling AB: %.2f cm", (2 * 3.14 * r1) + (2 * 3.14 * r2));//rumus mencari luas lingkaran lalu menjumlahkan
        break;

    case 3:
        printf("Jarak AB: %f setuan", (sqrt(x2 - x1) + (y2-y1)));//rumus mencari jarak 
        break;
    case 7://memasukan if untuk menentukan apakah charnya A atau B
        if('A')
        {
        printf("Luas %d %c: %.2f cm2", c, (p / 100));//mencari persen 
        }
        break;

    case 8:
        if('B')
        {
        printf("Luas %d %c: %.2f cm2", c, (p / 100));
        }else{
            printf("tidak sesuai");
        }
        break;
    }
    
    return 0;
}