/* Saya Alghaniyu Naufal Hamid [2105673] mengerjakan
   soal tugas praktikum 1 
   dalam mata kuliah algoritma dan pemrograman 1 
   untuk keberkahanNya maka saya tidak melakukan kecurangan 
   seperti yang telah dispesifikasikan. Aamiin
*/

//Libary yang digunakan
#include <stdio.h> //Libary input output

//Deklarasi fungsi
int main() //fungsi main = fungsi utama dalam program
{
//Deklarasi variabel	
	int p, l, t;    //untuk menampung panjang, lebar, dan tinggi 
	int luas;       //untuk menampung hasil luas tembok
	int j, m, d;    //untuk menampung waktu yang terdiri dari j=jam, m=menit, d=detik
	int detik;      //untuk menampung jumlah dari hasil perkalian luas tembok * 100
	
	scanf("%d %d %d", &p, &l, &t); //mamasukan input yang nanti akan menjadi jumlah luas tembok
	
	luas = 2 * (p * t) + 2 * (t * l); //rumus luas balok tanpa alas dan atap
	
	detik = 100 * luas; //perkalian antar hasil luas dengan waktu yang sibutuhkan untuk mengecat /m
	
	j = (detik / 3600); //untuk mangetahui berapa jam yang dibutuhkan
	
	m = (detik - (3600 * j)) / 60; //untuk mengetahui jumlah menit yang dibutuhkan
	
	d = (detik - (3600 * j) - (m * 60)); //untuk mengetahui jumlah detik yang dibutuhkan
	
	printf("Luas ruang tamu : %d meter persegi\n", luas);               //melihat hasil dari luas tembok yang harus dicat
	printf("Waktu menunggu  : %d jam, %d menit, %d detik\n", j, m, d);  //melihat berapa lama waktu yang dijalani teman peter selama menunggu

	return 0;
}	