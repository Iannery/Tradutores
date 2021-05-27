# Analisador Léxico

Esta fase tem por objetivo a implementação do analisador léxico para a linguagem a ser especificada pela docente. Para a implementação será usado o gerador de analisador léxico FLEX, com o qual você deve se familiarizar.

- [X] O analisador léxico deve receber como entrada um arquivo texto e deve ser capaz de gerar e apresentar a sequência de tokens referentes à linguagem sendo traduzida. Caso a entrada não pertença à linguagem, o analisador deve relatar, indicando localização (linha e coluna). Como política de tratamento de erro, o seu tradutor deve tentar relatar todos os erros, não podendo abortar a execução após o primeiro erro.

- [X] Você deve prover o arquivo usado pelo gerador de analisador léxico, o arquivo em C produzido pelo gerador e o(s) arquivo(s) que efetivamente implementam o seu programa (já que podem ser necessárias alterações no código). Devem ser providos também arquivos de teste: pelo menos dois testes para os quais a entrada é correta e pelo menos dois testes para os quais a entrada é incorreta.

- [X] A documentação escrita deve ser feita na forma de artigo, apresentando:

  - a motivação para a implementação do tradutor, bem como da nova primitiva da linguagem;
  - descrição da análise léxica, incluindo descrição sucinta das estruturas de dados utilizadas e funções que tenham sido alteradas/introduzidas por você no código produzido pelo gerador de analisador léxico;
  - descrição dos arquivos de teste, informando quais contém código correto (relativo ao léxico) e quais contém código incorreto (relativo ao léxico, sendo necessário apontar especificamente onde tais erros se encontram).
  - instruções para compilação e execução do seu programa.

 - [X] O anexo (que não conta para o número máximo de páginas) deve conter a gramática da linguagem.
