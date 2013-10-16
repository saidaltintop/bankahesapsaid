bankahesapsaid
==============
//saidaltıntop
#include<stdio.h>//"printf ve scanf" yi kullanabilmek için stdio.h kütüphanesini cagırdık
#include<conio.h>//"getch" i kullanmak için conio.h kütüphanesini cagırdık
#include<string.h>//strcmp yi kullanmak için bu kutuphaneyi cagırdık
#include<stdlib.h>//exit(1) i kullanmak için bu kutuphaneyi cagırdık
#include<Windows.h>//system("cls") yi kullanabilmek için bu kütüphaneyi cagırdık
    //kullanıcıadı saltintop, sifre 12345,para gönderilecek kişinin adi 
    char kullaniciadi[80],sifre[80],kisi[80];//kullanacaklarımızı tanımlıyoruz
	int secenek,menu,yatırılanpara,cekilenpara,gonderilenpara,cikis,hesabimdakipara = 1000;//kullanacaklarımızı tanımlıyoruz

void menuyazdir()//bu fonksiyon menü ve menü içindeki işlemlerin oldugu kısmı kapsar.bu fonksiyonu kulanıcı adı ve şifre istendiktn sonra isteyip bu fonksiyon için dekiler yapılacak.
{           printf("\nGiris Yapildi.\n");
            printf("\nHosgeldiniz %s altintop",kullaniciadi);
			printf("\n\n1.HESABIMDAKI PARA");
			printf("\n\n2.KENDI HESABIMA PARA YATIRMA");
			printf("\n\n3.PARA CEKME");
			printf("\n\n4.BASKA BIR HESABA PARA AKTARMA");
			printf("\n\n5.CIKIS\n\n");
			scanf("%d",&secenek);//girdigimiz degeri secenek e atıyoruz
			
			switch(secenek)	//(1,2,3,4,5) den hangisini secersek o işleme girmesi için switch i kullandık
			{	case 1:
			        system("cls");//o an ki ekranda olanları siler
					printf("\nHesabimdaki Para = %d TL\n\n(menu = 0 cikis = 5)\n\n",hesabimdakipara);//hesabımdaki parayı görmek için
                    scanf("%d",&menu);
					if(menu == 0)
					{
						system("cls");
					    menuyazdir( );
					}
					if(menu==5)
				       exit(1);//programı kapatmak için kullanıyoruz
					break;
				case 2:
					system("cls");
					printf("\nHesabimdaki Para = %d TL\n",hesabimdakipara);
					printf("\nYatirmak istediginiz para miktarini giriniz = ");
					scanf("%d",&yatırılanpara);//yatırmak istegimiz parayı yatırılanpara ya aktarıyoruz
					hesabimdakipara += yatırılanpara;//yatırılan parayı hesapdakine ekliyoruz
                    printf("\nISLEM BASARILI!!\n\nIslemdenden Sonra Hesabimdaki Para = %d TL\n\n(menu = 0 cikis = 5)\n\n",hesabimdakipara);
					scanf("%d",&menu);
					if(menu == 0)
					{
						system("cls");
					    menuyazdir( );//menuyazdır fonksiyonunu getiriyoruz
					}
					if(menu==5)
				       exit(1);
					break;
				case 3:
					system("cls");
					printf("\nHesabimdaki Para = %d TL\n",hesabimdakipara);
					printf("\nCekmek istediginiz para miktarini giriniz = ");
					scanf("%d",&cekilenpara);//cekmek istedigimz parayı cekilenparaya atıyoruz
					   if(hesabimdakipara < cekilenpara)
					    	printf("\nYETERLİ PARA YOK!!");
				       else
					   {
				        hesabimdakipara -= cekilenpara;//cekilen parayı hesapdan cıkartıyoruz
                        printf("\nISLEM BASARILI!!\n\nIslemdenden Sonra Hesabimdaki Para = %d TL",hesabimdakipara);
			           }
					printf("\n\n(menu = 0 cikis = 5)\n\n");
					scanf("%d",&menu);
					   if(menu == 0)
					   {
						system("cls");
					    menuyazdir( );
					   }
					   if(menu==5)
				          exit(1);
					       break;
				case 4:
                    system("cls");
					printf("\nPara Gonderilecek kisinin adi = ");
					scanf("%s",&kisi);
					if(strcmp(kisi,"pau")==0)
					{
					   printf("\nHesabimdaki Para = %d TL\n",hesabimdakipara);
					   printf("\nGondermek istediginiz para miktarini giriniz = ");
					   scanf("%d",&gonderilenpara);
					   if(hesabimdakipara < gonderilenpara)
					     	 printf("\nYETERLİ PARA YOK!!");
					   else
					   {
					      hesabimdakipara -= gonderilenpara;
                          printf("\nISLEM BASARILI!!\n\nIslemdenden Sonra Hesabimdaki Para = %d TL",hesabimdakipara);
					      printf("\n\nPamukkale Universtesine %d TL gonderildi..",gonderilenpara);
					   }
					}
					else
				       printf("\nBoyle bir hesap bulunamamaktadir!!!");
					   printf("\n\n(menu = 0 cikis = 5)\n\n");
					   scanf("%d",&menu);
					
					if(menu == 0)
					{
						system("cls");
					    menuyazdir( );
					}
					if(menu==5)
				       exit(1);
					break;
			   	case 5:
					exit(1);
					break;
				default:
					printf("1,2,3,4,5 sayilarindan birini giriniz");
					break;

			}_getch();//console ekranının kendi kendine kapanmaması için yazdık
 }
//saidaltıntop
void main()
{
  for( ; ;)
   {
    system("cls");
	printf("\nKullanici Adi = ");
	scanf("%s",&kullaniciadi);
	printf("\nSifre = ");
	scanf("%s",&sifre);
	if( strcmp(kullaniciadi, "said")==0)//burda kullanıcıadı ile tırnak içinde yazdıgım kelimeyi aynı olup olmadıgını kontrol eder ve aynıysa 0 a eşitler
	{
		if(strcmp(sifre,"1234")==0)//burda sifeyi karsılastırıyor
		{   
			system("cls");
		    menuyazdir( );
		}
		else 
		{   
			printf("\nYANLIS SIFRE(cikis = 5 , Tekrar Dene = 0)\n\n");
			scanf("%d",&cikis);
			if(cikis==5)
				exit(1);
		}
	}
	else
	{   //saidaltıntop
		printf("\nBOYLE BIR KULLANICI ADI BULUNMAMAKDADIR!(cikis = 5 , Tekrar Dene = 0)\n\n");
		scanf("%d",&cikis);
			if(cikis==5)
				exit(1);
	}
   }
	_getch();
}


 
