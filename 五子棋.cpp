#include <stdio.h>
#include <windows.h> 

int main()
{
	int qipan[15][15];//���� 15*15
	//�Ʊ����Ҫ���ַ�:�� �� ���� �� �ȩ� �� ���������
	int i,j;//��ʾ���� 
	//�����ֵ0��ʾ���壬1��ʾ���壬2��ʾ��λ��û����
	int color=0;
	
	for(i=0;i<15;i++)
		{
			for(j=0;j<15;j++)
			{
				qipan[i][j]=2;
			}
		}

	while(1)
	{
		
		printf("����������λ�ã����̴�СΪ15*15),��2,2: ");
        scanf("%d,%d", &i,&j);//����λ��
		if(i<1 || i >20 || j<1 || j>20)
        {
            printf("�����λ�ó��������̵ķ�Χ�����������룡\n");
            continue;
        }
        if((qipan[i-1][j-1]!=2))
        {
            printf("��ʾ����λ���Ѿ���������!\n");
            continue;
        } 
        color=(color+1)%2;
        qipan[i-1][j-1]=color;
        
        
        
        for(i=1;i<=15;i++)
        {
            //��һ��
            if(i==1)
            {
                //��һ��
                if(qipan[i-1][0]==0)
                    printf("��");
                if(qipan[i-1][0]==1)
                    printf("��");
                if(qipan[i-1][0]==2)
                    printf("�� ");
 
                //��2-14��
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("��");
                    if(qipan[i-1][j-1]==1)
                        printf("��");
                    if(qipan[i-1][j-1]==2)
                        printf("�� ");
                }
 
                //��15��
                if(qipan[i-1][14]==0)
                    printf("��");
                if(qipan[i-1][14]==1)
                    printf("��");
                if(qipan[i-1][14]==2)
                    printf("�� ");
 
                    printf("\n");
            }
            //��2-14��
            if(i<=19 && i>=2)
            {
                //��һ��
                if(qipan[i-1][0]==0)
                    printf("��");
                if(qipan[i-1][0]==1)
                    printf("��");
                if(qipan[i-1][0]==2)
                    printf("�� ");
 
                //��2-14��
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("��");
                    if(qipan[i-1][j-1]==1)
                        printf("��");
                    if(qipan[i-1][j-1]==2)
                        printf("�� ");
                }
 
                //��15��
                if(qipan[i-1][14]==0)
                    printf("��");
                if(qipan[i-1][14]==1)
                    printf("��");
                if(qipan[i-1][14]==2)
                    printf("�� ");
 
                    printf("\n");
            }
            //��15��
			if(i==15)
			{
				//��1��
				if(qipan[i-1][0]==0)
                    printf("��");
                if(qipan[i-1][0]==1)
                    printf("��");
                if(qipan[i-1][0]==2)
                    printf("�� ");
                //2-14��
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("��");
                    if(qipan[i-1][j-1]==1)
                        printf("��");
                    if(qipan[i-1][j-1]==2)
                        printf("�� ");
                }
                //��15��
				if(qipan[i-1][14]==0)
                    printf("��");
                if(qipan[i-1][14]==1)
                    printf("��");
                if(qipan[i-1][14]==2)
                    printf("�� ");
 
                    printf("\n");
		    } //�����ж�
        }  
       
        
        
        
        
    }
	return 0;
}
