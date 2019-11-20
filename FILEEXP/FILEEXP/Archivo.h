#pragma once
#include <iostream>
#include <string>
using namespace std;

class Archivo {
private:
	string nombre;
	string extension;
	string fecha;
	long long tamaño;
	string rname;
	string ruta;
public:
	Archivo(string nombre, string extension, string fecha, long long tamaño,string rname, string ruta) {

		this->nombre = nombre;
		this->extension = extension;
		this->fecha = fecha;
		this->tamaño = tamaño;
		this->rname = rname = rname;
		this->ruta = ruta;
	}

	string get_nombre() { return nombre; }
	string get_extension() { return extension; }
	string get_fecha() { return fecha; }
	long long get_tamaño() { return tamaño; }
	string get_rname() { return rname; }
	string get_ruta() { return ruta; }
};