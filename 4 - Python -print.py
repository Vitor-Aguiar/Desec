#!/usr/bin/python

print "Curso de Pentest Profissional"
porta = 80
ip = "192.168.0.1"
print "Varrendo host",ip,"na porta",porta
ip2 = raw_input("Digite seu ip ")
porta = input("Digite a porta ")
print "Segunda varredura no host",ip2,"na porta",porta
idade = input("Digite a sua idade ")
if (idade >= 18):
	print "Pode dirigir"
else:
	print "Nao pode dirigir"