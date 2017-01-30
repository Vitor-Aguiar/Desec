#!/bin/bash
for wlist in $(cat lista.txt);do
pagina=$(curl -s -o /dev/null -w "%{http_code}" $1/$wlist/)
arquivo=$(curl -s -o /dev/null -w "%{http_code}" $1/$wlist)
if [ $pagina == "200" ]
then
echo "Encontrado diretório: $1/$wlist/" 
fi
if [ $arquivo == "200" ]
then
echo "Encontrado arquivo: $1/$wlist" 
fi
done
