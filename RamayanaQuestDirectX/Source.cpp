#include <iostream>
#include <string>

int main() {
    std::string heroName;
    int choice;

    // Introduction
    std::cout << "Добро пожаловать в квест по сюжету Рамаяны (DirectX11)!" << std::endl;
    std::cout << "Ваше имя, величайший герой?" << std::endl;
    std::cin >> heroName;

    // Chapter 1
    std::cout << "Глава 1: Встреча с Раваной" << std::endl;
    std::cout << "В жизни " << heroName << " наступил решающий момент." << std::endl;
    std::cout << "Вы должны выбрать, какой путь пройти: 1 - светлый, 2 - тёмный." << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << heroName << " выбрал светлый путь." << std::endl;
        std::cout << "Вас приняли в святой орден и дали задание спасти принцессу Ситу." << std::endl;
    }
    else if (choice == 2) {
        std::cout << heroName << " выбрал тёмный путь." << std::endl;
        std::cout << "Вы стали союзником Раваны и получили задание захватить принцессу Ситу." << std::endl;
    }

    // Chapter 2
    std::cout << std::endl;
    std::cout << "Глава 2: Путешествие во имя любви" << std::endl;
    std::cout << "Вы отправились в долгое путешествие в легендарной стране Аюдхье." << std::endl;
    std::cout << "На пути вы встретили множество испытаний, но продолжаете двигаться в перед." << std::endl;

    // Chapter 3
    std::cout << std::endl;
    std::cout << "Глава 3: Последнее сражение" << std::endl;
    std::cout << "Действие достигло своего кульминационного момента." << std::endl;
    std::cout << "Вы входите в замок Раваны, чтобы спасти принцессу Ситу." << std::endl;
    std::cout << "Впереди вас ждет финальное сражение с самим Раваной." << std::endl;

    // Conclusion
    std::cout << std::endl;
    std::cout << "Поздравляю, " << heroName << "! Вы успешно прошли квест по сюжету Рамаяны (DirectX11)." << std::endl;

    return 0;
}