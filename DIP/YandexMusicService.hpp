#ifndef YANDEXMUSICSERVICE_HPP
# define YANDEXMUSICSERVICE_HPP

#include "IMusicService.hpp"
#include <iostream>

class YandexMusicService : public IMusicService {
public:
    void play(const std::string& track) const override;
    void pause() const override;
    void stop() const override;
};

#endif
