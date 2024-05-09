# Tipos de Dados em C: Um Guia Completo

A linguagem C possui uma variedade de tipos de dados para armazenar informações de diferentes naturezas, como números inteiros, números de ponto flutuante, caracteres, e até mesmo tipos definidos pelo usuário. Conhecer e entender os tipos de dados em C é essencial para escrever código eficiente e eficaz. Vamos explorar os principais tipos de dados, suas propriedades e usos comuns.

🌱 Tipos de Dados Básicos
Em C, os tipos de dados básicos são os blocos de construção fundamentais para o armazenamento de dados e operações aritméticas. Vamos abordar os mais comuns:

🔢 Tipos Inteiros
Os tipos inteiros são usados para armazenar números inteiros, ou seja, sem parte decimal. Em C, temos diferentes tipos inteiros com variações em tamanho e capacidade:

int: O tipo inteiro padrão. Geralmente, tem 32 bits, mas isso pode variar dependendo do sistema.
short: Menor que int. Comumente 16 bits.
long: Maior que int. Normalmente 32 ou 64 bits.
long long: Maior que long. Frequentemente 64 bits.
Além disso, você pode usar o modificador unsigned para armazenar apenas valores positivos, o que dobra a capacidade máxima. Por exemplo, um unsigned int só pode ter valores não negativos, mas sua capacidade máxima é o dobro de um int.

## 💧 Tipos de Ponto Flutuante

Para valores com casas decimais ou frações, usamos tipos de ponto flutuante. Os tipos principais são:

float: O tipo de ponto flutuante básico. Geralmente, tem 32 bits de precisão.
double: Tem mais precisão do que float, normalmente 64 bits.
long double: O tipo mais preciso, com 80 ou mais bits de precisão, dependendo do sistema.

## 🅰️ Tipo de Caracter

Para armazenar caracteres individuais, usamos o tipo char. Esse tipo pode ser interpretado como um número inteiro (representando valores de código ASCII) ou como um caractere específico.

## 🔧 Outros Modificadores

Além de unsigned, há outros modificadores que afetam como os tipos básicos são armazenados:

signed: A versão padrão de um tipo que pode ter valores positivos e negativos.
unsigned: Apenas valores não negativos.
short e long: Ajustam o tamanho do tipo.

## 🏗️ Tipos de Dados Compostos

Além dos tipos básicos, C permite criar tipos compostos para armazenar estruturas mais complexas de dados. Aqui estão alguns exemplos:

## 🗂️ Arrays

Um array é uma coleção de elementos do mesmo tipo, indexada por posição. Você pode criar arrays para armazenar listas de valores, strings (arrays de char), entre outros. Por exemplo:

```c
int numbers[5] = {1, 2, 3, 4, 5};  // Array de cinco elementos inteiros
```

## 📦 Estruturas (struct)

Estruturas permitem agrupar vários tipos de dados sob um único nome. São úteis para criar objetos mais complexos. Por exemplo:

```c
struct Point {
    int x;
    int y;
};

struct Point p = {10, 20};  // Criando uma estrutura do tipo 'Point'
```

## 🔄 Uniões (union)

As uniões são semelhantes às estruturas, mas todos os membros compartilham o mesmo espaço de memória. Isso significa que uma union só pode conter um membro ativo de cada vez.

```c
union Data {
    int i;
    float f;
};

union Data d;
d.i = 10;  // Agora, d.f não é mais confiável, pois 'i' está ativo
```

## 🧩 Enumerações (enum)

Enumerações são uma maneira de definir conjuntos de valores inteiros com nomes simbólicos. São úteis para criar códigos mais legíveis e autodescritivos.

```c
enum Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
```

## 📝 Conclusão

Entender os tipos de dados em C é fundamental para escrever código robusto e eficiente. Desde tipos básicos como int, float, e char, até tipos compostos como struct, union, e enum, cada tipo tem seu propósito e aplicação. Ao escolher o tipo certo para o seu uso, você pode melhorar a eficiência do código e evitar bugs causados por má interpretação de dados.
