#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
#include<string.h>
#include<ctime>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<fstream>
#include<unistd.h>
using namespace std;
main()
{
	setlocale(LC_ALL,"Turkish");
	system("color b");
	
	int x,q,t;
	char a,y[10];
	
	cout<<endl;
	
	cout<<"   X          X   XXXXXX   X         XXXXXX   XXXXXX   XX    XX   XXXXXX  "<<endl;
	cout<<"   X          X   X        X         X        X    X   X X  X X   X       "<<endl;
	cout<<"   X    XX    X   XXX      X         X        X    X   X  XX  X   XXX     "<<endl;
	cout<<"   X   XXXX   X   X        X     X   X        X    X   X      X   X       "<<endl;
	cout<<"   XXXX    XXXX   XXXXXX   XXXXXXX   XXXXXX   XXXXXX   X      X   XXXXXX  "<<endl;
	
	cout<<endl<<endl;
	
	cout<<"   CLOSED BETA PERSONNEL TRACKING PROGRAM                        *                                             "<<endl;
	cout<<"   YUSUF HOLDING COMPANY                                       *   *                                           "<<endl;
	cout<<"   >> ALL RIGHTS RESERVED <<                                 *       *                                         "<<endl;
	cout<<"                                                           *           *                                       "<<endl;
	cout<<"   # * * * * * * * * * * * * * #               X    X    *     XXXXXX    *     XXXXXX                          "<<endl;
	cout<<"   # * * * ~ PRODUCER ~  * * * #               X    X          X               X                               "<<endl;
	cout<<"   # * * * Yusuf OZDEMIR * * * #                XXXXX  X    X  XXXXXX  X    X  XXX                             "<<endl;
	cout<<"   # * * *   191802055   * * * #                    X  X    X       X  X    X  X       ~GAZI UNIVERSTY~        "<<endl;
	cout<<"   # * * * * * * * * * * * * * #               XXXXXX  XXXXXX  XXXXXX  XXXXXX  X       >> Since 1926 <<        "<<endl<<endl<<endl;
	
	cout<<"   >> Address _ ANKARA, ALTINDAG, KARAPURCEK, 478.ST, 32/2 <<   "<<endl<<endl;
	
	cout<<"   >> Communication _ Tel = 0543 594 00 87 _ Email = encerver2@gmail.com  OR  encerver@hotmail.com <<   "<<endl<<endl<<endl<<endl;
	
	cout<<"   >> Press any key to start the program <<   ";
	
	getch();
	
	system("cls");
	
	cout<<"   # Ba�lamadan �nce uyar� !!!"<<endl<<endl<<"   # �ncelikle kapal� beta dad�r program�m�z olu�abilecek teknik hatalardan dolay� �z�r dileriz."<<endl<<endl;
	cout<<"   # Hatalar ve �neriler i�in ileti�im k�sm�ndaki bilgilerden bize ula�abilirsiniz."<<endl<<endl;
	cout<<"   # G�rsellik a��s�ndan ingilizce karakter kullanman�z� ve uygulamay� tam ekran moduna alman�z� tavsiye ederiz."<<endl<<endl<<"   ______________________________________________";
	
	cout<<endl<<endl<<endl<<"   >> Ba�lamak i�in herhangi bir tu�a bas�n�z. <<   ";
	
	getch();
	
	cout<<endl<<endl<<endl<<"          >> L O A D I N G";
	
	for(int i=1;i<=3;i++)
	{	
		cout<<" .";
		sleep(1);
	}
	
	er0:
	
	system("cls");
	
	system("color b");
	
	cout<<" Merhaba size nas�l yard�mc� olabilirim? "<<endl<<endl<<endl;
	
	cout<<" ( 1 ) �stenilen b�l�mde veya isimde kay�t aramak ve listelemek  i�in  >> 1`i  tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 2 ) Yeni i��i giri� i�lemi  i�in  >> 2`yi tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 3 ) T�m i��elerin toplamda alacaklar� maa�lar� g�rmek  i�in  >> 3`�  tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 4 ) En fazla maa� alan ki�iyi g�rmek  i�in  >> 4`�  tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 5 ) ���i ��k�� i�lemleri  i�in  >> 5`i  tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 6 ) ���iler kay�t dosyas�n� okumak  i�in  >> 6`y� tu�lay�n�z. "<<endl<<endl;
	cout<<" ( 7 ) Program� kapatmak  i�in  >> 7`yi tu�lay�n�z. "<<endl<<endl;
	
	cout<<endl<<"     >>  ";
	cin>>x;
	
	switch(x)
	{
		case 1 : 
		{
		system("color b");
		system("cls");
		
		int maas,sic,mtop=0,j=0,h=0;
		char y[10],ad[10],sad[10],alan[10];
		FILE *x;
		x=fopen("i��iler.txt","r");
		cout<<"  # Ba�lamadan �nce uyar� !!!  "<<endl<<endl<<"  # B�y�k harf k���k harf kullan�m�na dikkat ediniz ve sadece bir adet bilgi giri�i yap�n�z...  ";
		getch();
		system("cls");
		cout<<"  Merhaba, Kay�tlar� listelemek ve aramak i�in isim veya b�l�m ad� giriniz.  "<<endl;
		cout<<endl<<"  >>  ";
		cin>>y;
		system("cls");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{	
		if(strcmp(ad,y)==0 || strcmp(sad,y)==0 || strcmp(alan,y)==0)
		{
			cout<<" ���inin Ad� = "<<ad<<" && "<<"Soyad� = "<<sad<<" && "<<"Ald��� Maa� = "<<maas<<" TL && "<<"�al��t��� Alan = "<<alan<<" && "<<"Sicil Numaras� = "<<sic<<endl<<endl;
			h++;
		}
			j++;
		}
		fclose(x);
		if(h==0)
		{
			cout<<endl<<endl;
  		cout<<"   >> �zg�n�m bu isimde herhangi bir kay�t bulunamad�. <<   "<<endl;
		cout<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		}
		
		else
		{
		cout<<endl<<endl;
  		cout<<"   >> Kay�tlar ba�ar�l� bir �ekilde okundu. <<   "<<endl;
		cout<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		}
		getch();
		goto er0;	
		break;
		}
		
		case 2 : 
		{
		system("color b");
		system("cls");
		
		cout<<"   # Ba�lamadan �nce uyar� kapal� beta a�amas�nda olan program�m�zda hen�z 2 isim giri�i kabul etmemektedir !!!"<<endl<<endl;
		cout<<"   # Her hangi bir hatayla kar��la�mamak i�in iki isimli ki�ilerin sadece bir isminin girilmesi rica olunur.";
		cout<<endl<<endl<<endl<<"   >> Ba�lamak i�in herhangi bir tu�a bas�n�z. <<   ";
		getch();
		system("cls");
		
		ofstream x("i��iler.txt",ios::app);
		cout<<" Yeni i��inin ad� nedir ? >> ";
		cin>>y;
		x<<endl<<y<<" ";
		cout<<" Yeni i��inin soyad� nedir ? >> ";
		cin>>y;
		x<<y<<" ";
		cout<<" Yeni i��inin alaca�� maa� ka� TL ? >> ";
		cin>>q;
		x<<q<<" ";
		cout<<" Yeni i��inin �al��aca�� alan nedir ? >> ";
		cin>>y;
		x<<y<<" ";
		cout<<" Yeni i��inin '5' haneli sicil numaras� ? >> ";
		cin>>q;
		x<<q;
		x.close();
		cout<<endl<<endl;
		cout<<"   >> Kay�t ba�ar�l� bir �ekilde tamamland�. <<   "<<endl;
		cout<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		
		getch();
		goto er0;
		break;
		}
		
		case 3 : 
		{
		system("color b");
		system("cls");
	
		int maas[50],sic,mtop=0,j=0;
		char ad[10],sad[10],alan[10];
		FILE *x;
		x=fopen("i��iler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas[j],&alan,&sic)!=EOF)
		{
			mtop=mtop+maas[j];
			j++;
		}
		fclose(x);
		cout<<"   >> �irketin toplam maa� gideri = "<<mtop<<" TL";
		cout<<endl<<endl<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		
		getch();
		goto er0;	
		break;
		}
		
		case 4 : 
		{
		system("color b");
		system("cls");
		
		int maas[50],sic,j=0,p=0,o=1;
		char ad[10],sad[10],alan[10];
		
		FILE *x;
		x=fopen("i��iler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas[j],&alan,&sic)!=EOF)
		{
			j++;
		}
		for(int i=0;i<j;i++)
		{
			if(maas[i]>maas[i+1])
			{
				maas[i+1]=maas[i];
			}
		}
		fclose(x);
		FILE *k;
		k=fopen("i��iler.txt","r");
		cout<<"   >> En y�ksek maa� = "<<maas[j-1]<<" TL "<<endl<<endl;
		
			while(fscanf(k,"%s %s %d %s %d",&ad,&sad,&maas[p],&alan,&sic)!=EOF)
		{
			if(maas[j]==maas[p])
			{
				cout<<"   >> En y�ksek maa�� alan "<<o<<". ki�i = "<<endl;
				cout<<"   >> Ad� = "<<ad<<" && Soyad� = "<<sad<<"  "<<endl<<endl;
				o++;
			}
			p++;
		}
		fclose(k);
		cout<<endl<<endl<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		
		getch();	
		goto er0;	
		break;
		}
		
		case 5 : 
		{
		int maas,sic,q,h=0;
		char ad[10],sad[10],alan[10];
			
		system("color b");
		system("cls");
		
		FILE *x=fopen("i��iler.txt","a+");
		FILE *y=fopen("i��iler2.txt","a+");
		cout<<"  >> ��k�� i�lemini yapmak istedi�iniz i��inin sicil numaras�n� giriniz. ";
		cout<<endl<<endl<<"  Sicil NO >>  ";
		cin>>q;
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{
			if(sic!=q)
			{
				fprintf(y,"%s %s %d %s %d\n",ad,sad,maas,alan,sic);
			}
			else h++;	
		}
		fclose(x);
		fclose(y);
		remove("i��iler.txt");
		rename("i��iler2.txt","i��iler.txt");
		system("cls");
		if(h==0)
		{
		cout<<endl<<endl;
		cout<<"   >> ���i bulunamad� sicil numaras�na dikkat edip tekrar deneyiniz. <<   "<<endl;
		cout<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		}
		
		else
		{
		cout<<endl<<endl;
		cout<<"   >> ���inin ��k�� i�lemi ba�ar�l� bir �ekilde ger�ekle�tirilmi�tir <<   "<<endl;
		cout<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		}
		
		getch();
		goto er0;
		break;
		}
		
		case 6 : 
		{
		system("color b");
		system("cls");
	
		int maas,sic,i=1;
		char ad[10],sad[10],alan[10];
		FILE *x;
		x=fopen("i��iler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{
			cout<<i<<". ���inin Ad� = "<<ad<<" && "<<"Soyad� = "<<sad<<" && "<<"Ald��� Maa� = "<<maas<<" TL && "<<"�al��t��� Alan = "<<alan<<" && "<<"Sicil Numaras� = "<<sic<<endl<<endl;
			i++;
		}
		fclose(x);
		cout<<endl<<endl;
  		cout<<"   >> Dosya ba�ar�l� bir �ekilde okundu. <<   "<<endl;
		cout<<"   >> Ba�lang�ca d�nmek i�in her hangi bir tu�a bas�n�z. <<   ";
		
		getch();
		goto er0;
		break;
		}
		
		case 7 : 
		{
		system("color b");
		system("cls");
		for(int i=1;i<=3;i++)
		{
		system("cls");
		cout<<" Program sonland�r�l�yor iyi g�nler. ";
		cout<<endl<<endl;
		cout<<"   "<<4-i;
		sleep(1);
		}
		system("cls");
		cout<<endl<<endl<<"  PROGRAM SONLANDIRILDI  "<<endl<<endl<<"  Yusuf Holding �yi G�nler Diler..."<<endl<<endl<<endl<<endl<<endl;
		break;
		}
	}
}
