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
