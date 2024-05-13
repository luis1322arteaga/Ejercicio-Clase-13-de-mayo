#include <iostream>

using namespace std;

int main()
{
    int h = 0, t = 0, e = 0, s = 0, r = 0;
    string n;
    
    cout<<"Ingrese las horas trabajadas: \n";
    cin>>h;
    
    cout<<"Ingrese su nombre: \n";
    cin>>n;
    
    if(h <= 160)
    {
        t = h * 10;
        cout<<"Tarifa de $10: \n";
        cout<<t;
    }else if (h > 160)
    {
        e = ((h - 160) * 15) + (160 * 10);
        cout<<"Horas extras se pagan a 1.5 mas de las horas normales: \n";
        cout<<e << "\n";
    }
    
    cout<<"Ingrese su sueldo: \n";
    cin>>s;
    
    if(s<=2000) 
    {
        cout<<"Libre de impuestos";
    }else if(s>=2000 && s<=2200)
    {
        r =  (s * (-0.2) + s);
        cout<<"20% \n";
        cout<<r;
    }else if(s>=2201) 
    {
        r =  (s * (-0.3) + s);
        cout<<"30% \n";
        cout<<r;
    }
    
    return 0;
}