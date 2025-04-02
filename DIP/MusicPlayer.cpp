#include "MusicPlayer.hpp"

MusicPlayer::MusicPlayer(IMusicService* service) : musicService(service) {}

void MusicPlayer::play(const std::string& track) {
    if (musicService)
        musicService->play(track);
}

void MusicPlayer::pause() {
    if (musicService)
        musicService->pause();
}

void MusicPlayer::stop() {
    if (musicService)
        musicService->stop();
}

void MusicPlayer::setService(IMusicService* service) {
    if (musicService)
        delete musicService;
    musicService = service;
}
