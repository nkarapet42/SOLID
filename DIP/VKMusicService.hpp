#ifndef VKMUSICSERVICE_HPP
# define VKMUSICSERVICE_HPP

#include "IMusicService.hpp"
#include <iostream>

class VKMusicService : public IMusicService {
public:
    void play(const std::string& track) const override;
    void pause() const override;
    void stop() const override;
};

#endif
