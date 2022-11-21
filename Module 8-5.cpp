﻿/*Задание 5. Кенийский бегун
Что нужно сделать
Самуэль родился в Кении, и когда он немного подрос, то решил сделать карьеру профессионального бегуна. 
Во время тренировок на стадионе он стал запоминать свой темп на каждом километре с помощью простых наручных часов с секундной стрелкой. После тренировки он хотел бы узнать свой средний темп бега, 
но не может этого сделать: в Кении дети, решившие стать бегунами, обычно не ходят в школу. Помогите Самуэлю.
Напишите программу для расчёта среднего темпа бега. Темп измеряется в секундах на километр и означает количество времени, которое бегун потратит на преодоление одного километра. 
Программа должна получить на вход количество километров, покрытое за тренировку, и темп в секундах на каждый из этих километров. 
На выходе программа выводит на экран средний темп в минутах и секундах за всю тренировку. Обеспечьте контроль ввода.

Пример выполнения
Ввод:

Привет, Сэм! Сколько километров ты сегодня пробежал? 6

Какой у тебя был темп на километре 1? 305

Какой у тебя был темп на километре 2? 291

Какой у тебя был темп на километре 3? 343

Какой у тебя был темп на километре 4? 255

Какой у тебя был темп на километре 5? 279

Какой у тебя был темп на километре 6? 312

Вывод:

Твой средний темп за тренировку: 4 минуты 58 секунд.

Рекомендации по выполнению
Чтобы добиться требуемого результата, необходимо воспользоваться функцией округления.

Что оценивается
Важно, чтобы время среднего темпа было выведено в формате «минуты и секунды», как в примере.*/

#include <cmath>
#include <iostream>
#include <Windows.h>


int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    int numberKilometers;
    std::cin >> numberKilometers;
    while (numberKilometers < 0) {
        std::cout << "Количество километров должно быть больше 0. Введите снова: ";
        std::cin >> numberKilometers;
    }

    int elapsedKilometers = 1;
    float  elapsedSeconds = 0.0;

    while (elapsedKilometers <= numberKilometers) {

        std::cout << "Какой у тебя был темп на километре " << elapsedKilometers << "? ";

        int secondsPerKilometr;
        std::cin >> secondsPerKilometr;
        while (secondsPerKilometr < 0) {
            std::cout << "Количество секунд должно быть больше 0. Введите снова: ";
            std::cin >> secondsPerKilometr;
        }
        elapsedSeconds += secondsPerKilometr;
        elapsedKilometers++;
    }
    
    float averageTempo = std::round(elapsedSeconds / (float)numberKilometers);
            
    std::cout << "Твой средний темп за тренировку: " << (int)averageTempo / 60 << " мин. " << (int)averageTempo % 60 << " сек." << std::endl;
}