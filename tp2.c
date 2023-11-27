/* Saya Alghaniyu Naufal Hamid [2105673] mengerjakan
   soal tugas praktikum 2
   dalam mata kuliah algoritma dan pemrograman 1 
   untuk keberkahanNya maka saya tidak melakukan kecurangan 
   seperti yang telah dispesifikasikan. Aamiin
*/

//Libary yang digunakan
#include <stdio.h> //libary input

//deklarasi fungsi
int main() //fungsi main = fungsi utama dalam program
{
	int q, w; //untuk menampung angka 
	char a, s, d, f; //untuk menampung huruf
	
	//masukan huruf dan angka
	scanf(" %c", &a);
	scanf(" %c", &s);
	scanf(" %c", &d);
	scanf(" %c", &f);
	scanf("%d", &q);
	scanf("%d", &w);
	
	int h = 0, j = 0, k = 0, l = 0; //menampung jumlah yang untuk menentukan vokal dan konsonan
	
	//tentukan vokal
	if((a == 'A') || (a == 'I') || (a == 'U') || (a == 'E') || (a == 'O')) 
	{
		h = 1; //untuk a alias variabel 1
	}
	if((s == 'A') || (s == 'I') || (s == 'U') || (s == 'E') || (s == 'O'))
	{
		j = 1; //untuk s alias variabel 2
	}
	if((d == 'A') || (d == 'I') || (d == 'U') || (d == 'E') || (d == 'O'))
	{
		k = 1; //untuk d alias variabel 3
	}
	if((f == 'A') || (f == 'I') || (f == 'U') || (f == 'E') || (f == 'O'))
	{
		l = 1; //untuk f alias variavbel 4
	}
	
	int jumlah;
	jumlah = h + j + k + l; //menghitung jumlah variabel yang bermuatan huruf vokal
	
	int hasil;
	hasil = q + w; //menghitung dua angka yg akan di jumlahkan 
	
	if (jumlah == 2) //menentukan apakah jumlah vokal sama dengan 2 atau tidak
	{
		if(hasil  % 2 == 0) //memastikan jumlah angka genap
		{
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}else{
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	if(jumlah > 2) //menentukan apakah jumlah vokal lebih dari 2 atau tidak
	{
		if(hasil % 2 != 0) //memastikan jumlah angka ganjil
		{
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}else{
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	if(jumlah < 2) //menentukan apakah jumlah vokal kurang dari 2 atau tidak
	{
		if(hasil >= 14) //memastikan jumlah angka lebih atau sama dengan 14
		{
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}else{
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	
	return 0;
}