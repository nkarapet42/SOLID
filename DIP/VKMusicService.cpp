#include "VKMusicService.hpp"

void VKMusicService::play(const std::string& track) const {
    std::cout << "[VK Music] Playing: " << track << std::endl;
}

void VKMusicService::pause() const {
    std::cout << "[VK Music] Paused." << std::endl;
}

void VKMusicService::stop() const {
    std::cout << "[VK Music] Stopped." << std::endl;
}
