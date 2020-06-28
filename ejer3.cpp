#include <iostream>
#include <conio.h>

using namespace std;

//Funciones utilizadas.
float med (float[]);
void prm (float);

int main(){

    int n,num;
    float grd[5],totl;

    cout<<"Ingrese el numero de estudiantes a los cuales se va a promediar: ";
    cout<<endl;
    cin>>num;

    for (int n = 0; n < num; n++)
    {
nel:
 for (int n = 0; n < 5; n++)
     {
    cout<<" Ingrese la nota del estudiante examinado:"<<endl;
    cin>>grd[n];
    }
        
totl = med(grd); 
cout<<"El promedio de las notas obtenidas por este estudiante es: "<<totl;
cout<<endl;

prm(totl);
 goto nel;
    }
  getch();
  return 0; 
}

//Funciones definidas.
float med(float grd[]){

    int n;
    float totl,pasa;

    pasa = 0;
    for (int n = 0; n < 5; n++)
    {
    pasa += grd[n];
    }
    totl= pasa/5;  

    getch();
    return totl;
}
void prm(float totl){

//Se ha tomado como 5 la nota minima para pasar.
    if (totl >= 5)
    {
        cout<<"El estudiante examinado ha aprobado el curso";
        cout<<endl;
    }
    else
    {
        cout<<"El estudiante examinado ha reprobado el curso ";
        cout<<endl;
        cout<<"Por favor contactar a su encargado.";
        cout<<endl;
    }
}