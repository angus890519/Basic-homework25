/* �p������׹��-�򥻽m�ߧ@�~-�@�~25*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/17 08:57*/ 
#include <stdio.h>  //��ܮw 
#include <stdlib.h> //��ܮw 
int main(void)
{
	printf("�p������׹��-��¦�m�ߧ@�~-�@�~25\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/17 08:57\n");
	printf("-------------------------------------------------\n");
	printf("                  ��X��Ӱ}�C����               \n");
	printf("-------------------------------------------------\n");
	printf("���G�G\n");
    int *p[4]; //�w�q���а}�C 
    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};//�w�q�@�ӤG���}�C 
    int i; 
    p[0]=array[0];//�N�G���}�C�g�J���а}�C 
    p[1]=array[1];//�N�G���}�C�g�J���а}�C 
    p[2]=array[2];//�N�G���}�C�g�J���а}�C 
    p[3]=array[3];//�N�G���}�C�g�J���а}�C 

    for (i=0; i<3; i++) //��ܥX�� 
       printf("%d   ", *(p[0]+i));
       printf("\n");
	   
    for (i=0; i<3; i++) //��ܥX�� 
       printf("%d   ", *(p[1]+i));
       printf("\n");
       
    for (i=0; i<3; i++) //��ܥX��  
       printf("%d   ", *(p[2]+i));
       printf("\n");   
    
	for (i=0; i<3; i++) //��ܥX��  
       printf("%d   ", *(p[3]+i));
       printf("\n");
    
    system("pause");//�Ȱ����� 
    return 0;//�^�ǭ� 0 
}

