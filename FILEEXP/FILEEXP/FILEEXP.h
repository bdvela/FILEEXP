#pragma once
#include <functional>
#include <filesystem>
#include "Archivo.h"
#include "AVLTree.h"
#include <vector>

using namespace std::experimental::filesystem;

class FILEEXP {
	AVLTree<Archivo*, string>*Names_tree;
	AVLTree<Archivo*, string>*Extensions_tree;
	AVLTree<Archivo*, string>*Dates_tree;
	AVLTree<Archivo*, long long>*Sizes_tree;
public:
	FILEEXP() {
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
			//ASIGNAMOS EL NOMBRE DEL ARCHIVO AL STRING NOMBRE
			string name = entry.path().filename().string();
			//ASIGNAMOS LA EXTENSION DEL ARCHIVO AL STRING EXTENSION
			string extension = entry.path().extension().string();
			//ASIGNAMOS LA FECHA DEL ARCHIVO AL STRING CREADO
			auto modificationdate = last_write_time(entry.path());
			time_t FM = decltype(modificationdate)::clock::to_time_t(modificationdate);
			string date = asctime(localtime(&FM));
			//ASIGNAMOS EL TAMAÑO DEL ARCHIVO AL LONG LONG CREADO
			long long size = -1;
			if (is_directory(status(entry.path()))) {
				size = 0;
			}
			else {
				size = file_size(entry.path());
			}
			//CREAMOS EL ARCHIVO ENVIANDOLE LOS PARÁMETROS
			Archivo* archivo = new Archivo(name, extension, date, size, path);
			//AÑADIMOS LOS ARCHIVOS A SUS RESPECTIVOS ÁRBOLES
			Names_tree->Add(archivo);
			Extensions_tree->Add(archivo);
			Dates_tree->Add(archivo);
			Sizes_tree->Add(archivo);
		}
	}


};