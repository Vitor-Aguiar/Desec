#!/bin/bash
if [ "$1" == "" ]
then
echo "Curso PENTEST PROFISSIONAL - Desec"
echo "Exemplo de uso: $0 10.0.0"
else
for host in {1..254};do
ping -c1 $1.$host | grep "64 bytes" | cut -d" " -f4 | sed s/:// >> ips.txt
done
cat ips.txt | wc -l
fi
