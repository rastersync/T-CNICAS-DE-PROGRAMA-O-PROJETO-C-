//WESLEY

#ifndef PRODUTOQUILO_H
#define PRODUTOQUILO_H

#include"Produto.h"

class ProdutoQuilo: public Produto
{
	float pesoProduto;
	float pesoEmEstoque;
	int prazoValidade;//dias
public:
	ProdutoQuilo();

	void inserirProdutoQuilo();//passa os valores, o objeto é para conferir se o codigo é repetido

	string getNome() const;
	string getCodigo() const;
	float getPreco() const;
	float getPesoEmEstoque() const;
	int getPrazoValidade() const;

	void imprimeQuilo() const;
};

#endif // PRODUTOQUILO_H
