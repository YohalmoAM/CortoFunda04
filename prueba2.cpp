#include <iostream>

using namespace std;

int n,mayores,menores;
float promedio(float alturas[], int n);
bool comparacion(float alturas[],int n,int mayores,int menores,float promedioo);

int main()
{
    int n,mayores,menores;
    float alturas[25];
    float promedioo=(alturas,n);

    bool comp;

    cout<<"Por favor, ingrese a continuacion la altura de sus 25 alumnos";

    for (n=0; n<25; n++)
    {
        cout<<"Ingrese la altura del alumno:";
        cin>>alturas[n];
    }

    cout<<"El promedio de alturas de los 25 alumnos es: " << promedioo;
    cout<<endl;


    comp=comparacion (alturas,n, mayores, menores,promedioo);
if(comp == true){
    cout<<"La cantidad de personas sobre la media son: "<<mayores<<endl;
}
else
cout<<"La cantidad de personas abajo de la media son: "<<menores<<endl;
   
    return 0;
}

float promedio(float alturas[25], int n){
    float suma=0, promedio;

    for(int n =0; n<25; n++){
        suma += alturas[n];
    }
    promedio = suma/25;
    return promedio;
}

bool comparacion( float alturas[25],int n, float promedioo,int menores,int mayores){
    mayores=0;
    menores=0;
    for(n=0; n<25; n++)
{
        if (alturas[n] > promedio)
        {
            mayores++;
return true;
        }
        else
        {
            if (alturas[n] < promedio);
            {
             menores++;

               return false;
            }
        }
    }
}

