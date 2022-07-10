#include <iostream>
#include <string>
#include "ielectronic.h"
#include "fridge.h"
#include "ipod.h"
#include "pocketbook.h"
#include "washingmachine.h"
#include "consumerelectronic.h"
#include "notebook.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    setlocale(LC_ALL, "");
    // 1. Инициализируем товарный склад (массив указателей на IElectronics - базовый класс электроники)
    const int STORE_SIZE = 6;
    IElectronic* eldorado[STORE_SIZE];

    // 2. Описываем товары
    auto myfridge = new Fridge("01-м", "Брянск", 1000, EColor::WHITE);
    myfridge->setWidth(1000);
    myfridge->setHeight(2000);
    myfridge->setWeight(300);
    myfridge->setPower(100500);
    myfridge->setEnergyClass(EClass::F);
    myfridge->setCableType(ECableType::RU);


    auto mynotebook = new Notebook("HewelettPackard", "Pavillion", 50000, EColor::BLACK);
    mynotebook->setProcessor("Core i5 9th gen");
    mynotebook->setDiagonal("17''");
    mynotebook->setWidth(40);
    mynotebook->setHeight(30);
    mynotebook->setWeight(5);
    mynotebook->setCableLength(2);
    mynotebook->setVideocard("GTX 1660 Super");
    mynotebook->setBatteryLife(10000);
    mynotebook->setAccumulator(true);


    auto mypocket = new PocketBook();
    mypocket->setInktype("eInk");
    mypocket->setDiagonal(5);
    mypocket->setBatteryLife(3000);
    mypocket->setWidth(10);
    mypocket->setHeight(10);
    mypocket->setWeight(0.200);


    auto mywash = new WashingMachine("A 400 x", "Ardo", 5000, EColor::BLUE);
    mywash->setWidth(56);
    mywash->setHeight(80);
    mywash->setWeight(60);
    mywash->setCableType(ECableType::EU);
    mywash->setCableLength(2);
    mywash->setDry(true);
    mywash->setSpin(true);


    auto myi    = new Ipod(32399, true, 5000);
    mywash->setWidth(5);
    mywash->setHeight(8);
    mywash->setWeight(1);
    myi->setFormats("MP3, FLAC, WAV, OGG");
    myi->setWeight(100);

    // 3. Заполняем товарный склад. Все товары наследуются от IElectronics и от класса Product
    eldorado[0] = myfridge;
    eldorado[1] = mynotebook;
    eldorado[2] = mypocket;
    eldorado[3] = mywash;
    eldorado[4] = myi;

    // 4. Выбор товара и просмотр его характеристики
    std::cout << "Вэлкам ту Эльдорадо! " << endl;

    bool open = true;
        while (open)
        {
            cout << endl;
            cout << "Выберите продукт : 1 - Холодильник, 2 - Ноутбук, 3 - Читалка, 4 - Стиральная Машина, 5 - iPod, 0 - чтобы выйти" << endl;
            int choice;
            cin >> choice;
            cout << endl;
            switch (choice)
            {
                case 1:
                    eldorado[0]->Show();
                    break;

                case 2:
                    eldorado[1]->Show();
                    break;

                case 3:
                    eldorado[2]->Show();
                    break;

                case 4:
                    eldorado[3]->Show();
                    break;

                case 5:
                    eldorado[4]->Show();
                    break;

                case 0:
                    open = false;
                    break;

                default:
                    cout << "Выберите продукт от 1 до 5 или 0, чтобы выйти" << endl;
                break;
            }
            cout << endl;
        }


    // 5. Очистка
    for (int i = 0; i < STORE_SIZE; i++) delete eldorado[i];

    return 0;
}
