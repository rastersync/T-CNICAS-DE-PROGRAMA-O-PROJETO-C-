# T-CNICAS-DE-PROGRAMA-O-PROJETO-C-
Projeto: Controle de Estoque de uma Empresa (pode ser de uma Fábrica, Supermercado, Loja  ou qualquer empresa que venda dois produtos diferentes) 

- Inicialmente, escolha o nome da empresa, qual o perfil de atuação dessa empresa e os nomes  dos produtos que ela irá vender. Os produtos poderão ser vendidos por quilo ou por unidade (pode ser definido outros tipos de produto desde que atendam os requisitos abaixo). 
- 
- Criar a classe Produto com os atributos nome, código e preço. - 
- 
- Criar uma classe chamada ProdutoQuilo, derivada da classe Produto, que irá armazenar os  produtos que são vendidos por quilo. Esta classe deverá ter como atributo o peso do produto, a  quantidade em quilos existente no estoque, e outras características como prazo de validade,  regras de manipulação e regras de transporte (podem ser colocados os atributos que julgar  necessário). - 
- 
- Criar outra classe derivada da classe Produto, chamada ProdutoUnidade, que irá armazenar os  produtos que são vendidos por unidade, que deverá ter como atributos a quantidade de  unidades desse produto, a validade do produto, regras de manipulação e de transporte (podem  ser colocados os atributos que julgar necessário). - 
- 
- Criar uma classe Estoque, responsável por armazenar os produtos da empresa. Esta classe deve  possuir um vetor criado dinamicamente (ou usar vectorse achar mais interessante) e armazenar  os produtos que são vendidos por unidade. Deve possuir também um outro vetor (ou vector)  para armazenar os produtos vendidos por quilo. Essa classe deverá ter métodos para: 
-   ✓ Ordenar os dados do vetor (o método deve ordenar os produtos por nome e em ordem  crescente). 
-   ✓ Pesquisar por nome ou código do produto. 
-   ✓ Inserir um novo produto no final do vetor. 
-   ✓ Retirar um produto da lista. 
-   ✓ Salvar/Recuperar todos os dados dos produtos em arquivo. 
-   ✓ Efetuar venda de um produto (este método deve receber o código do produto e a  respectiva quantidade, atualizar a quantidade no estoque e retornar os dados do  produto) - 
-   
-   Na main, criar uma interface que permita ao usuário escolher as opções de inserir, ordenar,  remover, salvar e recuperar os produtos. Também deve ser possível alterar os dados do produto. - 
-   
-   Simule a venda de diversos produtos em um pedido e forneça o valor total da compra. O  estoque deve ser atualizado (retirar do estoque a quantidade de produtos comprados). Não  esqueça de verificar no estoque se tem a quantidade suficiente para a venda, caso contrário, a  venda desse produto não será realizada.
