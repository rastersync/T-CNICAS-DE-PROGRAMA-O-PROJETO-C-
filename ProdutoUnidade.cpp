//WESLEY

#include "ProdutoUnidade.h"

ProdutoUnidade::ProdutoUnidade()
{
	this->quantidadeProduto = 0;
	this->quantidadeEmEstoque = 0;
}
//________________________________________________________________________________

void ProdutoUnidade::inserirProdutoUnidade() //inserir produtos no estoque
{
	cout << endl << "                   Produto Por Unidade:";
	cout << endl << "Produto:";
	cin.ignore();
	getline(cin, nome);
	cout << endl << "Codigo:";
	cin >> codigo;
	cout << endl << "Preco:";
	cin >> preco;
	cout << endl << "Quantidade:";
	cin >> quantidadeEmEstoque;
	cout << endl << "Validade:";
	cin >> prazoValidade;

}
//________________________________________________________________________________

string ProdutoUnidade::getNome() const
{
	return nome;
}
//________________________________________________________________________________

string ProdutoUnidade::getCodigo() const
{
	return codigo;
}
//________________________________________________________________________________

float ProdutoUnidade::getPreco() const
{
	return preco;
}
//________________________________________________________________________________

int ProdutoUnidade::getQuantidadeEmEstoque() const
{
	return quantidadeEmEstoque;
}
//________________________________________________________________________________

int ProdutoUnidade::getPrazoValidade() const
{
	return prazoValidade;
}
//________________________________________________________________________________

//esse imprimir é chamado pelo estoque
void ProdutoUnidade::imprimeUnidade() const
{
	cout << endl << "Produto: " << getNome()
		 << "\nCodigo: " << getCodigo()
		 << "\nPreco: " << getPreco()
		 << "\nQuantidade: " << getQuantidadeEmEstoque()
		 << "\nValidade: " << getPrazoValidade() << " dias" << endl;
}

