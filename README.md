# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Programman
<br> Nama		: Mohammad Rafli Sumaryono
<br>NIM		:	1227050076
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Array adalah larik yang berisi kumpulan data dengan tipe serupa. Teknologi ini dapat digunakan untuk mempermudah penghitungan data karena mengelompokkan data-data berdasarkan kesamaannya. Untuk mempermudah pemahaman Anda mengenai hal ini, simak analogi berikut.

Misalnya, sebuah kereta terdiri dari beberapa gerbong yang menyimpan barang bawaan di dalamnya. Barang bawaan tersebut sama artinya dengan sekelompok data dengan tipe yang sama, sedangkan kereta tersebut adalah apa yang disebut dengan array itu sendiri. Kereta menampung barang-barang yang memiliki kesamaan nilai, sama seperti array yang memuat data-data dengan kemiripan tertentu
Array dua dimensi adalah sebutan untuk array yang penomoran index-nya menggunakan 2 buah angka.Analogi lain adalah matriks. Dalam matematika, matriks terdiri dari kolom dan baris. Kembali, untuk menentukan nilai dari sebuah matriks, kita harus sebut secara berpasangan seperti baris 1 kolom 1, atau baris 2 kolom 3, dst. Konsep seperti inilah yang menjadi dasar dari array 2 dimensi.

Untuk membuat array 2 dimensi di dalam bahasa C++, caranya tulis 2 kali tanda kurung siku setelah nama variabel, seperti contoh berikut:

int arr[2][2];

Pada UAS kali ini kami diminta membuat 2 buah program yaitu program pertama adalah membuat array 2 dimensi dengan baris ,kolom dan nilai nya di input sedangkan program ke dua digunakan untuk mencari nilai yanng dapat di bagi 3 7 5
## Source Code
                #include <iostream>
                using namespace std;



                int main(){
                    int k=0;
                    int l=0;
                    int i,j;

                    // 1

                    cout<<"Masukan Jumlah Baris :";
                    cin>>k;

                    cout<<"Masukan Jumlah Kolom :";
                    cin>>l;

                     int arr_num[k][l];

                 //2
                  for (i = 0; i < k; i++)
                    {

                        for (int j = 0; j < l; j++)
                        {
                            cout<<"Masukan nilai untuk Baris "<<i+1<<" dan Baris  "<<j+1<<" :"; 
                            cin>>arr_num[i][j];
                        }
                         cout<<endl;
                    } 

                     for (i = 0; i < k; i++)
                        {

                            for ( int j = 0; j <l ; j++)
                            { 
                             cout<<arr_num[i][j]<<" ";     
                            }  
                              cout<<endl;   
                        }




                    //3
                    cout<<endl;

                    for (i = 0; i < l; i++)
                        {

                            for ( int j = 0; j < k; j++)
                            { 
                             cout<<arr_num[j][i]<<" ";     
                            }  
                               cout<<endl;   
                        }





                    //4
                    int m;
                    cout<<endl;

                    int t,u;
                    int arr_num2[t][u];
                    cout<<"Masukan Jumlah Baris :";
                    cin>>t;

                    cout<<"Masukan Jumlah Kolom :";
                    cin>>u;

                 //2
                 for (i = 0; i < t; i++)
                    {
                     for (int j = 0; j < u; j++)
                    { 
                        cout<<"Masukan nilai untuk Baris "<<i+1<<" dan Baris  "<<j+1<<" :"; 
                        cin>>arr_num2[i][j];
                    }
                    cout<<endl;

                }


                  for (i = 0; i < t; i++)
                    {
                     for (int j = 0; j < u; j++)
                    {
                        if (arr_num2[i][j]%3 == 0 ||arr_num2[i][j]%5 == 0 ||arr_num2[i][j]%7 == 0 )
                        {
                            cout<<arr_num2[i][j]<<" ";   
                        }  

                    }
                }
                }







                }
## Output
![Screenshot 2022-12-19 144747](https://user-images.githubusercontent.com/71733796/208374447-a38c0dfa-b1b0-431d-8c72-40d8635b5f21.png)

