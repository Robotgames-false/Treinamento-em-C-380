# Algumas dicas aleatorias encontradas na pr+atica ou nos livros ou em qualquer fonte de estudo

## O tipo de uma váriavel define o seu tamanho em bytes e a forma como um valor deverá ser armazenado e recuperado - Treinamento em C, segunda edição

## O recurso mais óbivio que precisa ser gerenciado e usado de forma efectiva é a CPU. A dificuldade é que o próprio recurso que precisamos gerenciar é o que executa o código do próprio sistema operacional - Brian L.Stuart / Príncipios de sistemas operacionais

## Pesquisar sobre Código ASCII

## O sistema operaional Linux de Linus Trovalds, motivado pelo desejo de criar um sistema com capacidade de UNIX, mas sem restrições de licença

## Gerenciamento de processos

Instância de um programa em execução.

Escalonar processo: na maioria dos sistemas, o SO só é responsável por selecionar qual processo é atribuido a CPU em cada troca de contexto. Essa seleção é chamada de escalonamento.

## Threads (Processos leves)

O que acontece se permitirmos mais de um local de controle em um único espaço de mémoria
R: Criamos uma técnica de programa útil em que as aplicações podem ser escritas como multiplas entidades cooperantes.

## Escalonamento

Um dos aspectos mais estudados e analisados do gerenciamento de processos.

É o processo pelo qual o sistema operacional seleciona que processo é o próximo a obter a CPU.

## Exemplo

Primeiro a chegar, primeiro a ser servido.

Ou

O Job mais curto.

## Na prática

Tempo de vida de escalonamento:

Suponha que recebemos três jobs:
a
b
c
Com:
Ta = 20
Tb = 50
Tc = 10

Considere que eles cheguem na ordem a, b, c mas que cheguem tão próximos que os recebemos antes de podermos selecionar o primeiro a ser executado, em fila:

## Primeiro a chegar, primeiro a ser servido

```doc
Cabeça >>> a(20) >>> b(50) >>> c(10)
```

Os tempos de vida FCFS são:
Ta = 20
Tb = 20 + 50 = 70
Tc + 20 + 50 + 10 = 80

Somamos cada tempo total de cada Job e dividimos pela const 3.

Fórmula:
Ta + Tb + Tc /  const 3

E o tempo médio de processamento é:
T = 20 + 70 + 80 / 3 = 56,67

## O jobo mais curto

Agora vamos utilizar o SJF, executaremos os jobos na ordem c, a, b:

```doc
Cabeça >>> c(10) >>> a(20) >>> b(50)
```

Os tempos de vida pra SJF são:

Tc = 10
Ta = 10 + 20 = 30
Tb = 10 + 20 + 50 = 80

Somamos cada tempo total de cada Job e dividimos pela const 3.

Fórmula:
Tc + Ta + Tb /  const 3

Que resulta em um tempo de vida médio de processamento de:

T = 10 + 30 + 80 / 3 = 40,00

Economizamos 29% do tempo de vida médio do processamento SJF sobre FCFS