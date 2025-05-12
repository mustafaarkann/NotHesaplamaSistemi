/****************************************************************************
**					SAKARYA ÜNİVERSİTESİ
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
**				    BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
**				          PROGRAMLAMAYA GİRİŞİ DERSİ
**
**				ÖDEV NUMARASI 1 :
**				ÖĞRENCİ ADI MUSTAFA ARKAN:
**				ÖĞRENCİ NUMARASI b231210086:
**				DERS GRUBU A :
****************************************************************************/







#include <iostream>      
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include<locale.h>
#include <iomanip>
#include<cmath>
#include<set>

using namespace std; 




int main() {


	struct öğrenci {  // ÖĞRENCİ İSİMLİ STRUCT YAPISI OLUŞTURDUM.

		string adı;
		string soyadı;
		int vize;
		int ödev1;
		int ödev2;
		int kısasınav1;
		int kısasınav2;
		int notu;
		int toplamnot;
		int yıliçinotu;
		float vizeağırlık;
		float kısasınav1ağırlık;
		float kısasınav2ağırlık;
		float ödev1ağırlık;
		float ödev2ağırlık;
		float yıliçitoplamnot;
		








	};

	setlocale(LC_ALL, "Turkish");//TÜRKÇE KARAKTER KULLANMAK İÇİN EKLEDİM.

	int öğrenciSayısı;

	srand(time(0));

	cout << "Lütfen Sınıfın Öğrenci Sayısını Giriniz:";    // SINIFIN ÖĞRENCİ SAYISI GİRİLİYOR
	cin >> öğrenciSayısı;
	cout << " **********************************************************" << endl;



	string isimler[30] = { "Mehmet Ali","Berat","Murat","Mustafa","Yusuf","Eymen"       // İSİM DİZİSİ OLUŞTURDUM.
	,"Miraç","Hamza","Ümit","Kerem","Ferdi","İrfan" , "Can","Ahmet","Mısra","Zeynep","Elif"
	,"Defne","Semra","Eslem","Yasemin","Alparslan","Muhammaed","Aras","Zümra","Yağmur","Nehir"
	,"Derin","Ayaz","Mert" };

	string soyisimler[30] = { "Balım","Resuloglu","Arkan","Kara","Yılmaz","Erdoğan",    //SOYİSİM DİZİSİ OLUŞTURDUM
	"İnce","Özdağ","Mete","Demir","Kutlu","Zilan","Doğan","Bayram","Kısa","Uzun","Şimşek",
	"Yıldırır","Kocaman","Terim","Polat","Canım","Türk","Türkmen","Karadağ","Çiftçi","Karaman",
	"Özer","İnan", "Meral" };

	multiset<string>harfnotları = {};

	vector<öğrenci>değerler;

	for (int i = 0; i < öğrenciSayısı; i++)  //  ÖĞRENCİLERİN İSİMLERİ RASTGELE SEÇİLİYOR
	{
		öğrenci rastgele;
		int index = rand() % 30;
		rastgele.adı = isimler[index];
		index = rand() % 30;
		rastgele.soyadı = soyisimler[index];
		değerler.push_back(rastgele);

	}

	

	for (int i = 0; i < öğrenciSayısı; i++)   //ÖĞRENCİ VİZE NOTLARI SEÇİLİYOR
	{
		if (i<öğrenciSayısı*0.2)
		{
			değerler[i].vize = 80+rand() % 21;
		}

		else if(öğrenciSayısı * 0.2<i && i<öğrenciSayısı*0.7 )
		{
			değerler[i].vize = 50 + rand() % 31;
		}
		
		else
		{
			değerler[i].vize = rand() % 51;
		}
		
	}

	for (int i = 0; i < öğrenciSayısı; i++) //ÖĞRENCİ KISASINAV1 NOTLARI SEÇİLİYOR
	{
		if (i < öğrenciSayısı * 0.2)
		{
			değerler[i].kısasınav1 = 80 + rand() % 21;
		}

		else if (öğrenciSayısı * 0.2 < i && i < öğrenciSayısı * 0.7)
		{
			değerler[i].kısasınav1 = 50 + rand() % 31;
		}

		else
		{
			değerler[i].kısasınav1 = rand() % 51;
		}

	}


	for (int i = 0; i < öğrenciSayısı; i++)   // ÖĞRENCİ KISASINAV2 NOTLARI SEÇİLİYOR
	{
		if (i < öğrenciSayısı * 0.2)
		{
			değerler[i].kısasınav2 = 80 + rand() % 21;
		}

		else if (öğrenciSayısı * 0.2 < i && i < öğrenciSayısı * 0.7)
		{
			değerler[i].kısasınav2 = 50 + rand() % 31;
		}

		else
		{
			değerler[i].kısasınav2 = rand() % 51;
		}

	}

	for (int i = 0; i < öğrenciSayısı; i++)    //ÖĞRENCİ ÖDEV1 NOTLARI SEÇİLİYOR
	{
		if (i < öğrenciSayısı * 0.2)
		{
			değerler[i].ödev1 = 80 + rand() % 21;
		}

		else if (öğrenciSayısı * 0.2 < i && i < öğrenciSayısı * 0.7)
		{
			değerler[i].ödev1 = 50 + rand() % 31;
		}

		else
		{
			değerler[i].ödev1 = rand() % 51;
		}

	}

	for (int i = 0; i < öğrenciSayısı; i++)     // ÖĞRENCİ ÖDEV2 NOTLARI SEÇİLİYOR
	{
		if (i < öğrenciSayısı * 0.2)
		{
			değerler[i].ödev2 = 80 + rand() % 21;
		}

		else if (öğrenciSayısı * 0.2 < i && i < öğrenciSayısı * 0.7)
		{
			değerler[i].ödev2 = 50 + rand() % 31;
		}

		else
		{
			değerler[i].ödev2 = rand() % 51;
		}

	}

	float vizeağırlık;                  // DERS AĞIRLIKLARINI HESAPLAMAK İÇİN DEĞİŞKENLER TANIMLANIYOR
	float kısasınav1ağırlık;
	float kısasınav2ağırlık;
	float ödev1ağırlık;
	float ödev2ağırlık;


	cout << "Lütfen ders ağırlıklarını giriniz(Örn: 0.2 vb.) " << endl;     // AĞIRLIKLAR KLAVYEDEN GİRİLİYOR
	cout << endl;
	cout << "vize ağırlığını giriniz:"; 
	cin >> vizeağırlık;
	cout << endl;
	cout << "kısa sınav1 ağırlığını giriniz:";
	cin >> kısasınav1ağırlık;
	cout << endl;
	cout << "kısa sınav2 ağırlığını girininiz:";
	cin >> kısasınav2ağırlık;
	cout << endl;
	cout << "ödev1 ağırlığının giriniz:";
	cin >> ödev1ağırlık;
	cout << endl;
	cout << "ödev2 ağırlığının giriniz:";
	cin >> ödev2ağırlık;

	for (int i = 0; i < öğrenciSayısı; i++)    //YIL İÇİ NOTU HESAPLANIYOR
	{
		değerler[i].yıliçinotu = değerler[i].vize * vizeağırlık + değerler[i].kısasınav1 * kısasınav1ağırlık + değerler[i].kısasınav2 * kısasınav2ağırlık + değerler[i].ödev1 * ödev1ağırlık + değerler[i].ödev2 * ödev2ağırlık;
	}

	for (int i = 0; i < öğrenciSayısı; i++)   // ÖĞRENCİ NOTLARI İSİMLERİYLE BİRLİKTE EKRANA YAZDIRILIYOR
	{
		cout << "Öğrenci " << i + 1 << ": " << değerler[i].adı << " " << değerler[i].soyadı <<" vize notu:" << setw(3)<<değerler[i].vize
			<<setw(6)<<"kısasınav1 notu:"<<setw(3)<<değerler[i].kısasınav1<<setw(6)<<"kısasınav2 notu:" <<setw(3)<< değerler[i].kısasınav2
			<<setw(6)<<"ödev1 notu:"<<setw(3) << değerler[i].ödev1<< setw(6)<<"ödev2 notu:" <<setw(3)<< değerler[i].ödev2 <<"yıl içi notu:" 
			<< değerler[i].yıliçinotu << endl;
	}

	


	değerler[0].toplamnot = 0;                      //  ORTALAMA HESAPLANIYOR

	for (int i = 0; i < öğrenciSayısı; i++)
	{
		değerler[i].toplamnot += değerler[i].vize + değerler[i].kısasınav1 + değerler[i].kısasınav2 + değerler[i].ödev1 + değerler[i].ödev2;
	}
	
	

	cout << "sınıfın ortalaması:" << setw(3) << değerler[0].toplamnot/öğrenciSayısı;    //ORTALAMA EKRANA YAZ

	
	
	

	for (int i = 0; i < öğrenciSayısı; i++) //HARF NOTU YAZDIRILIYOR
	{
		değerler[i].yıliçinotu = değerler[i].vize * vizeağırlık + değerler[i].kısasınav1 * kısasınav1ağırlık + değerler[i].kısasınav2 * kısasınav2ağırlık + değerler[i].ödev1 * ödev1ağırlık + değerler[i].ödev2 * ödev2ağırlık;
	

		if (değerler[i].yıliçinotu >= 90 && değerler[i].yıliçinotu <= 100) //  90 VE 100 ARASINDAKİ NOTLARA AA DEĞERİ GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "AA" << endl;
			harfnotları.insert("AA");
		}

		else if (değerler[i].yıliçinotu >= 85 && değerler[i].yıliçinotu <= 89.99) // 85 VE 90 ARASINDAKİ NOTLARA BA GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "BA" << endl;
			harfnotları.insert("BA");
		}


		else if (değerler[i].yıliçinotu >= 80 && değerler[i].yıliçinotu <= 84.99)   // 80 VE 85 ARASINDAKİ NOTLARA BB GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "BB" << endl;
			harfnotları.insert("BB");
		}

		else if (değerler[i].yıliçinotu >= 75 && değerler[i].yıliçinotu <= 79.99)  // 75 VE 80 ARASINDAKİ NOTLARA CB GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "CB" << endl;
			harfnotları.insert("CB");
		}

		else if (değerler[i].yıliçinotu >= 65 && değerler[i].yıliçinotu <= 74.99) // 65 VE 75 ARASINDAKİ NOTLARA CC GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "CC" << endl;
			harfnotları.insert("CC");
		}

		else if (değerler[i].yıliçinotu >= 58 && değerler[i].yıliçinotu <= 64.99)// 58 VE 65 ARASINDAKİ NOTLARA DC GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "DC" << endl;
			harfnotları.insert("DC");
		}

		else if (değerler[i].yıliçinotu >= 50 && değerler[i].yıliçinotu <= 57.99) // 50 VE 58 ARASINDAKİ NOTLARA DD GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "DD" << endl;
			harfnotları.insert("DD");
		}

		else if (değerler[i].yıliçinotu >= 40 && değerler[i].yıliçinotu <= 49.99) // 40 VE 50 ARASINDAKİ NOTLARA FD GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "FD" << endl;
			harfnotları.insert("FD");
		}

		else if (değerler[i].yıliçinotu >= 0 && değerler[i].yıliçinotu <= 39.99) // 0 VE 40 ARASINDAKİ NOTLARA FF GİR
		{
			cout << "Öğrenci " << i+1 << ": " << "-----" << " Harf Notu:   " << "FF" << endl;
			harfnotları.insert("FF");
		}

	}

	cout << harfnotları.count("AA" )<< endl; // HARF NOTLARINI EKRANA YAZDIRMA
	cout << harfnotları.count("BA") << endl;
	cout << harfnotları.count("BB") << endl;
	cout << harfnotları.count("CB") << endl;
	cout << harfnotları.count("CC") << endl;
	cout << harfnotları.count("DC") << endl;
	cout << harfnotları.count("DD") << endl;
	cout << harfnotları.count("FD") << endl;
	cout << harfnotları.count("FF") << endl;
	

	int yılsonugeçmenotu;

	cout << "lütfen yıl sonu geçme notunu giriniz:"; // YIL SONU GEÇME NOTUNU İSTE 
	cin >> yılsonugeçmenotu;


	for (int i = 0; i < öğrenciSayısı; i++) // YIL SONU GTEÇME NOTUNUN ALTINDA KALANLARA KALDI,ÜSTÜNDEKİLERE GEÇTİ YAZDIR
	{

		if (değerler[i].yıliçinotu < yılsonugeçmenotu)
		{
			cout << "Öğrenci " << i+1 << ": " << "kaldı" << endl;
		}
		else
		{
			cout << "Öğrenci " << i+1 << ": " << "geçti" << endl;
		}
	}

	
	int enbüyükDeğer = değerler[0].yıliçinotu; // EN BÜYÜK VE EN KÜÇÜK NOTLARI YAZDIR
	for (int i = 0; i < öğrenciSayısı; i++)
	{
		if (enbüyükDeğer< değerler[i].yıliçinotu)
		{
			enbüyükDeğer = değerler[i].yıliçinotu;
		}
	}

	cout << "en büyük not:" << enbüyükDeğer << endl;


	int enküçükDeğer = değerler[0].yıliçinotu;
	for (int i = 0; i < öğrenciSayısı; i++)
	{
		if (enküçükDeğer > değerler[i].yıliçinotu)
		{
			enküçükDeğer = değerler[i].yıliçinotu;
		}
	}

	cout << "en küçük not:" << enküçükDeğer << endl;

	

	
	
	double toplam = 0; // ORTALAMA BULMA
	for (int i = 0; i < öğrenciSayısı; ++i) {
		toplam += değerler[i].yıliçinotu;
	}
	double ortalama = toplam / öğrenciSayısı;


	double karelerToplami = 0;   // KARELER TOPLAMINI BULMA
	for (int i = 0; i < öğrenciSayısı; ++i) {
		karelerToplami += pow(değerler[i].yıliçinotu - ortalama, 2);
	}

	
	double standartSapma = sqrt(karelerToplami / öğrenciSayısı);  // STANDART SAPMAYI HESAPLAMA

	cout << "Standart Sapma: " << standartSapma << endl;  // SONUCU EKRANA YAZDIRMA

	return 0;
}






