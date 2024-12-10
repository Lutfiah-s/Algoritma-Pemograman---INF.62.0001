<div align="center">
<h3><img src="https://media.giphy.com/media/WUlplcMpOCEmTGBtBW/giphy.gif" width="30"> 🙎 LUTFIAH SAHIRA | 💻 24343039 | 🛸 Algoritma Pemograman <img src="https://media.giphy.com/media/WUlplcMpOCEmTGBtBW/giphy.gif" width="30"></h3>
</div>

<p align="center">
	<a href="https://github.com/Bouaskaoun">
		<img src="https://readme-typing-svg.herokuapp.com?lines=Dosen+:+Randi+Proska+Sandra;Algoritma+Pemograman;INF+.+62+.+0001&center=true&width=380&height=65">
	</a>
</p>

<p align="center">
  <img src="https://media2.giphy.com/media/v1.Y2lkPTc5MGI3NjExdnd5ZHpkcTh4cXNqcnIwOWdyazFxcWU3ZHNzaHQwY2p6dTVrejVjNiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/6ib6KPmkeAjDTxMxij/giphy.webp" alt="Animated GIF">
</p>

# 🌿 RINGKASAN MODUL 1-11
## `MODUL 1` 
Modul 1 berisi penjelasan mengenai pengantar algoritma dan pemograman. Algoritma adalah bagian penting dari ilmu komputer, karena algoritma mengatur langkah-langkah yang disusun secara sistematis dan logis untuk menyelesaikan masalah.

Pemograman adalah proses penulisan kode menjadi suatu program. 

Salah satu contoh pemograman yang paling mendasar adalah mencetak ``"Hello World!"`` 

Soal nomor 3 : Program ``"Hello, World!"`` dalam Bahasa C
Program ini adalah program paling dasar dalam pemrograman C. Fungsinya hanya untuk menampilkan teks ``"Hello, World!"`` di layar.
Penjelasan:
 * `#include <stdio.h>`: Baris ini menginformasikan kepada compiler bahwa program akan menggunakan fungsi-fungsi yang ada di dalam library stdio.h. Library ini berisi fungsi-fungsi untuk input dan output, termasuk fungsi printf().
 * `int main()`: Ini adalah fungsi utama dari program. Setiap program C harus memiliki fungsi main().
 * `printf("Hello, World!\n");`: Fungsi printf() digunakan untuk mencetak teks yang ada di dalam tanda kutip ke layar. \n adalah karakter khusus yang membuat kursor berpindah ke baris berikutnya setelah mencetak teks.
 * `return 0`: Ini menunjukkan bahwa program telah selesai dijalankan dengan sukses.
Cara Kerja:
 * Program dimulai dari fungsi main().
 * Fungsi `printf()` mencetak teks `"Hello, World!"` ke layar.
 * Program selesai dan mengembalikan nilai 0.
Tujuan Pembelajaran:
Program ini biasanya menjadi program pertama yang dipelajari oleh pemula dalam bahasa C. Tujuannya adalah untuk:
 * Memahami struktur dasar sebuah program C.
 * Mengenal fungsi `printf()` untuk menampilkan output.
 * Memahami konsep library dan header file.
---
## `MODUL 2`
### No 1: Perkenalan
 * Fungsi: Program ini dirancang untuk berinteraksi sederhana dengan pengguna. Program akan menyapa pengguna dan meminta nama lengkapnya, lalu memberikan salam kembali.
 * Input: Nama lengkap pengguna yang diinputkan melalui keyboard.
 * Output: Pesan selamat datang yang dipersonalisasi dengan nama pengguna.
 * Struktur Data: Variabel nama tipe char digunakan untuk menyimpan nama lengkap pengguna.
 * Fungsi yang Digunakan:
   * `printf()`: Untuk menampilkan teks ke layar.
   * `scanf()`: Untuk membaca input dari pengguna.
     
