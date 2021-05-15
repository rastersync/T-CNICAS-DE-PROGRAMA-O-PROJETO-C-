//WILTON & THIAGO

#include <iostream>
#include<vector>
#include <locale.h>

using namespace std;

#include "Estoque.cpp"
#include "Produto.cpp"
#include "ProdutoQuilo.cpp"
#include "ProdutoUnidade.cpp"

int main()
{
	setlocale(LC_ALL, "");
	int opc;
	string informacao;
	Estoque d;
	ProdutoQuilo quilo;
	ProdutoUnidade unidade;

	do
	{
		cout << "O que você deseja fazer?" << endl
		   	 << " 1 - inserir produto por quilo. " << endl
		   	 << " 2 - inserir produto por unidade. " << endl
   	 	 	 << " 3 - imprimir o estoque. " << endl
			 << " 4 - pesquisar produto por quilo. " << endl
			 << " 5 - pesquisar produto por unidade. " << endl
			 << " 6 - remover produto. " << endl
			 << " 7 - exit. " << endl
			 << "Sua opção: ";
		cin >> opc;

		switch(opc)
		{
		case 1:
			d.inserirQuilo(quilo);
			break;
		case 2:
			d.inserirUnidade(unidade);
			break;
		case 3:
			d.imprimirEstoque();
			break;
		case 4:
			cout << "digite o nome ou codigo do produto: ";
			cin >> informacao;
			d.pesquisarQuilo(informacao);
			break;
		case 5:
			cout << "digite o nome ou codigo do produto: ";
			cin >> informacao;
			d.pesquisarUnidade(informacao);
			break;
		case 6:
			cout << "digite o nome ou codigo do produto que quer remover: ";
			cin >> informacao;
			d.remover(informacao);
			break;
		default:
			cout << "operação inválida, tente novamente!" << endl;
			break;
		}
	}
	while(opc != 7);

}
