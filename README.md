# Trabalho Tradutores



Trabalho feito por Ian Nery Bandeira para a disciplina de Tradutores (que será chamada Compiladores em um futuro não tão distante), ministrada pela professora Claudia Nalon na Universidade de Brasília no semestre de 2020/2.



- [X] Os tipos de dados da linguagem são int, float, elem e set. Os tipos int e float são simples. A declaração de uma variável do tipo set segue o padrão em C, sem tipo associado aos seus elementos. A declaração de uma variável do tipo elem é polimórfica. Como restrição em relação à sintaxe usual de C, a declaração de variáveis não poderá ser seguida de atribuição.

- [X] A linguagem contém constantes numéricas (para inteiros e reais) e a constante EMPTY (para conjuntos); constantes para char e string são usadas tão somente para impressão.

- [X] As operações aritméticas são adição, subtração, multiplicação e divisão, com regras de precedência e semântica usuais.

- [X] As operações lógicas são negação, disjunção e conjunção, com regras de precedência e semântica usuais. Não há tipo booleano na linguagem: valores diferentes de zero e EMPTY são tratados como verdadeiro.

- [X] As operações relacionais são as usuais da aritmética: menor, menor ou igual, maior, maior ou igual, igual e diferente, com regras de precedência e semâtnica usuais.

- [X] Conversões implícitas entre expressões aritméticas devem ser tratadas de forma usual, permitindo tanto a ampliação (no caso de cálculo e comparação aritméticos, passagem de parâmetro por cópia e retorno de função) quanto redução de tipo (no caso de atribuição, passagem de parâmetros por cópia e retorno de função). Não há conversão de tipo entre conjuntos e os demais tipos (ou vice-versa). Se for possível identificar a tentativa de realização de operações entre operandos que não admitem conversão entre si, o tradutor deve emitir aviso de que a operação é indefinida. A conversão de float para int se dá pelo descarte da parte decimal (não pelo arrendondamento).

- [X] Um programa consiste de uma sequência de declarações de variáveis e funções, onde cada função declarada é seguida de sua definição (ou seja, um bloco de comandos, contendo declarações de variáveis e blocos de comandos). Toda função tem um tipo de retorno declarado que pode ser quaisquer um dos tipos primitivos da nova linguagem (int, float, elem, set).

- [X] Necessariamente, o programa deve conter uma função "main".

- [ ] As regras de escopo são as mesmas de C. Uma variável ou função só podem ser usadas depois de declaradas e em seus respectivos escopos.

- [ ] O comando de atribuição tem a sintaxe usual. No caso da variável ser inteira ou real, a semântica é a usual. Para conjuntos, ver abaixo. Para variáveis do tipo elem, a semântica depende do tipo da expressão sendo atribuída.

- [X] Os comandos da linguagem para controle de fluxo são restritos aos seguintes: condicionais (if, if-else), iteração (for), chamada de função e retorno. Todos os comandos têm a semântica usual para o fragmento da linguagem C.

- [X] Os comandos da linguagem para entrada e saída são: read, write, writeln. O parâmetro do comando de leitura (read) é uma variável de tipo simples; o parâmetro do comando de escrita (write, writeln) é uma expressão de tipo simples ou uma constante. O comando writeln é equivalente a write seguido da escrita de quebra de linha.

- [ ] Na chamada de funções, tipos inteiros e reais são passados por cópia; o tipo conjunto é passado por referência.

- [X] Toda função retorna uma expressão do tipo de retorno declarado.

