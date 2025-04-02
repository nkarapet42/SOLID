#ifndef MUSICPLAYER_HPP
# define MUSICPLAYER_HPP

#include "IMusicService.hpp"

class MusicPlayer {
private:
    IMusicService* musicService;

public:
    MusicPlayer(IMusicService* service);
    void play(const std::string& track);
    void pause();
    void stop();
    void setService(IMusicService* service);
};

#endif
