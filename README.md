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
    Volume bola: Dihitung menggunakan rumus `V = (4/3) * π * r^3` dan dicetak dengan format dua angka di belakang koma.
  * Luas permukaan bola: Dihitung menggunakan rumus `L = 4 * π * r^2` dan dicetak dengan format dua angka di belakang koma.
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
Fungsi yang Digunakan:

#include <stdio.h>: Menyertakan pustaka stdio.h yang menyediakan fungsi-fungsi input/output standar seperti printf dan scanf.
printf(): Digunakan untuk menampilkan teks ke layar.
scanf(): Digunakan untuk membaca input dari pengguna.
Variabel: pembeli, namabarang, hargaSatuan, jumlahBarang, dan total digunakan untuk menyimpan data yang dimasukkan oleh pengguna dan hasil perhitungan.
Operator Aritmatika: * (perkalian) digunakan untuk menghitung total harga.
Input:

Nama pembeli: String (teks) yang dimasukkan oleh pengguna.
Nama barang: String (teks) yang dimasukkan oleh pengguna.
Harga satuan: Bilangan bulat yang dimasukkan oleh pengguna.
Jumlah barang: Bilangan bulat yang dimasukkan oleh pengguna.
Output:

Strukturnya: Program akan menampilkan kembali semua data yang telah dimasukkan oleh pengguna, termasuk nama pembeli, nama barang, harga satuan, jumlah barang, dan total harga.
Format: Data akan ditampilkan dalam format yang mudah dibaca, dengan label yang jelas untuk setiap data.
<p align="center">
        <img src="https://raw.githubusercontent.com/mayhemantt/mayhemantt/Update/svg/Bottom.svg" alt="Github Stats" />
</p>
