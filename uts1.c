/* Saya Alghaniyu Naufal Hamid [2105673] mengerjakan
   soal UTS no 1
   dalam mata kuliah algoritma dan pemrograman 1 
   untuk keberkahanNya maka saya tidak melakukan kecurangan 
   seperti yang telah dispesifikasikan. Aamiin
*/

//Libary yang digunakan
#include<stdio.h>

//deklarasikan fungsi
int main()//fungsi main = fungsi utama dalam program
{

    int n,      //n = untuk menampung angka yg akan menentukan ukutan pola 
        baris,  //baris = untuk menampung masukan baris untuk pola
        kolom;  //kolom = untuk menampung masukan kolom untuk pola

    //masukan n untuk menentukan ukuran pola 
    scanf("%d", &n);

    //for utama pertama untuk membentuk sayap bintang atas
    for (baris = 0; baris < n; baris++)//membuat baris pada piringan bintang
    {
        for (kolom = 0; kolom < n * 5; kolom++)     //membuat spasi sebanyak masukan dikali 5      
        {
            printf(" ");
        }
        for (kolom = n - baris ; kolom > 1; kolom--) //membuat spasi miring
        {
            printf(" ");
        }
        for (kolom = 0; kolom <= baris; kolom++)    //membuat bintang miring
        {
            printf("*");
        }
        printf("\n");//membuat garis baru di baris sekaligus membuat garis baru untuk kode selanjutnya
    }

    //for utama kedua untuk membentuk sayap atas lagi dan ekor piringan bintang
    for (baris = 0; baris < n; baris++)//membuat baris pada piringan bintang
    {
        for (kolom = 0; kolom < n; kolom++)         //membuat spasi sesuai banyak masukan
        {
            printf(" ");
        }
        for (kolom = n - baris; kolom > 1; kolom--) //membuat spasi miring
        {
            printf(" ");
        }
        for (kolom = 0; kolom <= baris; kolom++)    //membuat bintang miring
        {
            printf("*");
        }
        for (kolom = 0; kolom < n * 2; kolom++)     //membuat spasi dikali 2 sesuai masukan
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n; kolom++)         //membuat bintang sesuai banyak masukan 
        {
            printf("*");
        }
        for (kolom = 0; kolom < n * 3; kolom++)     //membuat spasi dikali 3 sesuai masukan
        {
            printf(" ");
        }
        for (kolom = n - baris; kolom > 1 ; kolom--)//membuat spasi miring
        {
            printf(" ");
        }
        for (kolom = 0; kolom <= baris; kolom++)    //membuat bintang miring
        {
            printf("*");
        }
        for (kolom = 0; kolom < n + 1; kolom++)     //membuat spasi sebanyak masukan yg ditambah 1
        {
            printf(" ");
        }
        for (kolom = n - baris; kolom > 1; kolom--)//membuat spasi miring 
        {
            printf(" ");
        }
        for (kolom = 0; kolom <= baris * 2; kolom++)//membuat bintang piramida
        {
            printf("*");
        }
        printf("\n");//membuat garis baru di baris sekaligus membuat garis baru untuk kode selanjutnya
    }
    
    //for utama ketiga untuk membuat badan piringan bintang
    for (baris = 0; baris < n; baris++)//menentukan baris pada piringan bintang
    {
        for (kolom = 0; kolom < n; kolom++)     //membuat bintang sesuai banyak masukan
        {
            printf("*");
        }
        for (kolom = 0; kolom < n * 2; kolom++)//membuat spasi sesuai masukan dikali 2
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n * 3; kolom++)//membuat bintang sesuai masukan dikali 3
        {
            printf("*");
        }
        for (kolom = 0; kolom < n; kolom++)     //membuat spasi sesuai banyak masukan
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n; kolom++)     //membuat bintang sesuai banyak masukan
        {
            printf("*");
        }
        for (kolom = 0; kolom < n * 2; kolom++) //membuat spasi sesuai banyak masukan dikali 2
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n * 2 + 1; kolom++)//membuat badan penghubung 2 piramida dengan dikali 2 dan ditambah 1 agar lebih 1
        {
            printf("*");
        }
        printf("\n");//membuat garis baru di baris sekaligus membuat garis baru untuk kode selanjutnya
    }
    
    //for utama keempat untuk membuat sayap bawah dan ekor piringan bintang
    for (baris = 0; baris < n; baris++)//menentukan baris pada piringan bintang
    {
        for (kolom = 0; kolom < n; kolom++)         //membuat spasi sesuai banyak masukan
        {
            printf(" ");
        }
        for (kolom = 0; kolom < baris; kolom++)     //membuat spasi miring
        {
            printf(" ");
        }
        for (kolom = n - 1; kolom >= baris; kolom--)//membuat bintang miring kebalik
        {
            printf("*");
        }
        for (kolom = 0; kolom < n * 2; kolom++)     //membuat spasi sesuai banyak masukan dikali 2
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n; kolom++)         //membuat bintang sesuai banyak masukan
        {
            printf("*");
        }
        for (kolom = 0; kolom < n * 3; kolom++)     //membuat spasi sebanyak masukan dikali 3
        {
            printf(" ");
        }
        for (kolom = 0; kolom < baris; kolom++)     //membuat spasi miring
        {
            printf(" ");
        }
        for (kolom = n - 1; kolom >= baris; kolom--)//membuat bintang miring terbalik
        {
            printf("*");
        }
        for (kolom = 0; kolom < n + 1; kolom++)     //membuat spasi ditambah 1
        {
            printf(" ");
        }
        for (kolom = 0; kolom < baris; kolom++)     //membuat spasi miring
        {
            printf(" ");
        }
        for (kolom = ((n - 1) * 2); kolom >= baris * 2; kolom--)//membuat piramida terbalik
        {
            printf("*");
        }
        printf("\n");//membuat garis baru di baris sekaligus membuat garis baru untuk kode selanjutnya
    }
    
    //for kelima untuk membuat sayap bawah piringan bintang
    for (baris = 0; baris < n; baris++)//menentukan baris pada piringan bintang
    {
         for (kolom = 0; kolom < n * 5; kolom++)    //membuat spasi sebanyak masukan dikali 5
        {
            printf(" ");
        }
        for (kolom = 0; kolom < baris; kolom++)     //membuat spasi miring terbalik
        {
            printf(" ");
        }
        for (kolom = n - 1; kolom >= baris; kolom--)//membuat bintang terbalik miring
        {
            printf("*");
        }
        printf("\n");//membuat garis baru di baris
    }

    return 0;//mengakhiri program
}