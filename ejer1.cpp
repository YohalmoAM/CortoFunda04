#include <iostream>
#include <string.h>
#include <strings.h>

using namespace std;

//declaracion de funciones.
void cambio(string [],int);

int main(){
 
 int n,s;

 cout<<"Escriba la cantidad de letras que tiene su palabra: ";
 cout<<endl;
 cin>>n;

    string murcielago[n];
{
        
    for (int s = 0; s < n; s++)
    {
cout<<"Ahora Escriba la letra "<<s+1<<" de su palabra";
cout<<endl;
cin>>murcielago[s];  
    }
}
cambio(murcielago,n);
    
    cout << "Su palabra ahora es la siguiente : ";
    for (int s = 0; s < n; s++)
    {
        cout<< murcielago[s];
    }
    return 0;
}
//Definiendo funcion.
void cambio(string murcielago[],int n){

    int s;

for (int s = 0; s < n; s++)
    {
         if(murcielago[s]=="m")
{
              murcielago[s] = "0";
                                        }
               else if(murcielago [s] == "u")
                   {
                     murcielago[s] = "1";
                                             }
                      else if(murcielago [s] == "r")
                        {
                     murcielago[s] = "2";
                                              }
                           else if(murcielago [s] == "c")
                        {  
                           murcielago[s] = "3";
                                                  }
                                 else if(murcielago [s]=="i")
                                    {
                                       murcielago[s]="4";
                                                          }
                                   else if(murcielago [s]=="e")
                                        {
                                        murcielago[s] = "5";
                                                         }
                                          else if(murcielago [s]=="l")
                                       {
                                             murcielago [s]="6";
                                                                   }
                                            else if(murcielago[s]=="a")
                                        {
                                             murcielago [s] = "7";
                                                                     }
                                               else if(murcielago[s] == "g")
                                               {
                                                   murcielago [s]= "8";
                                                                       }
                                                    else if(murcielago[s] == "o")
                                                            {
                                                               murcielago[s]= "9";
                                                                                 }
                                                                     else
                                                                        {
                                                              murcielago[s]=murcielago[s];
                                                                                      }      
                                                                                    }   
                                                                                }