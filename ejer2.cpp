#include <iostream>
#include <conio.h>

using namespace std;

//Declaracion de variables y funciones:
int n,sobre,debajo;
float prom(float[], int);
int comparacion( float estaturas[], float fpromedio,int debajo,int sobre);
float sobrepro(float[],int,float);
float debajopro(float[],int,float);

int main()
{
    int n;
    float fpromedio,estaturas[25];
    int comp;

    cout<<"Por favor, ingrese a continuacion las estaturas de sus 25 alumnos";
    cout<<endl;

    for (n=0; n<25; n++)
    {
        cout<<"Ingrese la estatura del alumno:";
        cin>>estaturas[n];
    }
    fpromedio = prom(estaturas,n);

sobre=0;
debajo=0;

    cout<<"El promedio de estaturas de los 25 alumnos es: " << fpromedio <<endl;

sobre=sobrepro( estaturas, sobre, fpromedio);
debajo=debajopro(estaturas, debajo, fpromedio);

cout<<"La cantidad de personas con estatura sobre de la media son: "<<sobre<<endl;
cout<<"La cantidad de personas con estatura debajo de la media son: "<<debajo<<endl;

    getch();
    return 0;
}
float prom(float estaturas[25], int n){
    float suma=0, promedio;

    for(int n =0; n<25; n++){
        suma += estaturas[n];
    }
    promedio = suma/25;
    return promedio;
}
//primera funcion de comparacion, primero se ha intento con funcion void y bool.
float sobrepro(float estaturas[],int sobre,float fpromedio){

    int n;

    for (int n = 0; n < 25; n++)
    {
        if (estaturas[n]>fpromedio)
        {
            sobre++;
        }
        
    }
    return sobre;
}
//segunda funcion de comparacion
float debajopro(float estaturas[],int debajo,float fpromedio){

    int n;

    for (int n = 0; n < 25; n++)
    {
        if (estaturas[n]<fpromedio)
        {
            debajo++;
        }    
    }
   return debajo; 
}
