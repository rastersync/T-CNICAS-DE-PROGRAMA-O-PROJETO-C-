//THIAGO

#ifndef ESTOQUE_H
#define ESTOQUE_H

#include<vector>
#include<algorithm>

#include"ProdutoQuilo.h"
#include"ProdutoUnidade.h"

class Estoque
{
public:
	vector<ProdutoQuilo>estoqueQuilo;
	vector<ProdutoUnidade>estoqueUnidade;

	Estoque();
	void inserirQuilo(ProdutoQuilo);
	void inserirUnidade(ProdutoUnidade);
	void ListaDeProdutosOrdenada();
	int pesquisarUnidade(string);//imprime o objeto encontrado e retorna a posição
	int pesquisarQuilo(string);
	void remover(string);
	void imprimirEstoque() const;
};

#endif // ESTOQUE_H