### No 2: Menghitung Nilai Akhir
 * Fungsi: Program ini menghitung nilai akhir mahasiswa berdasarkan nilai praktikum, UTS, dan UAS dengan bobot tertentu.
 * Input: Nama, NIM, prodi, fakultas, nilai praktikum, nilai UTS, dan nilai UAS yang diinputkan pengguna.
 * Output: Nama, NIM, prodi, fakultas, nilai praktikum, nilai UTS, nilai UAS, dan nilai akhir mahasiswa.
 * Struktur Data:
   * Variabel-variabel dengan tipe char untuk menyimpan data teks seperti nama, NIM, prodi, dan fakultas.
   * Variabel-variabel dengan tipe float untuk menyimpan nilai numerik seperti nilai praktikum, UTS, UAS, dan nilai akhir.
 * Fungsi yang Digunakan:
   * `printf()`: Untuk menampilkan teks ke layar.
   * `scanf()`: Untuk membaca input dari pengguna.
   * Operasi aritmatika: Untuk menghitung nilai akhir berdasarkan bobot yang telah ditentukan.
     
### No 3 & 4: Menghitung Luas
 * Fungsi: Program ini menghitung luas bangun datar (segitiga dan persegi panjang) berdasarkan rumus yang sudah diketahui. Berikut salah satu contoh rumusnya :
	```c
	1/2  × Alas x Tinggi
	```
 * Input: Nilai panjang dan tinggi (untuk segitiga) atau panjang dan lebar (untuk persegi panjang) yang telah ditentukan dalam kode.
 * Output: Nilai luas bangun datar.
 * Struktur Data: Variabel-variabel dengan tipe float untuk menyimpan nilai panjang, lebar, tinggi, dan luas.
 * Fungsi yang Digunakan:
   * `printf()`: Untuk menampilkan hasil perhitungan.
   * Operasi aritmatika: Untuk melakukan perhitungan luas.
---
## `MODUL 3`:
### No 1 : Konversi Mata Uang
 * Program ini akan meminta input jumlah uang dalam Rupiah.
 * Nilai kurs ditetapkan sebagai konstanta.
 * Jumlah dolar dihitung dengan membagi jumlah rupiah dengan kurs.
 * Hasil konversi ditampilkan dengan format dua angka di belakang koma.
   
### No 2 : Konversi suhu
 * Fungsi: Program ini berfungsi untuk mengonversi suhu dari satu skala 
   (Celsius) ke tiga skala suhu lainnya (Kelvin, Fahrenheit, dan Reamur) 
   berdasarkan rumus konversi yang telah ditentukan.
 * Input: Suhu dalam `Celsius`
 * Output:
   * Suhu dalam `Kelvin`
     ```c
     𝐾 = 𝐶 + 273.15
     ```
   * Suhu dalam `Fahrenheit`
     ```c
     𝐹 = ( 𝐶 × 1.8 ) + 32
     ```
   * Suhu dalam `Reamur`
     ```c
     𝑅 = 𝐶 × 0.8
     ```
     
### No 3 : Menghitung volume dan luas permukaan bola
* Fungsi:
    * `#include <stdio.h>`: Menginklusikan header file stdio.h yang 
       menyediakan fungsi-fungsi input/output standar seperti printf.
    * `int main()`: Fungsi utama program C++. Setiap program C++ harus 
      memiliki fungsi main.
* Input:
   * Tidak ada input yang diterima dari pengguna dalam program ini. Nilai 
     diameter bola (12) sudah didefinisikan secara langsung dalam kode.
* Output:
  * Program ini mencetak dua nilai ke layar:
    Volume bola: Dihitung menggunakan rumus `V = (4/3) * π * r^3` dan 
    dicetak dengan format dua angka di belakang koma.
  * Luas permukaan bola: Dihitung menggunakan rumus `L = 4 * π * r^2` dan 
    dicetak dengan format dua angka di belakang koma.
---
## `MODUL 4`
### No 1 : Membuat konversi detik, menit, beserta sisa detik
  * Penjelasan Singkat:
