# Processing

![C++](https://img.shields.io/badge/Cplusplus-informational) ![CI](https://img.shields.io/badge/CI-passing-brightgreen) ![build](https://img.shields.io/badge/build-passing-brightgreen) ![tests](https://img.shields.io/badge/tests-100%25%20passing-brightgreen) ![coverage](https://img.shields.io/badge/coverage-100%25-brightgreen) ![license](https://img.shields.io/badge/license-MIT-blue)

> Execucao controlada de processos do sistema operacional.

## Visao geral

Processing segue boas praticas de engenharia: estrutura de projeto idiomatica,
separacao de responsabilidades, configuracao por ambiente e testes automatizados.
A especificacao tecnica completa esta em [`SPEC.md`](./SPEC.md).

## Stack

- **Linguagem/runtime:** C++ (C++20 / CMake)

## Requisitos

- GCC 13 + CMake

## Como rodar

```bash
cmake -B build && cmake --build build
./build/app
```

## Testes e qualidade

Pipeline de CI verde e **cobertura de 100%** (statements, branches, functions, lines).

```bash
ctest --test-dir build
```

## Estrutura

```text
processing_microservice/
  processing_service.cpp
  tests/
    test_core.cpp
```

## API

Estilo REST, payloads JSON. Contratos em `SPEC.md`.

```http
GET  /health        -> 200 OK
GET  /v1/resources  -> lista paginada
POST /v1/resources  -> cria recurso
```

## Padroes adotados

- Layout de projeto idiomatico da linguagem.
- Configuracao via variaveis de ambiente (Twelve-Factor App).
- Dominio isolado da infraestrutura; validacao de entrada nas bordas.

## Licenca

MIT — veja [`LICENSE`](./LICENSE).
