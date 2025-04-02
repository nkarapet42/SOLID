#include "SpotifyMusicService.hpp"

void SpotifyMusicService::play(const std::string& track) const {
    std::cout << "[Spotify Music] Playing: " << track << std::endl;
}

void SpotifyMusicService::pause() const {
    std::cout << "[Spotify Music] Paused." << std::endl;
}

void SpotifyMusicService::stop() const {
    std::cout << "[Spotify Music] Stopped." << std::endl;
}
