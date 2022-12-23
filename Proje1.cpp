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
	
	cout<<"   # Baþlamadan önce uyarý !!!"<<endl<<endl<<"   # Öncelikle kapalý beta dadýr programýmýz oluþabilecek teknik hatalardan dolayý özür dileriz."<<endl<<endl;
	cout<<"   # Hatalar ve öneriler için iletiþim kýsmýndaki bilgilerden bize ulaþabilirsiniz."<<endl<<endl;
	cout<<"   # Görsellik açýsýndan ingilizce karakter kullanmanýzý ve uygulamayý tam ekran moduna almanýzý tavsiye ederiz."<<endl<<endl<<"   ______________________________________________";
	
	cout<<endl<<endl<<endl<<"   >> Baþlamak için herhangi bir tuþa basýnýz. <<   ";
	
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
	
	cout<<" Merhaba size nasýl yardýmcý olabilirim? "<<endl<<endl<<endl;
	
	cout<<" ( 1 ) Ýstenilen bölümde veya isimde kayýt aramak ve listelemek  için  >> 1`i  tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 2 ) Yeni iþçi giriþ iþlemi  için  >> 2`yi tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 3 ) Tüm iþçelerin toplamda alacaklarý maaþlarý görmek  için  >> 3`ü  tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 4 ) En fazla maaþ alan kiþiyi görmek  için  >> 4`ü  tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 5 ) Ýþçi çýkýþ iþlemleri  için  >> 5`i  tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 6 ) Ýþçiler kayýt dosyasýný okumak  için  >> 6`yý tuþlayýnýz. "<<endl<<endl;
	cout<<" ( 7 ) Programý kapatmak  için  >> 7`yi tuþlayýnýz. "<<endl<<endl;
	
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
		x=fopen("iþçiler.txt","r");
		cout<<"  # Baþlamadan önce uyarý !!!  "<<endl<<endl<<"  # Büyük harf küçük harf kullanýmýna dikkat ediniz ve sadece bir adet bilgi giriþi yapýnýz...  ";
		getch();
		system("cls");
		cout<<"  Merhaba, Kayýtlarý listelemek ve aramak için isim veya bölüm adý giriniz.  "<<endl;
		cout<<endl<<"  >>  ";
		cin>>y;
		system("cls");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{	
		if(strcmp(ad,y)==0 || strcmp(sad,y)==0 || strcmp(alan,y)==0)
		{
			cout<<" Ýþçinin Adý = "<<ad<<" && "<<"Soyadý = "<<sad<<" && "<<"Aldýðý Maaþ = "<<maas<<" TL && "<<"Çalýþtýðý Alan = "<<alan<<" && "<<"Sicil Numarasý = "<<sic<<endl<<endl;
			h++;
		}
			j++;
		}
		fclose(x);
		if(h==0)
		{
			cout<<endl<<endl;
  		cout<<"   >> Üzgünüm bu isimde herhangi bir kayýt bulunamadý. <<   "<<endl;
		cout<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		}
		
		else
		{
		cout<<endl<<endl;
  		cout<<"   >> Kayýtlar baþarýlý bir þekilde okundu. <<   "<<endl;
		cout<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		}
		getch();
		goto er0;	
		break;
		}
		
		case 2 : 
		{
		system("color b");
		system("cls");
		
		cout<<"   # Baþlamadan önce uyarý kapalý beta aþamasýnda olan programýmýzda henüz 2 isim giriþi kabul etmemektedir !!!"<<endl<<endl;
		cout<<"   # Her hangi bir hatayla karþýlaþmamak için iki isimli kiþilerin sadece bir isminin girilmesi rica olunur.";
		cout<<endl<<endl<<endl<<"   >> Baþlamak için herhangi bir tuþa basýnýz. <<   ";
		getch();
		system("cls");
		
		ofstream x("iþçiler.txt",ios::app);
		cout<<" Yeni iþçinin adý nedir ? >> ";
		cin>>y;
		x<<endl<<y<<" ";
		cout<<" Yeni iþçinin soyadý nedir ? >> ";
		cin>>y;
		x<<y<<" ";
		cout<<" Yeni iþçinin alacaðý maaþ kaç TL ? >> ";
		cin>>q;
		x<<q<<" ";
		cout<<" Yeni iþçinin çalýþacaðý alan nedir ? >> ";
		cin>>y;
		x<<y<<" ";
		cout<<" Yeni iþçinin '5' haneli sicil numarasý ? >> ";
		cin>>q;
		x<<q;
		x.close();
		cout<<endl<<endl;
		cout<<"   >> Kayýt baþarýlý bir þekilde tamamlandý. <<   "<<endl;
		cout<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		
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
		x=fopen("iþçiler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas[j],&alan,&sic)!=EOF)
		{
			mtop=mtop+maas[j];
			j++;
		}
		fclose(x);
		cout<<"   >> Þirketin toplam maaþ gideri = "<<mtop<<" TL";
		cout<<endl<<endl<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		
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
		x=fopen("iþçiler.txt","r");
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
		k=fopen("iþçiler.txt","r");
		cout<<"   >> En yüksek maaþ = "<<maas[j-1]<<" TL "<<endl<<endl;
		
			while(fscanf(k,"%s %s %d %s %d",&ad,&sad,&maas[p],&alan,&sic)!=EOF)
		{
			if(maas[j]==maas[p])
			{
				cout<<"   >> En yüksek maaþý alan "<<o<<". kiþi = "<<endl;
				cout<<"   >> Adý = "<<ad<<" && Soyadý = "<<sad<<"  "<<endl<<endl;
				o++;
			}
			p++;
		}
		fclose(k);
		cout<<endl<<endl<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		
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
		
		FILE *x=fopen("iþçiler.txt","a+");
		FILE *y=fopen("iþçiler2.txt","a+");
		cout<<"  >> Çýkýþ iþlemini yapmak istediðiniz iþçinin sicil numarasýný giriniz. ";
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
		remove("iþçiler.txt");
		rename("iþçiler2.txt","iþçiler.txt");
		system("cls");
		if(h==0)
		{
		cout<<endl<<endl;
		cout<<"   >> Ýþçi bulunamadý sicil numarasýna dikkat edip tekrar deneyiniz. <<   "<<endl;
		cout<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		}
		
		else
		{
		cout<<endl<<endl;
		cout<<"   >> Ýþçinin çýkýþ iþlemi baþarýlý bir þekilde gerçekleþtirilmiþtir <<   "<<endl;
		cout<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
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
		x=fopen("iþçiler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{
			cout<<i<<". Ýþçinin Adý = "<<ad<<" && "<<"Soyadý = "<<sad<<" && "<<"Aldýðý Maaþ = "<<maas<<" TL && "<<"Çalýþtýðý Alan = "<<alan<<" && "<<"Sicil Numarasý = "<<sic<<endl<<endl;
			i++;
		}
		fclose(x);
		cout<<endl<<endl;
  		cout<<"   >> Dosya baþarýlý bir þekilde okundu. <<   "<<endl;
		cout<<"   >> Baþlangýca dönmek için her hangi bir tuþa basýnýz. <<   ";
		
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
		cout<<" Program sonlandýrýlýyor iyi günler. ";
		cout<<endl<<endl;
		cout<<"   "<<4-i;
		sleep(1);
		}
		system("cls");
		cout<<endl<<endl<<"  PROGRAM SONLANDIRILDI  "<<endl<<endl<<"  Yusuf Holding Ýyi Günler Diler..."<<endl<<endl<<endl<<endl<<endl;
		break;
		}
	}
}
