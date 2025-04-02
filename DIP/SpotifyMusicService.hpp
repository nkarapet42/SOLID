#ifndef SPOTIFYMUSICSERVICE_HPP
# define SPOTIFYMUSICSERVICE_HPP

#include "IMusicService.hpp"
#include <iostream>

class SpotifyMusicService : public IMusicService {
public:
    void play(const std::string& track) const override;
    void pause() const override;
    void stop() const override;
};

#endif
