# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Programman
<br> Nama		: Mohammad Rafli Sumaryono
<br>NIM		:	1227050076
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
<br> program untuk menginput array 2 dimensi dengan kolom dan baris yang ditentukan ...lalu di rubah menjadi kolom menjadi baris dan baris menjadi kolom
<br> program untukk  melihat angka yang habis di bagi 3 5 7 dengan batas maksimal di inputkan
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
            cout<<"Masukan nilai untuk Baris "<<i+1<<" dan Kolom  "<<j+1<<" :"; 
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
    
    cout<<"masukan batas maksimal deret bilangan :";
    cin>>m;
    
    for (i = 0; i <= m; i++){
        if (i%3 == 0 ||i%5 == 0 ||i%7 == 0 )
        {
            cout<<i<<" ";   
        }  
    }

    

}
## Output
![Screenshot 2022-12-19 142045](https://user-images.githubusercontent.com/71733796/208369689-79128ed1-f37f-49dc-9a33-30dcc4061bbf.png)
                      
![Screenshot 2022-12-19 142302](https://user-images.githubusercontent.com/71733796/208370037-b8fb0a58-5a4c-4019-980a-7d33b869411e.png)
