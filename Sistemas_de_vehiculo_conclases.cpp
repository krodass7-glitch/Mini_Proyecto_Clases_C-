#include <iostream>
using namespace std;

class Vehiculo{
private:
    string pidevias;
    int avanzar=0;
public:

    string estado;

    void setpidevias(string p){

        pidevias=p;
        
    }

    void setavanzar(int a){

        avanzar=a;
    }

    void setestado(string s){

        estado=s;
    }

    string getpidevias(){

        return pidevias;
    }

    int getavanzar(){

        return avanzar;
    }

    string getestado(){

        return estado;
    }


    void encendiendo(){

        cout<<"Vehiculo Encendido \n"<<estado<<"\n";
    }

    void avanzando(){

        cout<<"El vehiculo esta avanzando!!"<<avanzar<<"\n";

    }

    void izquierda(){

        cout<<"El Vehiculo esta girando a la izquierda"<<pidevias<<"\\n";
    }
};

int main (){

int opcion;

    do
    {
        /* code */
    } while (condition);
    





    return 0;
}