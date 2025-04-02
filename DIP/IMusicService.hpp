#ifndef IMUSICSERVICE_HPP
# define IMUSICSERVICE_HPP

#include <string>

class IMusicService {
public:
    virtual ~IMusicService() {}
    virtual void play(const std::string& track) const = 0;
    virtual void pause() const = 0;
    virtual void stop() const = 0;
};

#endif
