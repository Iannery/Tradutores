# Analisador Sintático

 - [X] Esta fase tem por objetivo a implementação do analisador sintático para a linguagem definida e a integração com a analisador léxico entregue na fase anterior.

 - [X] O gerador de analisador sintático Bison (implementação do yacc) será utilizado na realização desta fase. É obrigatório o uso do padrão (LR(1) canônico), não podendo ser utilizada qualquer outra opção que determine diferente construção do analisador pelo gerador.

 - [X] O analisador léxico e sintático devem estar integrados, ou seja, tokens reconhecidos pelo analisador léxico serão enviados para o sintático e o analisador sintático deve prover como saída a árvore sintática abstrata e a tabela de símbolos. Informações relevantes devem ser armazenadas na tabela de símbolos, tanto pelo analisador léxico quanto pelo analisador sintático (a decisão de quais entradas serão manipuladas em cada fase deve ser apresentada na documentação). Tanto a árvore sintática quanto a tabela de símbolos devem ser apresentadas na saída. Caso a entrada não pertença à linguagem, o analisador deve reportar erro detalhado, incluindo localização. A política de tratamento de erros exige que o seu tradutor não aborte após encontrar o primeiro erro, devendo apresentar o máximo de erros possível.

 - [X] Você deve prover o arquivo usado pelo gerador de analisador léxico, o arquivo em C produzido pelo gerador de analisador léxico, o arquivo usado como entrada para o gerador de analisador sintático, o arquivo em C produzido pelo gerador de analisador sintático e o(s) arquivo(s) que efetivamente implementam o seu programa (já que podem ser necessárias alterações no código). Devem ser providos também arquivos de teste (dois corretos e dois incorretos).

 - [X] A documentação escrita deve conter o que foi feito na fase anterior (atualizado), devendo também conter a descrição de estruturas de dados e funções por você projetadas. Em particular, o documento deve conter a descrição sucinta da construção da árvore sintática, bem como da estrutura e informações armazenadas na tabela de símbolos.
