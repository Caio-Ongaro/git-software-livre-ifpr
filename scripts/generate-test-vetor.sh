#!/usr/bin/env bash
set -e
N=$((RANDOM % 20 + 1))
VALS=()
for ((i=0;i<N;i++)); do VALS+=($((RANDOM % 101))); done
mkdir -p ../testes/vetor
IN=../testes/vetor/entrada1.txt
OUT=../testes/vetor/saida1.txt
{ echo "$N"; printf '%s ' "${VALS[@]}"; echo; } > "$IN"
../vetor < "$IN" > "$OUT"
echo "[OK] Teste VETOR ($N elementos) → entrada: $IN | saída: $OUT"
