#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int criar(void);
HANDLE m_hCommPort;
BOOL status;


int main(void) 
{	

	
//	criar();
//	
//	DWORD qwe;
//	char c = 'Z', volta[10];
//	
//	WriteFile(m_hCommPort,&c,1,NULL,NULL); 
//	
//	DWORD dwEventMask;
//	DWORD NoBytesRead;
// 	
// 	status = SetCommMask(m_hCommPort, EV_RXCHAR);
// 	status = WaitCommEvent(m_hCommPort, &dwEventMask, NULL);
// 	
// 	
// 	if(status != 0){
// 		printf("FOI");
// 		status = ReadFile(m_hCommPort, &volta, 1, &NoBytesRead, NULL);
// 		putchar(volta);
// 		printf(volta);
//	 }
//	 else{
//	 	printf("FUDEU");
//	 }
//    
//	CloseHandle(m_hCommPort);
//	system("pause");
//	
//	return 0;
union{
	float valor_float;
	long int valor_long;
}u_float_int;

union{
	float valor_float;
	long int valor_long;
}um;

//Jogar valor picotado para outra estrutura, e depois ver valor em float

u_float_int.valor_float = 3.14;

printf("%f",u_float_int.valor_float);
printf("\n");
printf("%ld",u_float_int.valor_long);

um.valor_float = 1;

u_float_int.valor_long = u_float_int.valor_long + um.valor_long; 
printf("\n");
printf("%f",u_float_int.valor_float);

}





int criar(void){
	m_hCommPort = CreateFile("COM4",
       GENERIC_READ|GENERIC_WRITE,  // access ( read and write)
       0,                           // (share) 0:cannot share the
                                    // COM port
       0,                           // security  (None)
       OPEN_EXISTING,               // creation : open_existing
       0,        // we want overlapped operation
       0                            // no templates file for
                                    // COM port...
       );
	
}


