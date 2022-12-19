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
