#!/bin/bash
if [ "$1" == "" ]
then
echo "Parsing de site"
echo "Exemplo de uso: $0 www.exemplo.com.br"
else
wget $1 2> /dev/null
mv index.html $1.index.html
cat $1.index.html | grep "href" | cut -d "/" -f3 | grep "\." | grep -v "<li" | cut -d '"' -f1 | sort | uniq | grep "\." | grep -v "\,"  > $1.sites.txt
echo -e "Lista de endereços válidos:\n"
for site in $(cat $1.sites.txt)
do
host $site | grep "has address"
done
fi