Kode ini berfungsi untuk mengkonversi jumlah detik menjadi format jam, menit, dan detik. Program akan meminta pengguna untuk memasukkan jumlah waktu dalam detik, kemudian menghitung dan menampilkan hasilnya dalam format yang lebih mudah dibaca.
  * Fungsi yang Digunakan:
     * `#include <stdio.h>`: Menyertakan pustaka stdio.h yang berisi 
     * fungsi-fungsi input/output standar seperti `printf` dan `scanf`.
       `printf()`: Digunakan untuk mencetak teks ke layar.
       `scanf()`: Digunakan untuk membaca input dari pengguna.
  * Operator Aritmatika:
   `/`: Pembagian
   `%`: Modulus (sisa pembagian)
 * Input:
   * Jumlah detik: Pengguna diminta untuk memasukkan sebuah bilangan bulat 
   yang mewakili jumlah waktu dalam detik.
 * Output:
   * Jam, Menit, Detik: Program akan mencetak hasil konversi dalam format 
     "Jam Menit Detik". Misalnya, jika pengguna memasukkan 7320 detik, 
     outputnya akan menjadi "2 Jam, 2 Menit, 0 Detik".

### No 2 : Program Kasir Barang
 * Fungsi yang Digunakan:
    * `#include <stdio.h>`: Menyertakan pustaka stdio.h yang menyediakan fungsi-fungsi input/output standar seperti printf dan scanf.
    * `printf()`: Digunakan untuk menampilkan teks ke layar.
    * `scanf()`: Digunakan untuk membaca input dari pengguna.
    * Variabel: pembeli, namabarang, hargaSatuan, jumlahBarang, dan total digunakan untuk menyimpan data yang dimasukkan oleh pengguna dan hasil perhitungan.
    * Operator Aritmatika: `*` (perkalian) digunakan untuk menghitung total harga.
 * Input:
   	```
	Nama pembeli: String (teks) yang dimasukkan oleh pengguna.
	Nama barang: String (teks) yang dimasukkan oleh pengguna.
	Harga satuan: Bilangan bulat yang dimasukkan oleh pengguna.
	Jumlah barang: Bilangan bulat yang dimasukkan oleh pengguna.
    	
 * Output:
	Strukturnya: Program akan menampilkan kembali semua data yang telah dimasukkan oleh pengguna, termasuk nama pembeli, nama barang, harga satuan, jumlah barang, dan total harga.
Format: Data akan ditampilkan dalam format yang mudah dibaca, dengan label yang jelas untuk setiap data.

### No 3 : Nilai Akhir Praktikum
Program C++ ini dirancang untuk menghitung nilai akhir seorang mahasiswa berdasarkan komponen nilai presensi, praktikum, UTS, dan UAS. Program juga akan menampilkan kembali data mahasiswa beserta nilai akhirnya.
 * Fungsi yang Digunakan
   	``
	#include <stdio.h>: Menyertakan pustaka stdio.h yang menyediakan fungsi-fungsi input/output standar seperti printf dan scanf.
	#include <string.h>: Menyertakan pustaka string.h yang menyediakan fungsi-fungsi untuk manipulasi string (teks).
	printf(): Digunakan untuk menampilkan teks ke layar.
	scanf(): Digunakan untuk membaca input dari pengguna.
 * Variabel:
   	```
	nama, prodi, NIM: Variabel bertipe karakter (string) untuk menyimpan nama mahasiswa, program studi, dan nomor induk mahasiswa.
	nilai_presensi, nilai_praktek, nilai_uts, nilai_uas: Variabel bertipe float untuk menyimpan nilai masing-masing komponen.
	nilai_akhir: Variabel bertipe float untuk menyimpan nilai akhir yang telah dihitung.
 * Input
   	```
	Nama: String (teks) yang dimasukkan oleh pengguna.
	NIM: String (teks) yang dimasukkan oleh pengguna.
	Prodi: String (teks) yang dimasukkan oleh pengguna.
	Nilai komponen: Nilai-nilai komponen (presensi, praktek, UTS, UAS) sudah didefinisikan secara langsung dalam program.
 * Output
   	```
	Data mahasiswa: Nama, NIM, dan prodi yang telah dimasukkan oleh pengguna.
	Nilai komponen: Nilai presensi, praktek, UTS, dan UAS.
	Nilai akhir: Hasil perhitungan nilai akhir berdasarkan bobot yang telah ditentukan.
    
