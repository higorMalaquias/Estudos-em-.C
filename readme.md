# Estudos em C

Repositório para estudos de desenvolvimento em C, com foco em boas práticas, organização de código e exercícios práticos.

## Objetivos
- Aprender a estruturar projetos em C.
- Praticar compilação, depuração e testes simples.
- Aplicar padrões de código e ferramentas (lint, format).

## Pré-requisitos
- GCC (MinGW) ou Microsoft Visual Studio
- VS Code (recomendado) com extensão C/C++
- Conhecimentos básicos de terminal no Windows

## Como compilar (exemplo com MinGW/GCC)
1. Abra o terminal no diretório do projeto.
2. Compile:
   gcc -Wall -Wextra -Werror -pedantic -std=c11 src/arquivo.c -o bin/saida.exe
3. Execute:
   .\bin\saida.exe

Ajuste os nomes de arquivo conforme a estrutura do projeto.

## Estrutura sugerida
- src/      — código-fonte
- include/  — cabeçalhos (.h)
- bin/      — binários compilados
- tests/    — testes unitários
- docs/     — documentação e anotações

## Convenções de código
- Padrão: C11
- Warnings ativados (-Wall -Wextra -Werror)
- Funções curtas e bem nomeadas
- Comentários apenas quando necessário; prefira nomes autoexplicativos

## Uso no VS Code
- Configure tasks.json para compilar automaticamente.
- Use o depurador integrado (launch.json) para executar e depurar.

## Como contribuir
- Abra uma issue descrevendo a melhoria ou bug.
- Envie PR com pequenas mudanças e descrição clara.
- Siga as convenções de código.