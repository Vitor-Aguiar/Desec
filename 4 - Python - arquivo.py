#!/usr/bin/python
import socket
import sys

file = open('lista.txt')
for linha in file.readlines():
	print linha