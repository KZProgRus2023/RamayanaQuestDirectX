#include <iostream>
#include <string>

int main() {
    std::string heroName;
    int choice;

    // Introduction
    std::cout << "����� ���������� � ����� �� ������ ������� (DirectX11)!" << std::endl;
    std::cout << "���� ���, ���������� �����?" << std::endl;
    std::cin >> heroName;

    // Chapter 1
    std::cout << "����� 1: ������� � �������" << std::endl;
    std::cout << "� ����� " << heroName << " �������� �������� ������." << std::endl;
    std::cout << "�� ������ �������, ����� ���� ������: 1 - �������, 2 - �����." << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << heroName << " ������ ������� ����." << std::endl;
        std::cout << "��� ������� � ������ ����� � ���� ������� ������ ��������� ����." << std::endl;
    }
    else if (choice == 2) {
        std::cout << heroName << " ������ ����� ����." << std::endl;
        std::cout << "�� ����� ��������� ������ � �������� ������� ��������� ��������� ����." << std::endl;
    }

    // Chapter 2
    std::cout << std::endl;
    std::cout << "����� 2: ����������� �� ��� �����" << std::endl;
    std::cout << "�� ����������� � ������ ����������� � ����������� ������ ������." << std::endl;
    std::cout << "�� ���� �� ��������� ��������� ���������, �� ����������� ��������� � �����." << std::endl;

    // Chapter 3
    std::cout << std::endl;
    std::cout << "����� 3: ��������� ��������" << std::endl;
    std::cout << "�������� �������� ������ ���������������� �������." << std::endl;
    std::cout << "�� ������� � ����� ������, ����� ������ ��������� ����." << std::endl;
    std::cout << "������� ��� ���� ��������� �������� � ����� �������." << std::endl;

    // Conclusion
    std::cout << std::endl;
    std::cout << "����������, " << heroName << "! �� ������� ������ ����� �� ������ ������� (DirectX11)." << std::endl;

    return 0;
}