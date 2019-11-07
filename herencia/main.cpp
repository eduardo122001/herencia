#include <iostream>

using namespace std;


class comida{
public:
    comida(double _precio,string _codigo ){
    precio=_precio;
    codigo=_codigo;
    }
    string getcodigo(){return codigo;}
    double getprecio(){return precio;}
protected:
    double precio;
    string codigo;
};

class adobo:public comida{
    string calidad;
public:
    adobo(double _precio,string _codigo,string _calidad)
        :comida(_precio,_codigo),calidad(_calidad){}
    string getcalidad(){return calidad;}
};

class buffet_aqp:public comida{
    int cantidad_personas;
    string evento;
public:
    buffet_aqp(double _precio,string _codigo,int _cantidad_personas,string _evento)
        :comida(_precio,_codigo),cantidad_personas(_cantidad_personas),evento(_evento){}
    int getcantidadpersonas(){return cantidad_personas;}
    string getevento(){return evento;}
};


int main()
{   comida as(12.40,"cmd");
    adobo ad(20.50,"adb","alto");
    buffet_aqp af(100.90,"bffaqp",40,"boda");

    comida *as1=&as;
    adobo *ad1=&ad;
    buffet_aqp *af1=&af;

    cout<<as1->getcodigo()<<endl;
    cout<<as1->getprecio()<<endl;
    cout<<endl;
    cout<<ad1->getcalidad() <<endl;
    cout<<ad1->getcodigo() <<endl;
    cout<<ad1->getprecio() <<endl;
    cout<<endl;
    cout<<af1->getcantidadpersonas() <<endl;
    cout<<af1->getcodigo() <<endl;
    cout<<af1->getevento() <<endl;
    cout<<af1->getprecio() <<endl;
}
