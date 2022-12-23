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
	cout<<"   # * * * @yusufozd3mir * * * #                    X  X    X       X  X    X  X       ~GAZI UNIVERSTY~        "<<endl;
	cout<<"   # * * * * * * * * * * * * * #               XXXXXX  XXXXXX  XXXXXX  XXXXXX  X       >> Since 1926 <<        "<<endl<<endl<<endl;
	
	cout<<"   >> Address _ ANKARA, ALTINDAG, KARAPURCEK, 478.ST, 32/2 <<   "<<endl<<endl;
	
	cout<<"   >> Communication _ Tel = XXXX XXX XX XX _ Email = xxx@gmail.com  OR  xxx@hotmail.com <<   "<<endl<<endl<<endl<<endl;
	
	cout<<"   >> Press any key to start the program <<   ";
	
	getch();
	
	system("cls");
	
	cout<<"   # Başlamadan önce uyarı !!!"<<endl<<endl<<"   # Öncelikle kapalı beta dadır programımız oluşabilecek teknik hatalardan dolayı özür dileriz."<<endl<<endl;
	cout<<"   # Hatalar ve öneriler için iletişim kısmındaki bilgilerden bize ulaşabilirsiniz."<<endl<<endl;
	cout<<"   # Görsellik açısından ingilizce karakter kullanmanızı ve uygulamayı tam ekran moduna almanızı tavsiye ederiz."<<endl<<endl<<"   ______________________________________________";
	
	cout<<endl<<endl<<endl<<"   >> Başlamak için herhangi bir tuşa basınız. <<   ";
	
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
	
	cout<<" Merhaba size nasıl yardımcı olabilirim? "<<endl<<endl<<endl;
	
	cout<<" ( 1 ) İstenilen bölümde veya isimde kayıt aramak ve listelemek  için  >> 1`i  tuşlayınız. "<<endl<<endl;
	cout<<" ( 2 ) Yeni işçi giriş işlemi  için  >> 2`yi tuşlayınız. "<<endl<<endl;
	cout<<" ( 3 ) Tüm işçelerin toplamda alacakları maaşları görmek  için  >> 3`ü  tuşlayınız. "<<endl<<endl;
	cout<<" ( 4 ) En fazla maaş alan kişiyi görmek  için  >> 4`ü  tuşlayınız. "<<endl<<endl;
	cout<<" ( 5 ) İşçi çıkış işlemleri  için  >> 5`i  tuşlayınız. "<<endl<<endl;
	cout<<" ( 6 ) İşçiler kayıt dosyasını okumak  için  >> 6`yı tuşlayınız. "<<endl<<endl;
	cout<<" ( 7 ) Programı kapatmak  için  >> 7`yi tuşlayınız. "<<endl<<endl;
	
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
		x=fopen("işçiler.txt","r");
		cout<<"  # Başlamadan önce uyarı !!!  "<<endl<<endl<<"  # Büyük harf küçük harf kullanımına dikkat ediniz ve sadece bir adet bilgi girişi yapınız...  ";
		getch();
		system("cls");
		cout<<"  Merhaba, Kayıtları listelemek ve aramak için isim veya bölüm adı giriniz.  "<<endl;
		cout<<endl<<"  >>  ";
		cin>>y;
		system("cls");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{	
		if(strcmp(ad,y)==0 || strcmp(sad,y)==0 || strcmp(alan,y)==0)
		{
			cout<<" İşçinin Adı = "<<ad<<" && "<<"Soyadı = "<<sad<<" && "<<"Aldığı Maaş = "<<maas<<" TL && "<<"Çalıştığı Alan = "<<alan<<" && "<<"Sicil Numarası = "<<sic<<endl<<endl;
			h++;
		}
			j++;
		}
		fclose(x);
		if(h==0)
		{
			cout<<endl<<endl;
  		cout<<"   >> Üzgünüm bu isimde herhangi bir kayıt bulunamadı. <<   "<<endl;
		cout<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		}
		
		else
		{
		cout<<endl<<endl;
  		cout<<"   >> Kayıtlar başarılı bir şekilde okundu. <<   "<<endl;
		cout<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		}
		getch();
		goto er0;	
		break;
		}
		
		case 2 : 
		{
		system("color b");
		system("cls");
		
		cout<<"   # Başlamadan önce uyarı kapalı beta aşamasında olan programımızda henüz 2 isim girişi kabul etmemektedir !!!"<<endl<<endl;
		cout<<"   # Her hangi bir hatayla karşılaşmamak için iki isimli kişilerin sadece bir isminin girilmesi rica olunur.";
		cout<<endl<<endl<<endl<<"   >> Başlamak için herhangi bir tuşa basınız. <<   ";
		getch();
		system("cls");
		
		ofstream x("işçiler.txt",ios::app);
		cout<<" Yeni işçinin adı nedir ? >> ";
		cin>>y;
		x<<endl<<y<<" ";
		cout<<" Yeni işçinin soyadı nedir ? >> ";
		cin>>y;
		x<<y<<" ";
		cout<<" Yeni işçinin alacağı maaş kaç TL ? >> ";
		cin>>q;
		x<<q<<" ";
		cout<<" Yeni işçinin çalışacağı alan nedir ? >> ";
		cin>>y;
		x<<y<<" ";
		cout<<" Yeni işçinin '5' haneli sicil numarası ? >> ";
		cin>>q;
		x<<q;
		x.close();
		cout<<endl<<endl;
		cout<<"   >> Kayıt başarılı bir şekilde tamamlandı. <<   "<<endl;
		cout<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		
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
		x=fopen("işçiler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas[j],&alan,&sic)!=EOF)
		{
			mtop=mtop+maas[j];
			j++;
		}
		fclose(x);
		cout<<"   >> Şirketin toplam maaş gideri = "<<mtop<<" TL";
		cout<<endl<<endl<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		
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
		x=fopen("işçiler.txt","r");
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
		k=fopen("işçiler.txt","r");
		cout<<"   >> En yüksek maaş = "<<maas[j-1]<<" TL "<<endl<<endl;
		
			while(fscanf(k,"%s %s %d %s %d",&ad,&sad,&maas[p],&alan,&sic)!=EOF)
		{
			if(maas[j]==maas[p])
			{
				cout<<"   >> En yüksek maaşı alan "<<o<<". kişi = "<<endl;
				cout<<"   >> Adı = "<<ad<<" && Soyadı = "<<sad<<"  "<<endl<<endl;
				o++;
			}
			p++;
		}
		fclose(k);
		cout<<endl<<endl<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		
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
		
		FILE *x=fopen("işçiler.txt","a+");
		FILE *y=fopen("işçiler2.txt","a+");
		cout<<"  >> Çıkış işlemini yapmak istediğiniz işçinin sicil numarasını giriniz. ";
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
		remove("işçiler.txt");
		rename("işçiler2.txt","işçiler.txt");
		system("cls");
		if(h==0)
		{
		cout<<endl<<endl;
		cout<<"   >> İşçi bulunamadı sicil numarasına dikkat edip tekrar deneyiniz. <<   "<<endl;
		cout<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		}
		
		else
		{
		cout<<endl<<endl;
		cout<<"   >> İşçinin çıkış işlemi başarılı bir şekilde gerçekleştirilmiştir <<   "<<endl;
		cout<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
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
		x=fopen("işçiler.txt","r");
		while(fscanf(x,"%s %s %d %s %d",&ad,&sad,&maas,&alan,&sic)!=EOF)
		{
			cout<<i<<". İşçinin Adı = "<<ad<<" && "<<"Soyadı = "<<sad<<" && "<<"Aldığı Maaş = "<<maas<<" TL && "<<"Çalıştığı Alan = "<<alan<<" && "<<"Sicil Numarası = "<<sic<<endl<<endl;
			i++;
		}
		fclose(x);
		cout<<endl<<endl;
  		cout<<"   >> Dosya başarılı bir şekilde okundu. <<   "<<endl;
		cout<<"   >> Başlangıca dönmek için her hangi bir tuşa basınız. <<   ";
		
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
		cout<<" Program sonlandırılıyor iyi günler. ";
		cout<<endl<<endl;
		cout<<"   "<<4-i;
		sleep(1);
		}
		system("cls");
		cout<<endl<<endl<<"  PROGRAM SONLANDIRILDI  "<<endl<<endl<<"  Yusuf Holding İyi Günler Diler..."<<endl<<endl<<endl<<endl<<endl;
		break;
		}
	}
}
