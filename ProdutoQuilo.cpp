//WESLEY

#include "ProdutoQuilo.h"

ProdutoQuilo::ProdutoQuilo()
{
	this->pesoProduto = 0;
	this->pesoEmEstoque = 0;
}
//________________________________________________________________________________

void ProdutoQuilo::inserirProdutoQuilo() //inserir produtos no estoque
{
	cout << endl << "                   Produto Por Quilo:";
	cout << endl << "Produto:";
	cin.ignore();
	getline(cin, nome);
	cout << endl << "Codigo:";
	cin >> codigo;
	cout << endl << "Preco:";
	cin >> preco;
	cout << endl << "Peso:";
	cin >> pesoEmEstoque;
	cout << endl << "Validade:";
	cin >> prazoValidade;
}
//________________________________________________________________________________

string ProdutoQuilo::getNome() const
{
	return nome;
}
//________________________________________________________________________________

string ProdutoQuilo::getCodigo() const
{
	return codigo;
}
//________________________________________________________________________________

float ProdutoQuilo::getPreco() const
{
	return preco;
}
//________________________________________________________________________________

float ProdutoQuilo::getPesoEmEstoque() const
{
	return pesoEmEstoque;
}
//________________________________________________________________________________

int ProdutoQuilo::getPrazoValidade() const
{
	return prazoValidade;
}
//________________________________________________________________________________

void ProdutoQuilo::imprimeQuilo() const //esse imprimir é chamado pelo estoque
{
	cout << endl << "Produto: " << getNome()
		 << "\nCodigo: " << getCodigo()
		 << "\nPreco: " << getPreco()
		 << "\nPeso: " << getPesoEmEstoque()
		 << "\nValidade: " << getPrazoValidade() << " dias" << endl;
}
