//ARTENIO

#ifndef PRODUTOUNIDADE_H
#define PRODUTOUNIDADE_H

#include"Produto.h"

class ProdutoUnidade: public Produto
{
	int quantidadeProduto;
	int quantidadeEmEstoque;
	int prazoValidade; //dias
public:
	ProdutoUnidade();

	void inserirProdutoUnidade();//passa os valores

	string getNome() const;
	string getCodigo() const;
	float getPreco() const;
	int getQuantidadeEmEstoque() const;
	int getPrazoValidade() const;

	void imprimeUnidade() const;
};

#endif // PRODUTOUNIDADE_H
