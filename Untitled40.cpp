#include <iostream>

using namespace std;

//mersanne sayılarının örnek kodları
int ust (int t, int u)//t=taban , u=üssü
{
	int sonuc = 1;
	for (int i=1; i<=u; i++){
		sonuc = sonuc * t;//t^u = t*t*t*t*.....(u tane)
	}
	return sonuc;
}

//asal sayılarının örnek kodları
bool asalmi (int x)
	{
		for (int i=2; i<x; i++)
		{
			if(x%i==0)/*Eğer 2 ve artan değerlerden herhangi 
			birine bölündüğünde sıfır kalıyorsa false(yanlış, asal değil)
			olarak ata diyoruz... */
			{
				return false;
			}
		}
		return true;//diğer durumlarda asal sayı olduğu için ,
		            //true(doğru) döndürüyoruz.
	}

int main()
{
	int c=0;//kontrol değişkeni olarak atanmıştır,içinde asal
	        //mersanne sayılarını tutacaktır.
	for(double i=2; c<20; i++){
		if(asalmi(ust(2,i)-1)){
			cout << ust(2,i)-1 << endl;
			c++;
		}
	}
}
/*
İlk 20 asal mersanne sayının yazılmasını beklerken, ekranda 
oluşan değerler 20'den daha azdır. Bunun sebebi, asal olan 
mersanne sayılarının ilk 7-8 tanesinden sonrasının hızlı 
bir şekilde çok basamaklı ve c++'ın şimdilik hesaplayamayacağı
boyutta olmasından kaynaklanmaktadır.
*/