### No 4 : Sewa Film Bioskop
Program ini dirancang untuk menghitung biaya sewa film di sebuah bioskop. Biaya sewa dihitung berdasarkan durasi menonton. Jam pertama memiliki harga tetap, sedangkan jam berikutnya dikenakan biaya setengah dari harga jam pertama.
 * Fungsi Utama:
  * `biaya_rental(int durasi)`: Fungsi ini menerima input berupa durasi 
    sewa dalam satuan jam (integer) dan mengembalikan nilai float yang 
    merepresentasikan total biaya sewa.
  * `main()`: Fungsi utama program. Di sini, durasi sewa diinisialisasi, 
  * fungsi `biaya_rental` dipanggil, dan hasilnya ditampilkan ke layar.
 * Variabel:
   	```
	durasi: Menyimpan durasi sewa dalam satuan jam.
	satu_jam_pertama: Menyimpan harga sewa untuk jam pertama.
	jam_berikutnya: Menyimpan total biaya sewa untuk jam setelah jam 
                        pertama.
	total_bayar: Menyimpan total biaya sewa.
 * Input: Durasi sewa (dalam program ini sudah ditentukan sebagai 3 jam).
 * Output: Total biaya sewa yang harus dibayar.
---
## `MODUL 5`
### No 1 : Kalkulator Sederhana
Program ini dirancang sebagai kalkulator sederhana yang dapat melakukan operasi aritmatika dasar seperti penjumlahan, pengurangan, perkalian, pembagian, dan hasil bagi.
* Fungsi-fungsi `penjumlahan()`, `pengurangan()`, `perkalian()`, `pembagian()`, `hasil_bagi()`: Masing-masing fungsi ini melakukan satu operasi aritmatika tertentu. Mereka menerima input berupa dua bilangan, melakukan operasi, lalu menampilkan hasilnya.
`switch...case`: Digunakan untuk memilih fungsi yang akan dijalankan berdasarkan pilihan pengguna.
* Input: Pengguna diminta untuk memilih operasi yang ingin dilakukan (1 untuk penjumlahan, 2 untuk pengurangan, dst.) dan kemudian memasukkan dua bilangan yang akan dioperasikan.
* Output: Program akan menampilkan hasil perhitungan atau pesan kesalahan jika terjadi pembagian dengan nol.

### No 2 : Program TOSERBA
Program ini dirancang untuk menghitung total pembayaran setelah diberikan diskon berdasarkan total belanja. Besaran diskon akan berbeda-beda tergantung pada jumlah total belanja.
* Fungsi yang Digunakan
  * `jumlah_diskon(float total_belanja)`: Fungsi ini menerima input berupa 
    total belanja (dalam bentuk float) dan mengembalikan nilai float yang 
    merepresentasikan jumlah diskon.
  * `printf()`: Digunakan untuk menampilkan teks ke layar (misalnya, 
    menampilkan prompt untuk input pengguna atau hasil perhitungan).
  * `scanf()`: Digunakan untuk membaca input dari pengguna (misalnya, 
    membaca total belanja).
 * Input: Total belanja (dalam bentuk bilangan desimal).
 * Output:
   	```
	Total belanja.
	Jumlah diskon.
	Total pembayaran setelah dikurangi diskon

