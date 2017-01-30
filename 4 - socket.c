//Socket em C



#include <stdio.h>
#include <netdb.h>

main () 
{

	int meusocket;
	int conecta;

	struct sockaddr_in alvo;

	meusocket = socket(AF_INET, SOCK_STREAM, 0);     //AF_INET - Família IPV4, SOCK_STREAM - TCP, 0 - IP
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(80);
	alvo.sin_addr.s_addr = inet_addr("10.0.2.15");
	
	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);  //Função Retorna 0 se a porta estiver aberta e -1 se estiver fechada
	
	if(conecta == 0)
	{
	printf("Porta Aberta! \n");
	close(meusocket);
	close(connect);
	}
	else{
	printf("Porta fechada!\n");
	}



}
