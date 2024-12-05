#include <iostream>

int main() {
    int fileSize, downloadSpeed;

    std::cout << "Укажите размер файла для скачивания (в МБ): ";
    std::cin >> fileSize;
    std::cout << "Какова скорость вашего соединения (в МБ/с): ";
    std::cin >> downloadSpeed;

    if (fileSize <= 0 || downloadSpeed <= 0) {
        std::cout << "Ошибка: размеры файла и скорость должны быть положительными!" << std::endl;
        return 1;
    }

    int downloaded = 0, seconds = 0;

    while (downloaded < fileSize) {
        seconds++;
        downloaded += downloadSpeed;
        if (downloaded > fileSize) downloaded = fileSize;  

        int percent = (downloaded * 100) / fileSize;
        std::cout << "Прошло " << seconds << " сек. Скачано " << downloaded
             << " из " << fileSize << " МБ (" << percent << "%)." << std::endl;
    }

    std::cout << "Загрузка завершена за " << seconds << " секунд." << std::endl;
    return 0;
}
