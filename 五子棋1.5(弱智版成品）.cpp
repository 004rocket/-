#include<stdio.h>
#include<windows.h>
 
int main()
{
 
    int i,j;//��ʾ���̺�������
    /*
    *���Ʊ����Ҫ���ַ�:�� �� ���� �� �ȩ� �� ���������
    *�����ֵ1��ʾ��0��ʾ��2��ʾ��λ��û����
    *
    */
    int qipan[15][15];
    int color=0;//0��ʾ����(ԲȦ)��1��ʾ����
    int iTemp = 0,jTemp = 0,countTemp = 0;
    int colorFlag = 0;
    char op;
    int n=0;
    int a,b; 
    printf("��ѡ�����ֺͺ���\n1.����\n2.����\n");
    int input;
    scanf("%d",&input);
    if(input==1)
    {
    	color=0;
    }
    else if(input==2)
    {
    	color=2;
    }
again:
 
    for(i=0;i<15;i++)
        for(j=0;j<15;j++)
            qipan[i][j]=2;
      //���� 
 if(color==0)
 {
 
    while(1)
    {
	    color=(color+1)%2;//��ȡ������������
	    n++;
        if(color==1) 
        {
        	
        	if(n==1)//��һ�� 
        	{
        		i=8;
        		j=8;
        	}
        	if(n==3)//�ڶ��� 
        	{
        		if(qipan[8-1][9-1]==0)
        		{
        			i=9;j=8;
        		}
        		else
        		{
        			i=8;j=9;
        		}
        		
        	}
        	if(n==5)//������ 
        	{
        		
        		if(qipan[8-1][10-1]==2)
        		{
        			i=8;j=10;
        		}
        		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
        		else if(qipan[8-1][8-1]==qipan[9-1][8-1]==1&&qipan[7-1][8-1]==2) 
        		{
        			i=7;j=8;
        		}
        		
        		else if(qipan[10-1][8-1]==0&&qipan[9-1][9-1]==2)
        		{
        			i=9;j=9;
        		}
        		
        	   
        	    else if(qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[7-1][9-1]==0)
				{
					i=6;j=8;
				} 
        	    
        	    
          	}
          	if(n==7)//������ 
          	{
          		if(qipan[9-1][9-1]==1&&qipan[10-1][10-1]==2)
          		{
          			i=10;j=10;
          		}
          		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][10-1]==1&&qipan[8-1][11-1]==2)
          		{
          			i=8;j=11;
          		}
			    else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][10-1]==1&&qipan[8-1][7-1]==2)
          		{
          			i=8;j=7;
          		}
          		else if(qipan[8-1][8-1]==qipan[7-1][8-1]==qipan[8-1][9-1]==1&&qipan[6-1][8-1]==0&&qipan[9-1][8-1]==2)
          		{
          			i=9;j=8;
          		}
          		else if(qipan[8-1][8-1]==qipan[7-1][8-1]==qipan[8-1][9-1]==1&&qipan[9-1][8-1]==0&&qipan[6-1][8-1]==2)
          		{
          			i=6;j=8;
          		}
          		
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][7-1]==1&&qipan[8-1][6-1]==2)
          		{
          			i=8;j=6;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][7-1]==1&&qipan[8-1][10-1]==2)
          		{
          			i=8;j=10;
          		}
          		else if(qipan[8-1][8-1]==1&&qipan[9-1][9-1]==1&&qipan[10-1][10-1]==0&&qipan[9-1][10-1]==2)
          		{
          			i=9;j=10;
          		}
          		else if(qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[8-1][6-1]==qipan[8-1][10-1]==qipan[9-1][8-1]==0)
          		{
          			i=7;j=7;
          		}
          		else if(qipan[8-1][7-1]==qipan[9-1][8-1]==1&&qipan[7-1][6-1]==2)
          		{
          			i=7;j=6;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][10-1]==1&&qipan[8-1][7-1]==0&&qipan[8-1][11-1]==2)
          		{
          			i=8;j=11;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[7-1][9-1]==qipan[8-1][10-1]==qipan[9-1][8-1]==0&&qipan[7-1][8-1]==2)
          		{
          			i=7;j=8;
          		}
          		else
          		{
          			if(qipan[1-1][1-1]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-2]==2)
          			{
          				i=15;j=2;
          			}
          			if(qipan[1-1][1-3]==2)
          			{
          				i=15;j=3;
          			}
          			if(qipan[1-1][1-4]==2)
          			{
          				i=15;j=4;
          			}
          			if(qipan[1-1][1-5]==2)
          			{
          				i=15;j=5;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-7]==2)
          			{
          				i=15;j=7;
          			}
          			if(qipan[1-1][1-8]==2)
          			{
          				i=15;j=8;
          			}
          			if(qipan[1-1][1-9]==2)
          			{
          				i=15;j=9;
          			}
          			if(qipan[1-1][1-10]==2)
          			{
          				i=15;j=10;
          			}
          			
          		}
				
          	}
          	if(n==9)//������ 
          	{
          		if(qipan[7][7]==1&&qipan[8][8]==1&&qipan[9][9]==1&&qipan[7-1][7-1]==2&&qipan[11-1][11-1]!=2)
          		{
          			i=7;j=7;
          		}
          		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[7-1][8-1]==qipan[6-1][8-1]==1&&qipan[7-1][9-1]==qipan[8-1][10-1]==qipan[9-1][8-1]==qipan[9-1][10-1]==0)
          		{
          			i=9;j=9;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][10-1]==qipan[8-1][11-1]==1&&qipan[8-1][12-1])
          		{
          			i=8;j=12;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][10-1]==qipan[8-1][7-1]==1&&qipan[8-1][6-1])
          		{
          			i=8;j=6;
          		}
          		else if(qipan[7][7]==1&&qipan[8][8]==1&&qipan[9][9]==1&&qipan[11-1][11-1]==2&&qipan[7-1][7-1]!=2)
          		{
          			i=11;j=11;
          		}
          		else if(qipan[7][7]==1&&qipan[8][8]==1&&qipan[9][9]==1&&qipan[11-1][11-1]==2&&qipan[7-1][7-1]==2)
          		{
          			i=11;j=11;
          		}
          		else if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==1&&qipan[9-1][11-1]==2)
          		{
          			i=9;j=11;
          		}
          		else if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==1&&qipan[9-1][7-1]==2)
          		{
          			i=9;j=7;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[7-1][8-1]==qipan[7-1][6-1]==1&&qipan[8-1][7-1]==qipan[9-1][8-1]==qipan[8-1][10-1]==0&&qipan[7-1][7-1]==2)
          		{
          			i=7;j=7;
          		}
          		else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==1&&qipan[6-1][5-1]==2)
          		{
          			i=6;j=5;
          		}
          		else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==1&&qipan[10-1][9-1]==2)
          		{
          			i=10;j=9;
          		}
          		else if(qipan[8-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[8-1][10-1]==2)
          		{
          			i=8;j=10;
          		}
          		else if(qipan[8-1][10-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[8-1][11-1]==2)
          		{
          			i=8;j=11;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[7-1][8-1]==qipan[6-1][8-1]==1&&qipan[7-1][9-1]==qipan[8-1][10-1]==qipan[9-1][8-1]==qipan[9-1][10-1]==0&&qipan[9-1][9-1]==2)
          		{
          			i=9;j=9;
          		}
          		
          			else
          		{
          			if(qipan[1-1][1-1]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-2]==2)
          			{
          				i=15;j=2;
          			}
          			if(qipan[1-1][1-3]==2)
          			{
          				i=15;j=3;
          			}
          			if(qipan[1-1][1-4]==2)
          			{
          				i=15;j=4;
          			}
          			if(qipan[1-1][1-5]==2)
          			{
          				i=15;j=5;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-7]==2)
          			{
          				i=15;j=7;
          			}
          			if(qipan[1-1][1-8]==2)
          			{
          				i=15;j=8;
          			}
          			if(qipan[1-1][1-9]==2)
          			{
          				i=15;j=9;
          			}
          			if(qipan[1-1][1-10]==2)
          			{
          				i=15;j=10;
          			}
          			
          		}
				
            }
          	  if(n==11)//������ 
          	  {
          	  	if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==qipan[9-1][11-1]==1&&qipan[9-1][12-1]==2)
          	  	{
          	  		i=9;j=12;
          	  	}
          	  	else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	  	else if(qipan[7-1][6-1]==qipan[7-1][7-1]==qipan[7-1][8-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[7-1][9-1]==2)
          	  	{
          	  		i=7;j=9;
          	  	}
          	  		else if(qipan[7-1][6-1]==qipan[7-1][7-1]==qipan[7-1][8-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==1&&qipan[7-1][5-1]==2)
          	  	{
          	  		i=7;j=5
						
						
						
						
						;
          	  	}
          	  	else if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==qipan[9-1][7-1]==1&&qipan[9-1][6-1]==2)
          	  	{
          	  		i=9;j=6;
          	  	}
          	  	else if(qipan[8-1][8-1]==qipan[9-1][8-1]==qipan[9-1][7-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==1&&qipan[8-1][9-1]==qipan[10-1][8-1]==qipan[10-1][10-1]==qipan[9-1][6-1]==qipan[9-1][11-1]==0)
          	  	{
          	  		i=10;j=7;
          	  	}
          	  	else if(qipan[8-1][8-1]==qipan[9-1][9-1]==qipan[10-1][10-1]==qipan[11-1][11-1]==1&&qipan[7-1][7-1]==2)
          	  	{
          	  		i=7;j=7;
          	  	}
          	  	else if(qipan[8-1][8-1]==qipan[9-1][9-1]==qipan[10-1][10-1]==qipan[11-1][11-1]==1&&qipan[12-1][12-1]==2)
          	  	{
          	  		i=12;j=12;
          	  	}
          	  	else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==qipan[6-1][5-1]==1)
          		{
          			i=5;j=4;
          		}
          		else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==qipan[10-1][9-1]==1)
          		{
          			i=11;j=10;
          		}
          	  		else
          		{
          			if(qipan[1-1][1-1]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-2]==2)
          			{
          				i=15;j=2;
          			}
          			if(qipan[1-1][1-3]==2)
          			{
          				i=15;j=3;
          			}
          			if(qipan[1-1][1-4]==2)
          			{
          				i=15;j=4;
          			}
          			if(qipan[1-1][1-5]==2)
          			{
          				i=15;j=5;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-7]==2)
          			{
          				i=15;j=7;
          			}
          			if(qipan[1-1][1-8]==2)
          			{
          				i=15;j=8;
          			}
          			if(qipan[1-1][1-9]==2)
          			{
          				i=15;j=9;
          			}
          			if(qipan[1-1][1-10]==2)
          			{
          				i=15;j=10;
          			}
          			
          		}
				
              }
              //������
			  if(n==13)
			  {
			  	if(qipan[7-1][6-1]==qipan[7-1][7-1]==qipan[7-1][8-1]==qipan[7-1][9-1]==1&&qipan[7-1][5-1]==2)
				  {
				  	i=7;j=5;
				  } 
				 else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
				else if(qipan[7-1][6-1]==qipan[7-1][7-1]==qipan[7-1][8-1]==qipan[7-1][9-1]==1&&qipan[7-1][10-1]==2)
				  {
				  	i=7;j=10;
				  } 
			  } 
          	if(n==15)
          	{
          		 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
				   
          	}
          	if(n==17)
          	{
          	 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==19)
          	{
          	 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==21)
          	{
          		 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==23)
          	{
          		 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==25)
          	{
          	 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==27)
          	{
          		 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==29)
          	{
          		 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
          	if(n==31)
          	{
          		 if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	}
        	
        }
		if(color==0)
		{
			printf("����������λ�ã����̴�СΪ20*20),��2,2: ");
            scanf("%d,%d", &i,&j);
         
            if(i<1 || i >15 || j<1 || j>15)
          {
              printf("�����λ�ó��������̵ķ�Χ�����������룡\n");
              continue;
          }
 
            if((2 != qipan[i-1][j-1]))
          {
              printf("��ʾ����λ���Ѿ���������!\n");
              fflush(stdin);
              continue;
          }
          a=i;
		  b=j;
		}
 
        qipan[i-1][j-1]=color;//����λ���������Ը�����
 
        //�������̶�Ӧλ�����ԣ���������״̬�����̣�һ���л��ƣ���Ե�ر���
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
                if(qipan[i-1][j-1]==0)
                    printf("��");
                if(qipan[i-1][j-1]==1)
                    printf("��");
                if(qipan[i-1][j-1]==2)
                    printf("�� ");
 
                    printf("\n");
            }
 
            //��2-14��
            if(i<=14 && i>=2)
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
                if(qipan[i-1][j-1]==0)
                    printf("��");
                if(qipan[i-1][j-1]==1)
                    printf("��");
                if(qipan[i-1][j-1]==2)
                    printf("�� ");
 
                    printf("\n");
            }
 
            //��15��
            if(i==15)
            {
                if(qipan[i-1][0]==0)
                    printf("��");
                if(qipan[i-1][0]==1)
                    printf("��");
                if(qipan[i-1][0]==2)
                    printf("�� ");
 
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("��");
                    if(qipan[i-1][j-1]==1)
                        printf("��");
                    if(qipan[i-1][j-1]==2)
                        printf("�� ");
                }
 
                if(qipan[i-1][j-1]==0)
                    printf("��");
                if(qipan[i-1][j-1]==1)
                    printf("��");
                if(qipan[i-1][j-1]==2)
                    printf("�� ");
 
                    printf("\n");
            }
 
        }
 
        //�ж���Ӯ
        for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                //count = 0;
                //�����⵽�������ӣ�������������йص��Ƿ����Ӯ
                if(2 != qipan[i][j] )
                {
                    colorFlag = qipan[i][j];
                    countTemp = 1;
                    iTemp = i;
                    jTemp = j;
 
                    //�����Ӻ������Ƿ����Ӯ
                    while((++jTemp<15 )&&( 5 != countTemp ))
                    {
                        if(colorFlag == qipan[i][jTemp])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }
 
                    //�������Ӯ
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while((++iTemp<15 )&&(5 !=countTemp))
                    {
                        if(colorFlag == qipan[iTemp][j])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp= 0;
                            break;
                        }
 
                    }
 
                    //б��,�����ϵ����·�����
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while((++iTemp<15 )&&(++jTemp<15 )&&(5 !=countTemp))
                    {
                        if(colorFlag == qipan[iTemp][jTemp])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }
 
                    //б��,�����ϵ����·�����
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while((++iTemp>=0 )&&(--jTemp>=0)&&(5 !=countTemp))
                    {
                        if(colorFlag == qipan[iTemp][jTemp])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }
 
                }
 
            }
 
        }
 
    }
}
//����
 if(color==2)
 {
 
    while(1)
    {
	    color=(color+1)%2;//��ȡ������������
	    n++;
        if(color==0) 
        {
        	
        	if(n==2)//��һ�� 
        	{
        		if(qipan[8-1][8-1]==2)
        		{
        			i=8;j=8;
        		}
        		else
        		{
        			i=8;j=9;
        		}
        	}
        	if(n==4)//�ڶ��� 
        	{
        		if(qipan[8-1][10-1]==2)
        		{
        			i=8;j=10;
        		}
        		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
        		else if(qipan[8-1][9-1]==2) 
        		{
        			i=8;j=9;
        		}
        		else if(qipan[9-1][8-1]==2)
        		{
        			i=9;j=8;
        		}
        		else if(qipan[9-1][9-1]==2)
        		{
        			i=i;j=9;
        		}
        		
        	}
        	if(n==6)//������ 
        	{
        		
        		if(qipan[8-1][10-1]==2&&qipan[8-1][9-1]==0)
        		{
        			i=8;j=10;
        		}
        		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
        		if(qipan[10-1][8-1]==1&&qipan[9-1][9-1]==2)
        		{
        			i=9;j=9;
        		}
        	    else if(qipan[8-1][7-1]==2)
        	    {
        	    	i=8;j=7;
        	    }
        	    else if(qipan[9-1][9-1]==2)
        	    {
        	    	i=9;j=9;
        	    }
          	}
          	if(n==8)//������ 
          	{
          		if(qipan[9-1][9-1]==0&&qipan[10-1][10-1]==2)
          		{
          			i=10;j=10;
          		}
          		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
        		
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][7-1]==0&&qipan[8-1][6-1]==2)
          		{
          			i=8;j=6;
          		}
          		else if(qipan[8-1][8-1]==qipan[8-1][9-1]==qipan[8-1][7-1]==0&&qipan[8-1][10-1]==2)
          		{
          			i=8;j=10;
          		}
          		else if(qipan[8-1][8-1]==0&&qipan[9-1][9-1]==0&&qipan[10-1][10-1]==1&&qipan[9-1][10-1]==2)
          		{
          			i=9;j=10;
          		}
          		else if(qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==0&&qipan[8-1][6-1]==qipan[8-1][10-1]==qipan[9-1][8-1]==1)
          		{
          			i=7;j=7;
          		}
          		else if(qipan[8-1][7-1]==qipan[9-1][8-1]==0&&qipan[7-1][6-1]==2)
          		{
          			i=7;j=6;
          		}
          		
          		else
          		{
          			if(qipan[1-1][1-1]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-2]==2)
          			{
          				i=15;j=2;
          			}
          			if(qipan[1-1][1-3]==2)
          			{
          				i=15;j=3;
          			}
          			if(qipan[1-1][1-4]==2)
          			{
          				i=15;j=4;
          			}
          			if(qipan[1-1][1-5]==2)
          			{
          				i=15;j=5;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-7]==2)
          			{
          				i=15;j=7;
          			}
          			if(qipan[1-1][1-8]==2)
          			{
          				i=15;j=8;
          			}
          			if(qipan[1-1][1-9]==2)
          			{
          				i=15;j=9;
          			}
          			if(qipan[1-1][1-10]==2)
          			{
          				i=15;j=10;
          			}
          			
          		}
				
          	}
          	if(n==10)//������ 
          	{
          		if(qipan[7][7]==0&&qipan[8][8]==0&&qipan[9][9]==0&&qipan[7-1][7-1]==2&&qipan[11-1][11-1]!=2)
          		{
          			i=7;j=7;
          		}
          		else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          		else if(qipan[7][7]==0&&qipan[8][8]==0&&qipan[9][9]==0&&qipan[11-1][11-1]==2&&qipan[7-1][7-1]!=2)
          		{
          			i=11;j=11;
          		}
          		else if(qipan[7][7]==0&&qipan[8][8]==0&&qipan[9][9]==0&&qipan[11-1][11-1]==2&&qipan[7-1][7-1]==2)
          		{
          			i=11;j=11;
          		}
          		else if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==0&&qipan[9-1][11-1]==2)
          		{
          			i=9;j=11;
          		}
          		else if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==0&&qipan[9-1][7-1]==2)
          		{
          			i=9;j=7;
          		}
          		else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==0&&qipan[6-1][5-1]==2)
          		{
          			i=6;j=5;
          		}
          		else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==0&&qipan[10-1][9-1]==2)
          		{
          			i=10;j=9;
          		}
          		else if(qipan[8-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==0&&qipan[8-1][10-1]==2)
          		{
          			i=8;j=10;
          		}
          		else if(qipan[8-1][10-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[8-1][9-1]==0&&qipan[8-1][11-1]==2)
          		{
          			i=8;j=11;
          		}
          			else
          		{
          			if(qipan[1-1][1-1]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-2]==2)
          			{
          				i=15;j=2;
          			}
          			if(qipan[1-1][1-3]==2)
          			{
          				i=15;j=3;
          			}
          			if(qipan[1-1][1-4]==2)
          			{
          				i=15;j=4;
          			}
          			if(qipan[1-1][1-5]==2)
          			{
          				i=15;j=5;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-7]==2)
          			{
          				i=15;j=7;
          			}
          			if(qipan[1-1][1-8]==2)
          			{
          				i=15;j=8;
          			}
          			if(qipan[1-1][1-9]==2)
          			{
          				i=15;j=9;
          			}
          			if(qipan[1-1][1-10]==2)
          			{
          				i=15;j=10;
          			}
          			
          		}
				
            }
          	  if(n==12)//������ 
          	  {
          	  	if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==qipan[9-1][11-1]==0&&qipan[9-1][12-1]==2)
          	  	{
          	  		i=9;j=12;
          	  	}
          	  	else if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
          	  	else if(qipan[9-1][8-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==qipan[9-1][7-1]==0&&qipan[9-1][6-1]==2)
          	  	{
          	  		i=9;j=6;
          	  	}
          	  	else if(qipan[8-1][8-1]==qipan[9-1][8-1]==qipan[9-1][7-1]==qipan[9-1][9-1]==qipan[9-1][10-1]==0&&qipan[8-1][9-1]==qipan[10-1][8-1]==qipan[10-1][10-1]==qipan[9-1][6-1]==qipan[9-1][11-1]==0)
          	  	{
          	  		i=10;j=7;
          	  	}
          	  	else if(qipan[8-1][8-1]==qipan[9-1][9-1]==qipan[10-1][10-1]==qipan[11-1][11-1]==0&&qipan[7-1][7-1]==2)
          	  	{
          	  		i=7;j=7;
          	  	}
          	  	else if(qipan[8-1][8-1]==qipan[9-1][9-1]==qipan[10-1][10-1]==qipan[11-1][11-1]==0&&qipan[12-1][12-1]==2)
          	  	{
          	  		i=12;j=12;
          	  	}
          	  	else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==qipan[6-1][5-1]==0)
          		{
          			i=5;j=4;
          		}
          		else if(qipan[7-1][6-1]==qipan[8-1][7-1]==qipan[8-1][8-1]==qipan[9-1][8-1]==qipan[10-1][9-1]==0)
          		{
          			i=11;j=10;
          		}
          	  		else
          		{
          			if(qipan[1-1][1-1]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-2]==2)
          			{
          				i=15;j=2;
          			}
          			if(qipan[1-1][1-3]==2)
          			{
          				i=15;j=3;
          			}
          			if(qipan[1-1][1-4]==2)
          			{
          				i=15;j=4;
          			}
          			if(qipan[1-1][1-5]==2)
          			{
          				i=15;j=5;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-6]==2)
          			{
          				i=15;j=1;
          			}
          			if(qipan[1-1][1-7]==2)
          			{
          				i=15;j=7;
          			}
          			if(qipan[1-1][1-8]==2)
          			{
          				i=15;j=8;
          			}
          			if(qipan[1-1][1-9]==2)
          			{
          				i=15;j=9;
          			}
          			if(qipan[1-1][1-10]==2)
          			{
          				i=15;j=10;
          			}
          			
          		}
				
              }
              //������
			  if(n==14)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  } 
			  if(n==16)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==18)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==20)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==22)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==24)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==26)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==28)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
			  if(n==30)
			  {
			  	if(qipan[a-1][b]==2)
        		{
        			i=a;j=b+1;
        		}
          		else if(qipan[a][b-1]==2)
        		{
        			i=a+1;j=b;
        		}
			  }
          	
          	
        	
        }
		if(color==1)
		{
			printf("����������λ�ã����̴�СΪ20*20),��2,2: ");
            scanf("%d,%d", &i,&j);
 
            if(i<1 || i >15 || j<1 || j>15)
          {
              printf("�����λ�ó��������̵ķ�Χ�����������룡\n");
              continue;
          }
 
            if((2 != qipan[i-1][j-1]))
          {
              printf("��ʾ����λ���Ѿ���������!\n");
              fflush(stdin);
              continue;
          }
          a=i;b=j;
		}
 
        qipan[i-1][j-1]=color;//����λ���������Ը�����
 
        //�������̶�Ӧλ�����ԣ���������״̬�����̣�һ���л��ƣ���Ե�ر���
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
                if(qipan[i-1][j-1]==0)
                    printf("��");
                if(qipan[i-1][j-1]==1)
                    printf("��");
                if(qipan[i-1][j-1]==2)
                    printf("�� ");
 
                    printf("\n");
            }
 
            //��2-14��
            if(i<=14 && i>=2)
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
                if(qipan[i-1][j-1]==0)
                    printf("��");
                if(qipan[i-1][j-1]==1)
                    printf("��");
                if(qipan[i-1][j-1]==2)
                    printf("�� ");
 
                    printf("\n");
            }
 
            //��15��
            if(i==15)
            {
                if(qipan[i-1][0]==0)
                    printf("��");
                if(qipan[i-1][0]==1)
                    printf("��");
                if(qipan[i-1][0]==2)
                    printf("�� ");
 
                for(j=2;j<=14;j++)
                {
                    if(qipan[i-1][j-1]==0)
                        printf("��");
                    if(qipan[i-1][j-1]==1)
                        printf("��");
                    if(qipan[i-1][j-1]==2)
                        printf("�� ");
                }
 
                if(qipan[i-1][j-1]==0)
                    printf("��");
                if(qipan[i-1][j-1]==1)
                    printf("��");
                if(qipan[i-1][j-1]==2)
                    printf("�� ");
 
                    printf("\n");
            }
 
        }
 
        //�ж���Ӯ
        for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                //count = 0;
                //�����⵽�������ӣ�������������йص��Ƿ����Ӯ
                if(2 != qipan[i][j] )
                {
                    colorFlag = qipan[i][j];
                    countTemp = 1;
                    iTemp = i;
                    jTemp = j;
 
                    //�����Ӻ������Ƿ����Ӯ
                    while((++jTemp<15 )&&( 5 != countTemp ))
                    {
                        if(colorFlag == qipan[i][jTemp])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }
 
                    //�������Ӯ
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while((++iTemp<15 )&&(5 !=countTemp))
                    {
                        if(colorFlag == qipan[iTemp][j])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp= 0;
                            break;
                        }
 
                    }
 
                    //б��,�����ϵ����·�����
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while((++iTemp<15 )&&(++jTemp<15 )&&(5 !=countTemp))
                    {
                        if(colorFlag == qipan[iTemp][jTemp])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }
 
                    //б��,�����ϵ����·�����
                    iTemp = i;
                    jTemp = j;
                    countTemp = 1;
                    while((++iTemp>=0 )&&(--jTemp>=0)&&(5 !=countTemp))
                    {
                        if(colorFlag == qipan[iTemp][jTemp])
                        {
                            countTemp++;
                            if(5 == countTemp)
                            {
                                if(0 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                else if(1 == colorFlag)
                                {
                                    printf("����Ӯ��!\n");
                                }
                                goto whileEnd;
                            }
                        }
                        else
                        {
                            countTemp = 0;
                            break;
                        }
                    }
 
                }
 
            }
 
        }
 
    }
}
 
whileEnd:
    printf("���¿�ʼ�������˳�?���¿�ʼ�밴y/Y,�˳��밴�����:");
    fflush(stdin);
    op = getchar();
 
    if(('y' == op) ||( 'Y' == op))
    {
        system("cls");
        printf("�Ѿ����¿�ʼ�ˣ��������һ�����ӵ�����:\n\n\n");
        goto again;
    }
 
}
