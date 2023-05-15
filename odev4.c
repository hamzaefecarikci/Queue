#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5

int queue[BOYUT], front = -1, rear = -1;//Kuyruk tanilandi

void enQueue(int veri)//Kuyruga eleman ekleyen fonksiyon
{
	if(rear == BOYUT)//Kuyrugun dolu olup olmadigini kontrol eder.
		printf("\nKuyruk Dolu");
	
	else
	{
		if(front == -1)
			front = 0;
		rear = rear + 1;
		queue[rear] = veri; 	
	}
}

void deQueue()//Kuyruktan eleman silen fonksiyon.
{
	if(front == -1 || front > rear)//Kuyrugun bos olup olmadigini kontrol eder.
	{
		printf("\nKuyruk Bos");
		front = -1;
		rear = -1;
	}
	
	else
	{
		front = front + 1;
		printf("Eleman silindi!");
	}
}

void display()//Elemanlari goruntuleyen fonksiyondur.
{
	int i;
	
	for(i = front; i <= rear; i++)
	{
		printf("\n%d\n",queue[i]);
	}
}

int main(int argc, char *argv[]) 
{
	int secim;
	int ekle;
	int i = 1;
	
	while(i==1)
	{
		printf("\nLutfen asagidaki islemlerden birini seciniz\n\n");
		printf("1. Ekleme\n2. Silme\n3. Goruntuleme\n4. Cikis");
		printf("\nSeciminiz:");
		scanf("%d",&secim);
	
		switch (secim)
	    {
			case 1 :			
			printf("\nEklemek istediginiz sayiyi giriniz:");
			scanf("%d",&ekle);
			enQueue(ekle);	
			break;	
			
			case 2 :
			deQueue();	
			break;
			
			case 3 :
			display();
			break;
			
			case 4 :
			i = 0;
			break;
			
			default :
			printf("\nMaddelerde olmayan bir islem sectiniz!!");	
			break;	
		}
	}
	
	
	
	return 0;
}
