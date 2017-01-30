#!/usr/bin/python
import socket,sys
if (len(sys.argv) < 2):
	print "Modo de usar: ",sys.argv[0],"10.10.10.10"
else:
	print "Portas TCP abertas:"
	for porta in range(1,65535):
		meusocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		if meusocket.connect_ex((sys.argv[1], porta)) == 0:
			print "Porta",porta
			meusocket.close()

	