### No 3 : Program Logika Switch Case
Program ini dirancang untuk menghitung luas permukaan berbagai bangun ruang (bola, kubus, balok, dan tabung). Pengguna akan diminta memilih jenis bangun ruang yang ingin dihitung luas permukaannya. Setelah itu, pengguna akan diminta memasukkan nilai-nilai yang diperlukan untuk perhitungan (misalnya, jari-jari bola, panjang sisi kubus, dll.). Program kemudian akan menghitung dan menampilkan hasil luas permukaan.
* Fungsi Utama:
	* `printf()`: Digunakan untuk menampilkan teks ke layar (misalnya, menampilkan menu pilihan, meminta input, dan menampilkan hasil).
	* `scanf()`: Digunakan untuk membaca input dari pengguna (misalnya, membaca pilihan bangun ruang dan nilai-nilai dimensi).
	* `switch-case`: Digunakan untuk memilih perhitungan yang akan dilakukan berdasarkan pilihan pengguna.
	* `pow()`: Fungsi dari library math.h yang digunakan untuk menghitung pangkat (misalnya, pow(jari_jari, 2) untuk menghitung jari-jari kuadrat).
 * Input:
   	```
	Pilihan bangun ruang (1, 2, 3, atau 4).
	Nilai-nilai dimensi bangun ruang (jari-jari, sisi, panjang, lebar, tinggi) sesuai dengan pilihan bangun ruang.
* Output:
	```
	Luas permukaan bangun ruang yang dipilih.

 ### No 4 : 
Program ini dirancang untuk menghitung nilai akhir mahasiswa berdasarkan nilai kehadiran, tugas, UTS, dan UAS. Setelah itu, program akan memberikan nilai huruf dan keterangan kelulusan berdasarkan rentang nilai akhir. Program ini menggunakan struktur if-else if untuk menentukan nilai huruf dan memberikan pesan yang sesuai.
* Include Header: `#include <stdio.h>` untuk input/output.
* Deklarasi Variabel: Mendeklarasikan variabel kehadiran, tugas, uts, uas, `nilai_akhir` tipe float untuk menyimpan nilai-nilai numerik, dan `grade` tipe char untuk menyimpan nilai huruf.
* Input Nilai: Menggunakan scanf untuk meminta pengguna memasukkan nilai kehadiran, tugas, UTS, dan UAS.
* `Hitung Nilai Akhir`: Menghitung nilai akhir berdasarkan bobot masing-masing komponen.
* Tentukan Nilai Huruf: Menggunakan `if-else if` untuk menentukan nilai huruf berdasarkan rentang nilai akhir.
* Tampilkan Hasil: Menampilkan nilai akhir, grade, dan keterangan kelulusan menggunakan `printf`.
---
## MODUL 6
### No 1 : Membuat deret bilangan genap ganjil
program ini memberikan contoh sederhana tentang bagaimana menggunakan perulangan `for` dalam bahasa C untuk menghasilkan deret bilangan tertentu.
```
for (i = 1; i <= 50; i += 2) { ... }
```
* Fungsi yang Digunakan
	* `printf()`: Fungsi ini digunakan untuk menampilkan teks atau nilai variabel ke layar. Dalam kode ini, `printf()` digunakan untuk mencetak judul deret bilangan dan nilai-nilai bilangan yang dihasilkan.
	* `scanf()`: Meskipun tidak digunakan dalam kode ini, fungsi `scanf()` biasanya digunakan untuk mengambil input dari pengguna.
	* `for`: Struktur kontrol perulangan yang digunakan untuk mengulang suatu blok kode sebanyak tertentu. Dalam kasus ini, `for` digunakan untuk mengulang mencetak bilangan genap dan ganjil.
* Input : Tidak ada input yang diminta dari pengguna dalam kode ini. Semua nilai yang digunakan (0 hingga 50) sudah ditentukan di dalam kode.
* Output:
	* Deret bilangan genap : Program akan mencetak semua bilangan genap dari 0 hingga 50 dalam satu baris.
	* Deret bilangan ganjil: Setelah itu, program akan mencetak semua bilangan ganjil dari 1 hingga 50 dalam baris baru.

### No 2 : Membuat pola segitiga bilangan
Programm ini mencetak sebuah pola bilangan perkalian dalam bentuk segitiga. Setiap baris pada segitiga ini berisi perkalian dari nomor baris dengan angka dari 1 hingga nomor baris itu sendiri.
* Fungsi yang Digunakan:
	* `printf()`: Fungsi ini digunakan untuk menampilkan teks atau nilai variabel ke layar. Dalam kode ini, printf() digunakan untuk mencetak angka-angka yang membentuk pola segitiga dan juga untuk membuat baris baru.
	* `scanf()`: Fungsi ini digunakan untuk mengambil input dari pengguna. Dalam hal ini, scanf() digunakan untuk membaca nilai integer yang dimasukkan pengguna dan menyimpannya dalam variabel nilai.
	* `for`: Struktur kontrol perulangan yang digunakan untuk mengulang suatu blok kode sebanyak tertentu. Dalam kode ini, terdapat dua perulangan bersarang for untuk membentuk baris dan kolom pada pola segitiga.
