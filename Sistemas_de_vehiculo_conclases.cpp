#include <iostream>
using namespace std;

class Vehiculo{
private:
    string pidevias;
    string avanzar;
public:

    string estado;

    void setpidevias(string p){

        pidevias=p;
        
    }

    void modificarpidevias(string pp){

        pidevias=pp;

    }

    void setavanzar(string a){

        avanzar=a;
    }

    void modificaravanzar(string aa){

        avanzar=aa;
    }

    void setestado(string s){

        estado=s;
    }

    void modificarestado(string ss){

        estado=ss;

    }

    string getpidevias(){

        return pidevias;
    }

    string getavanzar(){

        return avanzar;
    }

    string getestado(){

        return estado;
    }


    void encendiendopagado(){

        cout<<"Vehiculo "<<estado<<"\n";
    }

    void avanzandoretrocediento (){

        cout<<"El vehiculo esta "<<avanzar<<"\n";

    }

    void derechaizquierda (){

        cout<<"El Vehiculo esta girando a la "<<pidevias<<"\\n";
    }
};

int main (){

int opcion;

    do
    {
        cout<<"------Bienvenido a tu Automovil------\n";
        cout<<" Preciona la opcion que deseas ejecutar\n";
        cout<<"1. Encender el vehiculo.\n";
        cout<<"2. Apagar el Vehiculo.\n";
        cout<<"3. Avanzar.\n";
        cout<<"4. Retroceder.\n";
        cout<<"5. Girar hacia la derecha >>>>>\n";
        cout<<"6. Girar hacia la izquierda <<<<<\n";
        cin>>opcion;

        switch (opcion)
        {
        case 1:{
            Vehiculo encender;
            encender.setestado("Encendido -----0-----\n");
            cout<<encender.getestado()<<endl;
            encender.encendiendopagado();

            break;
        }
            case 2:{
                
            Vehiculo apagado;
            apagado.modificarestado("Apagado");
            cout<<apagado.getestado()<<endl;
            apagado.encendiendopagado();

            break;
        }
                case 3:{

                Vehiculo avanzar;
                avanzar.setavanzar("Avanznado =====10km=====\n");
                cout<<avanzar.getavanzar()<<endl;
                avanzar.avanzandoretrocediento();

            break;
        }            
                    case 4:{

                    Vehiculo retroceder;
                    retroceder.setavanzar("Retrocediendo =====-10km=====\n");
                    cout<<retroceder.getavanzar()<<endl;
                    retroceder.avanzandoretrocediento();

            break;
        }
                    case 5:{

                    Vehiculo izquierda;
                    izquierda.setpidevias("<<<<<<<<<<\n");
                    cout<<izquierda.getpidevias()<<endl;
                    izquierda.derechaizquierda();
            break;
        }                

        default:

                    Vehiculo derecha;
                    derecha.setpidevias(">>>>>>>>>>\n");
                    cout<<derecha.getpidevias()<<endl;
                    derecha.derechaizquierda();

            break;
        }
        
    } while (opcion!=6);
    
    return 0;
}