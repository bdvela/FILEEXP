#pragma once

#include <vector>
#include <functional>
#include "Archivo.h"
#include "AVLTree.h"
#include <string>
#include <filesystem>
#include "AVLTree.h"


using namespace std;
using namespace std::experimental::filesystem;

class FILEEXPLORER {

	AVLTree<Archivo*, string>*Names_tree;
	AVLTree<Archivo*, string>*Extensions_tree;
	AVLTree<Archivo*, string>*Dates_tree;
	AVLTree<Archivo*, long long>*Sizes_tree;

public:
	FILEEXPLORER() {

		//ARBOL PARA NOMBRES
		auto KeyN = [](Archivo* name) {return name->get_nombre(); };
		Names_tree = new AVLTree<Archivo*, string>(KeyN);

		//ARBOL PARA LAS EXTENSIONES
		auto KeyE = [](Archivo* extension) {return extension->get_extension(); };
		Extensions_tree = new AVLTree<Archivo*, string>(KeyE);

		//ARBOL PARA LAS FECHAS DE MODIFICACION
		auto KeyD = [](Archivo* date) {return date->get_fecha(); };
		Dates_tree = new AVLTree<Archivo*, string>(KeyD);

		//ARBOL PARA LOS TAMAÑOS
		auto KeyS = [](Archivo* size) {return size->get_tamaño(); };
		Sizes_tree = new AVLTree<Archivo*, long long>(KeyS);
	}

	/*FUNCIÓN PARA SCANEAR LA RUTA SOLICITADA POR EL USUARIO*/
	void scan(string path) {
		for (const auto & entry : recursive_directory_iterator(path)) {
			string ruta = entry.path().string();

			//ASIGNAMOS EL NOMBRE DEL ARCHIVO AL STRING NOMBRE
			string name = entry.path().filename().string();

			//ASIGNAMOS LA EXTENSION DEL ARCHIVO AL STRING EXTENSION
			string extension = entry.path().extension().string();

			//ASIGNAMOS LA FECHA DEL ARCHIVO AL STRING CREADO
			auto modificationdate = last_write_time(entry.path());
			time_t FM = decltype(modificationdate)::clock::to_time_t(modificationdate);
			string date = asctime(localtime(&FM));

			//ASIGNAMOS EL TAMAÑO DEL ARCHIVO AL LONG LONG CREADO
			long long size;
			if (is_directory(status(entry.path()))) {
				size = 0;
			}
			else {
				size = file_size(entry.path());
			}

			//CREAMOS EL ARCHIVO ENVIANDOLE LOS PARÁMETROS
			Archivo* archivo = new Archivo(name, extension, date, size, ruta);

			//AÑADIMOS LOS ARCHIVOS A SUS RESPECTIVOS ÁRBOLES
			Names_tree->insertar(archivo);
			Extensions_tree->insertar(archivo);
			Dates_tree->insertar(archivo);
			Sizes_tree->insertar(archivo);
		}
	}
	vector<Archivo*>Show_All() {
		vector<Archivo*> proc;
		Names_tree->inorder(proc);
		return proc;
	}

	vector<Archivo*>Buscar_Nombre(string n) {
		vector<Archivo*>vec;
		Names_tree->buscarNombre(n, vec); //BUSCAR POR NOMBRE  Y COPIAR AL VECTOR
		return vec; //RETORNAMOS EL VECTOR CON EL NODO ENCONTRADO
	}
	vector<Archivo*>Buscar_Extension(string e) {
		vector<Archivo*>vec;
		Extensions_tree->buscarExtension(e, vec);
		return vec;
	}
	vector<Archivo*>Buscar_Tamaño(long long t) {
		vector<Archivo*>vec;
		Sizes_tree->buscarTamaño(t, vec);
		return vec;
	}
	vector<Archivo*>Buscar_fecha(string f) {
		vector<Archivo*>vec;
		Dates_tree->buscarFecha(f, vec);
		return vec;
	}

	vector<Archivo*>FiltrarPorNombreStart(string name) {
		vector<Archivo*> proc;
		Names_tree->filtrarPorNombreStart(name, proc);
		return proc;
	}
	vector<Archivo*>FiltrarPorNombreEnd(string name) {
		vector<Archivo*> proc;
		Names_tree->filtrarPorNombreEnd(name, proc);
		return proc;
	}
	vector<Archivo*>FiltrarPorNombreContains(string name) {
		vector<Archivo*> proc;
		Names_tree->filtrarPorNombreContains(name, proc);
		return proc;
	}
	vector<Archivo*>FiltrarPorTamañoMayor(long long name) {
		vector<Archivo*> proc;
		Names_tree->FiltrarPorTamañoMayor(name, proc);
		return proc;
	}
	vector<Archivo*>FiltrarPorTamañoMenor(long long name) {
		vector<Archivo*> proc;
		Names_tree->FiltrarPorTamañoMenor(name, proc);
		return proc;
	}
	vector<Archivo*>FiltrarPorTamañoIgual(long long name) {
		vector<Archivo*> proc;
		Names_tree->FiltrarPorTamañoIgual(name, proc);
		return proc;
	}

};
