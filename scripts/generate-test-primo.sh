#!/usr/bin/env bash
set -e
NUM=$((RANDOM % 100 + 1))
mkdir -p ../testes/primo
IN=../testes/primo/entrada1.txt
OUT=../testes/primo/saida1.txt
echo "$NUM" > "$IN"
../primo < "$IN" > "$OUT"
echo "[OK] Teste PRIMO → entrada: $IN | saída: $OUT"
