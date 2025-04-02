#include <iostream>
#include "MusicPlayer.hpp"
#include "VKMusicService.hpp"
#include "YandexMusicService.hpp"
#include "SpotifyMusicService.hpp"

int main() {
    MusicPlayer player(new VKMusicService());
    player.play("Imagine Dragons - Believer");
    player.pause();
    player.stop();
    
    player.setService(new YandexMusicService());
    player.play("Ленинград - Экспонат");
    player.pause();
    player.stop();
    
    player.setService(new SpotifyMusicService());
    player.play("Millenaire - One Shot");
    player.pause();
    player.stop();
   
    return 0;
}
