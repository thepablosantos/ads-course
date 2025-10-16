# 🃏 Desafio Super Trunfo - Países - Nível Aventureiro  

Bem-vindo ao desafio **"Super Trunfo - Países"** — **Nível Aventureiro**!  
Neste nível, o jogo se torna interativo: agora você pode comparar **duas cartas de países** escolhendo qual atributo será usado para definir o vencedor.  

O projeto faz parte da disciplina **Introdução à Programação de Computadores**, do curso de **Análise e Desenvolvimento de Sistemas**, e tem como objetivo colocar em prática estruturas de decisão, menus com `switch` e comparações com `if-else`.

---

## 🧭 Contexto do Desafio

A empresa **MateCheck** contratou você para desenvolver o jogo **Super Trunfo - Países**.  
No **Nível Novato**, o foco era apenas cadastrar as cartas com `scanf` e exibir os dados com `printf`.  

Agora, no **Nível Aventureiro**, o sistema deve:
- Exibir **duas cartas pré-cadastradas** (por exemplo, Brasil e Portugal);
- Permitir ao jogador escolher um **atributo de comparação**;
- Determinar e exibir qual carta venceu.

---

## 🎯 Objetivo

Criar um programa em linguagem C que:
1. Mostre duas cartas com seus atributos;
2. Exiba um menu interativo com as opções de comparação;
3. Use `switch` para o menu e `if-else` aninhado para determinar o vencedor;
4. Siga regras específicas de vitória para cada atributo;
5. Exiba o resultado de forma clara no terminal.

---

## ⚙️ Funcionalidades Implementadas

✅ Exibição das duas cartas com atributos principais:  
- População  
- Área  
- PIB  
- Número de pontos turísticos  
- Densidade demográfica (calculada automaticamente)

✅ Menu interativo com opções de 1 a 5 para o jogador escolher o atributo de comparação.

✅ Lógica de comparação baseada em `if-else` aninhado:
- Atributos normais → vence o **maior valor**
- Densidade demográfica → vence o **menor valor**

✅ Exibição detalhada do resultado, incluindo:
- Nome dos países
- Atributo comparado
- Valores de cada carta
- Indicação clara do vencedor ou empate

✅ Tratamento de entrada inválida no `switch` com `default`.

---

## 🧮 Regras de Comparação

| Atributo | Tipo de Dado | Regra de Vitória |
|-----------|---------------|------------------|
| População | Inteiro | Maior valor vence |
| Área | Float | Maior valor vence |
| PIB | Float | Maior valor vence |
| Pontos Turísticos | Inteiro | Maior valor vence |
| Densidade Demográfica | Float | **Menor valor vence** |

---

## 🧠 Exemplo de Execução

=== SUPER TRUNFO: COMPARAÇÃO ENTRE CARTAS ===

Carta 1: Brasil
Carta 2: Portugal

Escolha o atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica

Digite sua opção: 3

=== RESULTADO DA COMPARAÇÃO ===
Atributo escolhido: PIB
Brasil: 2200.00 bilhões
Portugal: 250.00 bilhões
Vencedor: Brasil

Obrigado por jogar Super Trunfo!

---

## 💻 Estrutura do Código

O programa foi desenvolvido utilizando:
- **Linguagem C**
- **Compilador GCC**
- Estruturas de decisão (`if`, `else if`, `else`)
- Estrutura `switch` para o menu interativo
- Boas práticas de programação: identação, comentários e nomes de variáveis descritivos

---

## 🧩 Estrutura de Pastas

ads-course/
├── Introducao-a-Programacao-de-Computadores/
│   └── tema3/
│       ├── index.c
│       └── README.md

---

## 🧰 Como Executar o Projeto

### 🔧 Compilação
No terminal, dentro da pasta do projeto:
```bash
gcc index.c -o supertrunfo

 ▶️ Execução

 ./supertrunfo

 ---

 🧠 Licença

Este projeto é de uso educacional e pode ser utilizado livremente para fins de aprendizado e aprimoramento pessoal.