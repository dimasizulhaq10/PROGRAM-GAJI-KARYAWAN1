/*PROGRAM GAJI KARYAWAN*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

const int Jam_Kerja_Normal=48;
const int Bonus_Lembur_Perjam=4000;

main()
{
    char Golongan,nama[30];
    int Jumlah_Jam_Kerja,Gaji_Total,Gaji_Pokok,Gaji_Perjam,Jumlah_Jam_Lembur,Bonus_Lembur;
    printf(">==========Selamat Datang Di Website Resmi PT.Makmur Jaya============<\n");
    printf(">=======Silahkan Masukkan Identitas Anda Pada Kolom Dibawah ini======<\n");
    printf(">====Untuk Mengetahui Penghasilan yang Anda dapat Selama 1 Minggu====<\n");
	printf("----------------------------------------------------------------------\n \n \n");
	
	     printf(" > Masukkan Nama Anda      : ");
             gets(nama);
         printf("\n");
         printf(" > Masukkan Jam Kerja Total : ");
             scanf("%d",&Jumlah_Jam_Kerja);
         printf("\n");
         printf(" > Pilih Golongan [A/B/C/D] : ");
		     Golongan=getche();
             switch (Golongan)
                 {
                     case 'A':
                         {
                             Gaji_Perjam=5000;
                             break;
                         }
                     case 'B':
                         {
                             Gaji_Perjam=7000;
                             break;
                         }
                     case 'C':
                         {
                             Gaji_Perjam=8000;
                             break;
                         }
                     case 'D':
                         {
                             Gaji_Perjam=10000;
                             break;
                         }
       }
    if (Jumlah_Jam_Kerja<=Jam_Kerja_Normal)
       {
            Gaji_Total =(Jumlah_Jam_Kerja*Gaji_Perjam);
       }
            else
            {
                 Jumlah_Jam_Lembur =(Jumlah_Jam_Kerja-Jam_Kerja_Normal);
				 Bonus_Lembur =(Jumlah_Jam_Lembur*Bonus_Lembur_Perjam);
				 Gaji_Pokok =(Jam_kerja_Normal*Gaji_Perjam);
                 Gaji_Total =(Gaji_Pokok+Bonus_Lembur);
            }
printf("\n \n \n");
printf("> Hasilnya \n \n");
printf("> Karyawan Yang Bernama  : %s \n \n",nama);
printf("> Gaji Total Anda Sebesar : Rp. %d.00,- \n",Gaji_Total);
getche();
printf("\n \n");
    printf(">===============Terima Kasih================<\n");
    printf(">=======Telah Menjadi Bagian dari Kami======<\n");
    printf(">=================Regard====================<\n \n \n");
return 0;

} 
           

        
