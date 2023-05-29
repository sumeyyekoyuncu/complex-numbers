// kodlama2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
#include "complexnumber.h"

int main()
{
    complexnumber number1(6, 3);
    cout << "real:" << number1.getreal() << endl;
    cout << "imag:" << number1.getimag() << endl;
    number1.displaycomplex();
    complexnumber number2(3, -6);
    cout << "real:" << number2.getreal() << endl;
    cout << "imag:" << number2.getimag() << endl;
    number2.displaycomplex();
    complexnumber number3(number2);
    number3.displaycomplex();
    number3.setvalue(4, -7);
    number3.displaycomplex();
    cout << "________________add_________________" << endl;
    complexnumber resultmain;
    resultmain = number1.addcomplex(number2);
    resultmain.displaycomplex();
    cout << "________________substract_________________" << endl;
    complexnumber resultmain2;
    resultmain2 = number2.substractcomplex(number1);
    resultmain2.displaycomplex();
    cout << "________________multiply constant_________________" << endl;
    complexnumber resultmain3;
    resultmain3 = number2.multiplyconstant(4);
    resultmain3.displaycomplex();
    cout << "________________multiply complex_________________" << endl;
    complexnumber resultmain4;
    resultmain4 = number1.multiplycomplex(number2);
    resultmain4.displaycomplex();
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