* Input: Program meminta pengguna untuk memasukkan sebuah nilai integer. Nilai ini akan menentukan jumlah baris dan juga batas perkalian pada setiap baris.
* Output: Program akan mencetak sebuah pola segitiga bilangan perkalian ke layar. Setiap baris pada segitiga akan berisi perkalian dari nomor baris dengan angka dari 1 hingga nomor baris itu sendiri.

### No 3 : Membuat Pola Segitiga Bintang
Program ini dirancang untuk mencetak pola segitiga siku-siku yang terbuat dari tanda bintang (*). Ukuran segitiga akan ditentukan oleh nilai yang dimasukkan pengguna.
* Fungsi yang Digunakan:
	* `printf()`: Fungsi ini digunakan untuk menampilkan teks atau nilai variabel ke layar. Dalam kode ini, printf() digunakan untuk mencetak tanda bintang (*) dan juga untuk membuat baris baru.
	* `scanf()`: Fungsi ini digunakan untuk mengambil input dari pengguna. Dalam hal ini, scanf() digunakan untuk membaca nilai integer yang dimasukkan pengguna dan menyimpannya dalam variabel nilai.
	* `for`: Struktur kontrol perulangan yang digunakan untuk mengulang suatu blok kode sebanyak tertentu. Dalam kode ini, terdapat dua perulangan for yang bersarang untuk membentuk baris dan kolom pada pola segitiga.
* Input: Program meminta pengguna untuk memasukkan sebuah nilai integer. Nilai ini akan menentukan jumlah baris pada segitiga.
* Output: Program akan mencetak sebuah pola segitiga siku-siku yang terbuat dari tanda bintang (*) ke layar. Jumlah baris pada segitiga akan sesuai dengan nilai yang dimasukkan pengguna.

### No 4 : Membuat program atm sederhana
Program ini merupakan implementasi sederhana dari sebuah mesin ATM (Anjungan Tunai Mandiri). Program ini memungkinkan pengguna untuk melakukan beberapa transaksi dasar seperti cek saldo, setor tunai, dan tarik tunai. Program ini menggunakan struktur switch-case untuk mengelola pilihan menu yang dipilih pengguna.
* Fungsi-fungsi yang Digunakan
	* `tampilkan_menu()`: Fungsi ini digunakan untuk menampilkan menu pilihan kepada pengguna.
	* `cek_saldo()`: Fungsi ini digunakan untuk menampilkan saldo saat ini dari akun pengguna.
	* `setoran()`: Fungsi ini digunakan untuk memproses transaksi setoran tunai. Fungsi ini akan menambahkan jumlah setoran ke saldo saat ini.
	* `penarikan()`: Fungsi ini digunakan untuk memproses transaksi penarikan tunai. Fungsi ini akan mengurangi saldo saat ini dengan jumlah penarikan asalkan saldo akhir tidak kurang dari saldo minimal.
* Input:
  ```
	Nilai awal saldo: Diinisialisasi pada awal program.
	Pilihan menu: Pengguna diminta untuk memasukkan pilihan menu (1-4) untuk melakukan transaksi.
	Jumlah setoran/penarikan: Jika pengguna memilih opsi setor atau tarik, pengguna akan diminta untuk memasukkan jumlah uang yang ingin disetor atau ditarik.
* Output:
  	```
	Menu pilihan.
	Saldo saat ini.
	Pesan konfirmasi untuk setiap transaksi (berhasil atau gagal).
	Pesan terima kasih saat pengguna memilih untuk keluar.

<p align="center">
        <img src="https://raw.githubusercontent.com/mayhemantt/mayhemantt/Update/svg/Bottom.svg" alt="Github Stats" />
</p>
