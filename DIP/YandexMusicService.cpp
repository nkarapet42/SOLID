#include "YandexMusicService.hpp"

void YandexMusicService::play(const std::string& track) const {
    std::cout << "[Yandex Music] Playing: " << track << std::endl;
}

void YandexMusicService::pause() const {
    std::cout << "[Yandex Music] Paused." << std::endl;
}

void YandexMusicService::stop() const {
    std::cout << "[Yandex Music] Stopped." << std::endl;
}
