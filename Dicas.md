# Algumas dicas aleatorias encontradas na pr+atica ou nos livros ou em qualquer fonte de estudo

O tipo de uma váriavel define o seu tamanho em bytes e a forma como um valor deverá ser armazenado e recuperado - Treinamento em C, segunda edição

 O recurso mais óbivio que precisa ser gerenciado e usado de forma efectiva é a CPU. A dificuldade é que o próprio recurso que precisamos gerenciar é o que executa o código do próprio sistema operacional - Brian L.Stuart / Príncipios de sistemas operacionais

Pesquisar sobre Código ASCII

O sistema operaional Linux de Linus Trovalds, motivado pelo desejo de criar um sistema com capacidade de UNIX, mas sem restrições de licença

## Gerenciamento de processos

Instância de um programa em execução.

Escalonar processo: na maioria dos sistemas, o SO só é responsável por selecionar qual processo é atribuido a CPU em cada troca de contexto. Essa seleção é chamada de escalonamento.

## Threads (Processos leves)

O que acontece se permitirmos mais de um local de controle em um único espaço de mémoria
R: Criamos uma técnica de programa útil em que as aplicações podem ser escritas como multiplas entidades cooperantes.

***Devs desses sistemas colocaram em prática as técnicas-padrão existentes.***

## Formatação dos códigos-fonte

Vários operadores de linguagem C são sequências de múltiplos caracteres do conjunto de caracteres de ASCII.
***Octal:: 0123***
***Decimal:: 0x123***

Um sistema operacional é um conjunto de um ou mais programas que fornece um conjunto de serviços, o qual cria uma interface entre aplicações e o hardware do computador e que aloca e gerencia recuros compartilhados entre múltiplos processos.

## Bootstrapping

1 - Boot ou Boot Loader inicialmente carregado por um painel frontal.
2 - Computador de console.
3 - Carregamento por código CD-ROM.
4 - Independente de como o sistema está estruturado, ele deve ser carregado na memória por algum tipo de carregador boot.

## Guia Introdução aos sistemas operacionais

1 - O que é um SO
2 - Áreas de responsabilidade de SO
3 - A História dos SO
4 - Técnicas de organização dos SO
5- Bootstrapping
6 - Chamadas do sistema

- Estruturas e inicialização
- Gerenciamento de processos
- Gerenciamento de memória
- Gerenciamento de dispositivos E/S
- Sistemas de arquivos
- Segurança
- Sistemas distribuidos

## Chamadas do sistema UNIX

fork()
exit()
open()
read()
write()
