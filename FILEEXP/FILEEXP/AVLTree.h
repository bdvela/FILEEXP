#pragma once
#include <functional>
using namespace std;

template <typename T, typename R = T>

class AVLTree {
private:
	struct Node {
		T elem;
		struct Node* left;
		struct Node* right;
		int height; //altura
		Node() {
			left = nullptr;
			right = nullptr;
			height = 0;
			this->elem = elem;
		}
	};
	Node* raiz;
	std::function<R(T)>key;
	void(*procesar)(T);
	//---
	int max(int a, int b) {
		return (a > b ? a : b);
	}
	//---
	int _altura(Node* nodo) {
		if (nodo == nullptr) return -1;
		return nodo->height;
	}
	//---
	Node* _insertar(Node*& nodo, T e) {
		if (nodo == nullptr) {
			nodo = new Node();
			nodo->elem = e;
		}
		else if (e < nodo->elem) {
			_insertar(nodo->left, e);
		}
		else if (e > nodo->elem) {
			_insertar(nodo->right, e);
		}
		//===============================================================
		//INI_DE_BALANCEO
		int hi = _altura(nodo->left);
		int hd = _altura(nodo->right);
		int d = hd - hi;
		if (d > 1) {//pesado a la derecha
			int hni = _altura(nodo->right->left);
			int hnd = _altura(nodo->right->right);
			if (hni > hnd) { //zig zag derecha izquierda
				_rotarDer(nodo->right->left, nodo->right, nodo->right);
			}
			_rotarIzq(nodo, nodo->right, nodo);
		}
		else if (d < -1) { //pesado a la izquierda
			int hni = _altura(nodo->left->left);
			int hnd = _altura(nodo->left->right);
			if (hnd > hni) {//zig zag derecha izquierda
				_rotarIzq(nodo->left, nodo->left->right, nodo->left);
			}
			_rotarDer(nodo->left, nodo, nodo);
		}
		//FIN_DE_BALANCEO
		//===============================================================
		hi = _altura(nodo->left);
		hd = _altura(nodo->right);
		nodo->height = 1 + ((hi > hd) ? hi : hd);
		return nodo;
	}
	//---
	//p is paren of x
	void _rotarDer(Node*& x, Node* y, Node*& p) {
		p = x;
		y->left = x->right;
		p->right = y;
	}
	//---
	//p is paren of x
	void _rotarIzq(Node* x, Node*& y, Node*& p) {
		p = y;
		x->right = y->left;
		p->left = x;
	}
	//---
	void inOrder(Node* node, vector<T>& proc) {
		if (node != nullptr) {
			inOrder(node->left, proc);
			proc.push_back(node->elem);
			inOrder(node->right, proc);
		}
	}

	void busqueda(Node* node, R parametro, vector<T>& vec) {
		if (node == nullptr) {
			return;
		}
		else if (parametro == key(node->elem)) {
			vec.push_back(node->elem);
			busqueda(node->left, parametro, vec);
			busqueda(node->right, parametro, vec);
		}
		else if (parametro < key(node->elem)) {
			busqueda(node->left, parametro, vec);
		}
		else {
			busqueda(node->right, parametro, vec);
		}
	}
	void busqueda_primeraletra(Node* node, R parametro, vector<T>&vec) {
		if (node == nullptr) {
			return;
		}
		else if (parametro[0] == key(node->elem)[0]) {
			vec.push_back(node->elem);
			busqueda_primeraletra(node->left, val, v);
			busqueda_primeraletra(node->right, val, v);
		}
		else if (parametro[0] < key(node->elem)[0]) {
			busqueda_primeraletra(node->left, val, v);
		}
		else {
			busqueda_primeraletra(node->right, val, v);
		}
	}
	void busqueda_ultimaletra(Node* node, R parametro, vector<T>&vec) {
		//PENDIENTE
	}
public:
	AVLTree(function<R(T)>key = [](T a) {return a; }) : raiz(nullptr), key(key) {}
	//----
	void insertar(T e) {
		_insertar(raiz, e);
	}
	//---
	void inorder(vector<T> &proc) {
		inOrder(raiz, proc);
	}
	void busqueda(R parametro, vector<T>& v) {
		busqueda(raiz, parametro, v);
	}

};