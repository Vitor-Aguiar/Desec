#!/usr/bin/python
import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.connect(("172.16.1.3",45800))

key = s.recv(1024)

print key