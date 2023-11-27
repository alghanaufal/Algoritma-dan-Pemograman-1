/* Saya Alghaniyu Naufal Hamid [2105673] mengerjakan
   soal tugas praktikum 4
   dalam mata kuliah algoritma dan pemrograman 1 
   untuk keberkahanNya maka saya tidak melakukan kecurangan 
   seperti yang telah dispesifikasikan. Aamiin
*/

//Libary yang digunakan
#include <stdio.h>//Libary input output

//Deklarasi fungsi
int main()//fungsi main = fungsi utama dalam program
{
    //Deklarasi variabel
    int n,     //n = jumlah angka yang ingin dimasukan
        baris, //baris = digunakan untuk menampung baris
        kolom; //kolom = digunakan untuk menampung kolom
    int num1, num2;   //menaruh variabel dari if untuk mengetahui ganjil atau genap
    char a;    //untuk memasukan charakter penentu ganjil atau genap

    //tempat menaruh masukan
    scanf(" %c", &a);//masukan char
    scanf ("%d", &n);//masukan integer

    //menentukan genap atau ganjil
    if((a == 'a') || (a == 'i') || (a == 'u') || (a == 'e') || (a == 'o'))
	{
        num1 = 0;
    //num1
    //membuat tanduk
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for (kolom = baris; kolom >= 1; kolom--)
        {
            printf("%d", num1);
        }
        for(kolom = n ; kolom > baris; kolom--)
        {
            printf(" ");
        }
        for(kolom = n; kolom > baris; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n * 5 - 2; kolom++)
        {
            printf(" ");
        }
        for (kolom = baris * 2 - 1; kolom <= n * 2; kolom++)  
        {  
            printf(" ");   
        }  
        for (kolom = baris; kolom >= 1; kolom--)  
        {  
            printf("%d", num1); 
        }  
        ++num1;
        ++num1;  //manambahkan angka jd ditambah 2 

        if (num1 >= 9)
        {
            num1 = 0;
        }
        printf("\n");
    }

    //membuat mata dan hidung
    for (baris = 0; baris < n; baris++)
    {
        for (baris = 0; baris < n - 1; baris++)
        {
            printf(" ");
        }
        for (baris = 0; baris < n * 7 + 2; baris++)
        {
            printf("%d", num1);
        }
        ++num1;
        ++num1;

        if (num1 >= 9)
        {
            num1 = 0;
        }
        printf("\n");
    }
    for (baris = 1; baris <= n - 2; baris ++)
    {
        for (kolom = n - baris; kolom > 1; kolom--)  
        {  
            printf(" ");   
        }  
        for (kolom = 0; kolom < baris; kolom++)  
        {  
            printf("%d", num1); 
        }
        for (kolom = 0; kolom < 1; kolom++)
        {
            printf("%d", num1);
        }
        for (kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n * 2; kolom++)
        {
            printf("%d", num1);
        }
        if (baris != n - 2)
        {
            for (kolom = 0; kolom < n; kolom++)
            {
                printf("%d", num1);
            }  
        }                
        if (baris == n - 2)
        {
            for (kolom = 0; kolom < n; kolom++)
            {
            printf(" ");
            }
        }
        for (kolom = 0; kolom < n * 2; kolom++)
        {
            printf("%d", num1);
        }
        for (kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 0; kolom < 1; kolom++)
        {
            printf("%d", num1);
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", num1);
        }
        ++num1;
        ++num1;

        if (num1 >= 9)
        {
            num1 = 0;
        }
        printf("\n");
    }
    for (baris = 0; baris < n; baris++)
    {
        for (baris = 0; baris < n * 9; baris++)
        {
            printf("%d", num1); 
        }
        ++num1;
        ++num1;

        if (num1 >= 9)
        {
            num1 = 0;
        }
        printf("\n");
    }
    
    //membuat kakinya
    for (baris = 0; baris < n; baris++)
    {
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 0; kolom < n; kolom++)
        {
            printf("%d", num1);
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
             printf("%d", num1);
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
             printf("%d", num1);
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
             printf("%d", num1);
        }  
        ++num1;
        ++num1;

        if (num1 >= 9)
        {
            num1 = 0;
        }
        printf("\n");
    }
    }
    else if ((a != 'a') || (a != 'i') || (a != 'u') || (a != 'e') || (a != 'o'))
    {
        num2 = 1;
    //num 2
    //membuat tanduk 
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for (kolom = baris; kolom >= 1; kolom--)
        {
            printf("%d", num2);
        }
        for(kolom = n ; kolom > baris; kolom--)
        {
            printf(" ");
        }
        for(kolom = n; kolom > baris; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n * 5 - 2; kolom++)
        {
            printf(" ");
        }
        for (kolom = baris * 2 - 1; kolom <= n * 2; kolom++)  
        {  
            printf(" ");   
        }  
        for (kolom = baris; kolom >= 1; kolom--)  
        {  
            printf("%d", num2); 
        }  
        ++num2;
        ++num2;  //manambahkan angka jd ditambah 2 

        if (num2 >= 11)
        {
            num2 = 1;
        }
        printf("\n");
    }

    //membuat mata dan hidung
    for (baris = 0; baris < n; baris++)
    {
        for (baris = 0; baris < n - 1; baris++)
        {
            printf(" ");
        }
        for (baris = 0; baris < n * 7 + 2; baris++)
        {
            printf("%d", num2);
        }
        ++num2;
        ++num2;
        if (num2 >= 11)
        {
            num2 = 1;
        }
        printf("\n");
    }
    for (baris = 1; baris <= n - 2; baris ++)
    {
        for (kolom = n - baris; kolom > 1; kolom--)  
        {  
            printf(" ");   
        }  
        for (kolom = 0; kolom < baris; kolom++)  
        {  
            printf("%d", num2); 
        }
        for (kolom = 0; kolom < 1; kolom++)
        {
            printf("%d", num2);
        }
        for (kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 0; kolom < n * 2; kolom++)
        {
            printf("%d", num2);
        }
        if (baris != n - 2)
        {
            for (kolom = 0; kolom < n; kolom++)
            {
                printf("%d", num2);
            }
        }        
        if (baris == n - 2)
        {
            for (kolom = 0; kolom < n; kolom++)
            {
            printf(" ");
            }
        }
        for (kolom = 0; kolom < n * 2; kolom++)
        {
            printf("%d", num2);
        }
        for (kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for (kolom = 0; kolom < 1; kolom++)
        {
            printf("%d", num2);
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d", num2);
        }
        ++num2;
        ++num2;
        if (num2 >= 11)
        {
            num2 = 1;
        }
        printf("\n");
    }
    for (baris = 0; baris < n; baris++)
    {
        for (baris = 0; baris < n * 9; baris++)
        {
            printf("%d", num2); 
        }
        ++num2;
        ++num2;
        if (num2 >= 11)
        {
            num2 = 1;
        }
        printf("\n");
    }
    
    //membuat kakinya
    for (baris = 0; baris < n; baris++)
    {
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 0; kolom < n; kolom++)
        {
            printf("%d", num2);
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
             printf("%d", num2);
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
             printf("%d", num2);
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
            printf(" ");
        } 
        for(kolom = 0; kolom < n; kolom++)
        {
             printf("%d", num2);
        }  
        ++num2;
        ++num2;
        if (num2 >= 11)
        {
            num2 = 1;
        }
        printf("\n");
    }
    }    
    return 0;
}


