#pragma once

#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T, typename R = T>

class AVLTree {

	struct Nodo {

		T e;
		Nodo*l;
		Nodo*r;
		int h;

		Nodo(T e) : e(e), l(nullptr), r(nullptr), h(0) {}
		static int height(Nodo*n) {
			return n == nullptr ? -1 : n->h;
		}

		void updateH() {

			h = std::max(Nodo::height(l), Nodo::height(r)) + 1;
		}
	};

	Nodo*root;
	int length;
	std::function<R(T)>key;

	void destroy(Nodo*n) {

		if (n != nullptr) {

			destroy(n->l);
			destroy(n->r);
			delete n;
		}
	}

	void rotAB(Nodo*&n) {

		Nodo*aux = n->l;
		n->l = aux->r;
		n->updateH();
		aux->r = n;
		n = aux;
		n->updateH();

	}

	void rotBA(Nodo*&n) {

		Nodo*aux = n->r;
		n->r = aux->l;
		n->updateH();
		aux->l = n;
		n = aux;
		n->updateH();
	}

	void balance(Nodo*&n) {

		int delta = Nodo::height(n->l) - Nodo::height(n->r);

		if (delta < -1) {

			if (Nodo::height(n->r->l) > Nodo::height(n->r->r)) {
				rotAB(n->r);
			}

			rotBA(n);
		}
		else if (delta > 1) {

			if (Nodo::height(n->l->r) > Nodo::height(n->l->l)) {

				rotBA(n->l);
			}

			rotAB(n);
		}

	}

	void add(Nodo*&n, T e) {

		if (n == nullptr) {

			n = new Nodo(e);
			return;
		}
		else if (key(e) < key(n->e)) {
			add(n->l, e);
		}
		else {
			add(n->r, e);
		}

		balance(n);
		n->updateH();
	}




public:

	AVLTree(function<R(T)>key = [](T a) {return a; }) : root(nullptr), length(0), key(key) {}
	~AVLTree() { destroy(root); }

	int Height() {

		return Nodo::height(root);
	}

	int Size() {

		return length;
	}

	void Add(T e) {

		add(root, e);
		++length;
	}

	Nodo*Get_raiz() {

		return root;
	}

	vector<T>Preorden(vector<T>vec, Nodo*nodo) {

		if (nodo == NULL) {
			return vec;
		}

		vec.push_back(nodo->e);

		return Preorden(vec, nodo->l);
		return Preorden(vec, nodo->r);
	}

};