- [ ] As operações sobre conjuntos são descritas a seguir:

  - atribuição: a atribuição é feita por referência.

  - pertinência: o operador infixo in tem dois parâmetros, uma expressão (representando o elemento) e um conjunto; o resultado da operação é verdadeiro (ou seja, diferente de zero) se o elemento (ou seu equivalente implicitamente convertido) pertencer ao conjunto.

  - tipagem: o operador is_set tem um único parâmetro que é uma variável polimórfica; retorna verdadeiro (ou seja, diferente de zero) se o tipo do elemento for set.

  - inclusão de elemento a um conjunto: a operação primitiva add tem um parâmetro, uma expressão de pertinência. Se o resultado da expressão de pertinência for verdadeiro, o conjunto na expressão não é alterado; caso contrário, o valor da expressão (ou seu equivalente implicitamente convertido) é incluído no conjunto.

  - remoção de elemento de um conjunto: a operação primitiva remove tem um parâmetro, uma expressão de pertinência. Se o resultado da expressão de pertinência for falso, o conjunto na expressão não é alterado; caso contrario, o valor da expressão (ou seu equivalente implicitamente convertido) é removido do conjunto.

  - seleção: a operação primitiva exists tem dois parâmetros, uma variável e um conjunto; caso o conjunto não seja vazio, a variável assume o valor de um elemento qualquer do conjunto; caso o conjunto seja vazio, o comportamento é indefinido.

  - iteração: o comando forall tem duas partes, uma expressão de pertinência e um comando ou bloco de comandos; o comando ou bloco de comandos executa após iteração por todos os elementos pertinentes ao conjunto.

Exemplo 1: função na nova linguagem (calcula subset_sum):

```cpp
set subsum(set s, int target, int cur_sum, set ans) {
    if(target == cur_sum) return ans;
    else if (s == EMPTY) return EMPTY;
    else {
       int el;
       remove((exists (el in s)) in s);
       if(subsum(s, target, cur_sum, ans)) return ans;
       cur_sum += el;
       add(el in ans);
       if(subsum(s, target, cur_sum, ans)) return ans;
       add(el in s);
       remove (el in s);
       return EMPTY;
    }
}
```

Exemplo 2: programa na nova linguagem (calcula subset_sum).

```cpp
int main() {
    set s;
    s = EMPTY;

    add(1 in s);
    add(2 in s);
    add(5 in s);
    add(8 in s);

// Alternativamente: add(1 in add(2 in add(5 in add(8 in s))));

    set possibleSums;
    possibleSums = EMPTY;
    int x;
    
    forall (x in s) {
        set sumsWithX;   
        sumsWithX = EMPTY;
        int val;
        forall (val in possibleSums) add((x + val) in sumsWithX);
        forall (val in sumsWithX) add (val in possibleSums);
        if (13 in possibleSums) writeln('y'); else writeln('n');
    }
}
```

Exemplo 3: outro programa, com chamada de funções e usando variáveis polimórficas

```cpp
set add_int(set s) {
    return add(2 in add(1 in s));
    // {1,2}
}

set add_float(set s) {
    return add(5.4 in add(1.5 in s));
}

set add_set(set s) {
    set newset;
    newset = EMPTY;
    return add(add_int(newset) in s);
    //{{1,2}}
}

int main() {
    set s;
    s = EMPTY;

    add_set(s);

    // s = {{1,2}}
    elem el;
    
    exists(el in s);
    // el is the set {1,2}
    
    add_float(s);
    // {1.5,5.4,{1,2}}

    exists(el in s);
    // el can be any of 1.5, 5.4 or {1,2}
   
    add_int(s);
    // add_int always returns {1,2} thus the set remains unchanged
    // {1.5,5.4,{1,2}}

    int acc; float accf;
    acc = 0; accf = 0;
    elem x;
    
    forall(x in s) {
        acc = acc + x; // when x is {1,2} the behaviour is undefined; this may raise an exception at runtime
    accf = accf + x;
    }

    // this fixes the above
    
    forall(x in s) {
        if (!is_set(x)) {
           acc = acc + x;
       accf = accf + x;
    }   
    }

   // acc is 6; accf is 6.9

    return 0;
}
```

Exemplo 4: Os números naturais representados como conjuntos


```cpp
set copy_set(set s) {
    set ans;
    ans = EMPTY;
    forall(x in s) add(x in ans);
    return ans;
}

set succ(set n) {
    set next;
    next = copy_set(n);
    return add(n in next);
}

int main() {
    set zero; set one; set two; set three;
   
    zero = EMPTY;
    one = succ(zero);
    two = succ(one);
    three = succ(two);
}
```
