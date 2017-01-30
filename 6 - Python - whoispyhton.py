#!/usr/bin/python
import socket

ip = "200.160.2.3"

#cria um objeto socket
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

#faz o cliente se conectar
client.connect((ip,43))

#envia alguns dados
site = raw_input("Digite um site ")
client.send(site+"\n")

#recebe alguns dados
wis = client.recv(4096)

print wis