
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;
//Clase abstracta figura
class figura
{
	//Se definen como metodos virtuales puros para que la clase sea reconocida como abstracta
	virtual void setBase(double x) = 0;
	virtual void setAltura(double y) = 0;
	virtual double getBase() = 0;
	virtual double getAltura() = 0;
	virtual double getA() = 0;
	virtual double getP() = 0;
};
//Clase Triangulo
class triangulo :public figura
{
	private:
		double base, altura, hipotenusa,seno, coseno, tang, perimetro, area;
	public:
		//Constructores
		triangulo(double x, double y, double z)
		{
			base = x;
			altura = y;
			hipotenusa = z;
			perimetro = base + altura + hipotenusa;
			area = base*altura;
			coseno = cos(base/hipotenusa);
			seno = sin(altura / hipotenusa);
			tang = tan(altura / base);
		}
		~triangulo(){}
		//Getters y Setters
		virtual void setBase(double x)
		{
			base = x;
		};
		virtual void setAltura(double y)
		{
			altura = y;
		};
		virtual double getBase()
		{
			return base;
		};
		virtual double getAltura()
		{
			return altura;
		};
		virtual double getP()
		{
			return perimetro;
		};
		virtual double getA()
		{
			return area;
		};
		double getHip()
		{
			return hipotenusa;
		}
		double getSeno()
		{
			return seno;
		}
		double getCos()
		{
			return coseno;
		}
		double getTang()
		{
			return tang;
		}
};
int main(void)  //Main para comprobar el funcionamiento.
{
	//figura myfig; Marca error, debido a que es una clase abstracta.
	triangulo myT(3, 6, 5);
	cout << "Triangulo" << endl;
	cout << "Base: " << myT.getBase(); 
	cout << " Altura: " << myT.getAltura(); 
	cout << " Hipotenusa: " << myT.getHip();
	cout << "\n" << endl;
	cout << "Coseno: " << myT.getCos();
	cout << " Seno :" << myT.getSeno();
	cout << " Tangente: " << myT.getTang();
	cout << "\n" << endl;
	
}
