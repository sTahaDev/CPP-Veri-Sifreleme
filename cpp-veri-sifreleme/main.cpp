#include "iostream"

using namespace std;

int main(){

    int girilensayi;
    cout << "Bir Sayı Giriniz: "; 
    cin>> girilensayi;
    int dizi[4];

    dizi[3] = girilensayi %10;
    dizi[2] = (girilensayi/10)%10;
    dizi[1] = (girilensayi/100)%10;
    dizi[0] = (girilensayi/1000)%10;

    int gecici;

    for (int i = 0; i < 4; i++)
    {
        dizi[i] = (dizi[i]+5)%10;
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<dizi[i];
    }
    cout << ""<<endl;

    //ŞİFREYİ ÇÖZME

    int dizi2[4];
    dizi2[3] = dizi[3];
    dizi2[2] = dizi[2];
    dizi2[1] = dizi[1];
    dizi2[0] = dizi[0];

    for (int i = 0; i < 4; i++)
    {
        dizi2[i] = ((dizi2[i]-5)+10)%10;
        
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<dizi2[i];
    }
    
    

    
    


    return 0;
}