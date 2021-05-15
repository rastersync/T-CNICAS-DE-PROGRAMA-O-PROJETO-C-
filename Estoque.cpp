//THIAGO & WILTON & ARTENIO

#include "Estoque.h"
#include "string.h"
#include <stdio.h>

using namespace std;
FILE *arquivo_barraca;

Estoque::Estoque()
{
}
//________________________________________________________________________________

void Estoque::inserirQuilo(ProdutoQuilo pq)
{
	arquivo_barraca = fopen("Barraca União.txt", "at");
	//inserir produto quilo
	pq.inserirProdutoQuilo();
	estoqueQuilo.push_back(pq);
	fputs(pq.getNome().c_str(), arquivo_barraca);
	fputs(pq.getCodigo().c_str(), arquivo_barraca);
	//fputs(pq.getPreco(), arquivo_barraca);
	//fputs(pq.pesoProduto.c_str, arquivo_barraca);
	if(arquivo_barraca == NULL)
		cout << "Não foi possivel abrir o arquivo;";
	fclose(arquivo_barraca);
}
//________________________________________________________________________________

void Estoque::inserirUnidade(ProdutoUnidade pu)
{
	//inserir produto quilo
	pu.inserirProdutoUnidade();
	estoqueUnidade.push_back(pu);
}
//________________________________________________________________________________

int Estoque::pesquisarUnidade(string info)
{
	int posicao = 0;
	for(int  i = 0; i < estoqueUnidade.size(); i++)
	{
		if(estoqueUnidade[i].getNome() == info || estoqueUnidade[i].getCodigo() == info)
		{
			estoqueUnidade[i].imprimeUnidade();
			cout << endl << "Encontrado na posição:" << posicao << endl << endl;
			return posicao;
		}
		else
		{
			posicao++;
			if(posicao == estoqueUnidade.size())
			{
				cout << endl << "Não encontrado no estoque produto por unidade!" << endl << endl;
				return -1;
			}
		}
	}
	if(estoqueQuilo.size() == 0) cout << endl << "Estoque vazio!" << endl << endl;
	return -1;
}
//________________________________________________________________________________

int Estoque::pesquisarQuilo(string info)
{
	int posicao = 0;

	for(int  i = 0; i < estoqueQuilo.size(); i++)
	{
		if(estoqueQuilo[i].getNome() == info || estoqueQuilo[i].getCodigo() == info)
		{
			estoqueQuilo[i].imprimeQuilo();
			cout << endl << "Encontrado na posição:" << posicao << endl << endl;
			return posicao;
		}
		else
		{
			posicao++;
			if(posicao == estoqueQuilo.size())
			{
				cout << endl << "Não encontrado no estoque produto por quilo!" << endl << endl;
				return -1;
			}
		}
	}
	if(estoqueQuilo.size() == 0) cout << endl << "Estoque vazio!" << endl << endl;
}
//________________________________________________________________________________

void Estoque::remover(string info)
{
	int i;

	i = pesquisarQuilo(info);
	if(i != -1)
		estoqueQuilo.erase(estoqueQuilo.begin() + i);
	else
	{
		i = pesquisarUnidade(info);
		if(i != -1)
		{
			estoqueUnidade.erase(estoqueUnidade.begin() + i);
		}
	}
	if(i == -1)
		cout << "Não foi possivel remover";
}
//________________________________________________________________________________

void Estoque::ListaDeProdutosOrdenada()
{
	vector<string> aux(estoqueQuilo.size());
	for(unsigned i(0); i < estoqueQuilo.size(); i++)
	{
		aux[i] = estoqueQuilo[i].getNome();
	}
	sort(aux.begin(), aux.end());
	for(unsigned i(0); i < aux.size(); i++)
	{
		for(unsigned j(0); j < estoqueQuilo.size(); j++)
		{
			if(aux[i] == estoqueQuilo[j].getNome())
			{
				estoqueQuilo[j].imprimeQuilo();
				cout << endl;
			}
		}
	}
}
//________________________________________________________________________________

void Estoque::imprimirEstoque() const
{
	if(!estoqueQuilo.size() == 0) //Só imprime a lista se o estoque por quilo não estiver vazio
	{
		cout << "                 Lista de produtos por Kg:" << endl;
		for(unsigned i(0); i < estoqueQuilo.size(); i++)
		{
			estoqueQuilo[i].imprimeQuilo();
			cout << endl;
		}
	}
	if(!estoqueUnidade.size() == 0) //Só imprime a lista se o estoque por unidade não estiver vazio
	{
		cout << "                 Lista de produtos por Unidade:" << endl;
		for(unsigned i(0); i < estoqueUnidade.size(); i++)
		{
			estoqueUnidade[i].imprimeUnidade();
			cout << endl;
		}
	}
}
