int principal(int a, set aba){ // erro semântico: programa não apresenta função "main"
  int est;
  float b@et; // erro léxico: caractere @ não é reconhecido na linguagem
  set ki%k; // erro léxico: caractere % não é reconhecido na linguagem
  elem jot;
  est = est + bet + 3 + 1 - 2 + 5 - est;
  est = est - bet;
  est = est * bet;
  est = est / bet;
  value = est + 2.1; // erro semântico: variável "value" é utilizada antes de ser declarada; testa conversão de tipos.

  int value;
  

    if(!var1 && !va#r2 || !var3 && var4){ // erro léxico: caractere # não é reconhecido na linguagem

    }

    if(!is_set(x) && is_set(x) || meuSet < 2 && meuSet == 5 || meuSet > 2){
    	int atro;
    	atro = 5;
    	
        add(atro in meuSet);
    }
    else
        add(6 in meuSet);
        
        
    atro = 10; // erro semântico: utilização de variável declarada em escopo não acessível

    for(j = 1; j <= 10; j = j++1){ // erro sintático: operador ++ não existe na linguagem
      varlis = poka * 3;
      for(h = j; h >= 50; h = h+1){
        poka = varlis - 10;
        for(j=10; j > 3 ;j=j-1){
          varlis = varlis / 2;
          if(poka > 20) poka = aba - 5;  // erro semântico: não é permitido somar uma variável do tipo set com uma do tipo int
            else if(poka < 20) poka = poka - 2;
             else if (poka !== 12) poka = poka + 1; //erro sintático: operador !== não existe na linguagem
        }
      }
    }

    forall(abres in mySet) if(abres > 10) abres = abres + 1;
}

set tryTest(set testableSet) {
  read(input);
  add(input in testableSet);
  remove(1 in testableSet);
  write("removed");
  remove(5 in testableSet);
  writeln("removed one more time");
  remove(9 in testableSet);
  writeln('K');
  tryTest(testableSet); // ERRO SEMÂNTICO, CHAMADA RECURSIVA DE FUNÇÃO NÃO DECLARADA
}