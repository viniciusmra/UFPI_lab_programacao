1) Faça um programa que leia três palavras pelo teclado, e armazene cada palavra em uma string. Depois, concatene todas as strings lidas em uma única string. Ao final do programa imprima o resultado dessa concatenação. 

2) Uma rede social só permite 200 caracteres por publicação, pensando nisso faça um programa que seja capaz de identificar o tamanho de uma string recebida do usuário informando o comprimento da string. Por exemplo: “O texto recebido tem X caracteres e pode ser postado” ou “O texto recebido tem mais de 200 caracteres e não pode ser postado”. 

3)Faça um programa no qual possua uma função que recebe uma palavra, inverta e determine se é igual a original ou não(palíndromo). Nessa função o retorno deve ser true ou false e a função principal(main) deve receber essa informação e informar ao usuário se é ou não um palíndromo. 

4) Considerando s e t variáveis do tipo string, qual a diferença entre as expressões strcpy (s, t) e s = t ? 

Resposta: "s = t" não funciona por que como "string" em c é na verdade um array de caracteres, é impossível atribuir valor a um array dessa forma. Para que isso seja possível é necessário usar a função strcopy que copia todos os valores do array original (um a um) para o noivo array.

5) Um programador deseja comparar o conteúdo de duas strings e utilizou s > t, considerando s e t do tipo string. Responda com suas palavras se o programador está correto ou não, e caso não esteja o que ele pode fazer para solucionar o problema. Obs: Caso utilize uma função explique os valores de retorno possíveis.

Resposta: Não é correto pois esses operadores citados comparam apenas os endereços das strings. Para comparar o conteúdo é necessário usar a função "strcmp()". Ela retorna 0 se os conteúdos forem iguais, um número maior que zero se o primeiro caractere diferente na primeira string for maior que o da segunda (na tabela ASCII); um número menor que zero se o primeiro caractere diferente for menor (na tabela ASCII)

6)Faça um programa que identifique o nome correto e a senha correta de uma pessoa, esses dados foram definidos internamente no programa(pode ser qualquer nome e senha). O programa recebe um nome e uma senha do teclado e só autoriza o acesso se forem os dados esperados. 

7) Faça um programa que recebe duas Strings e verifique se a segunda faz parte da primeira. A saída deve ser “SUBSTRING” ou “NAO SUBSTRING”. Por exemplo: se as entradas forem "estudo e tecnologia" e "estudo", a saída deve ser “SUBSTRING”, pois "estudo” faz parte de “estudo e tecnologia”.
