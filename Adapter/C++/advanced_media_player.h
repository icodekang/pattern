#ifndef _ADVANCED_MEDIA_PLAYER_H_
#define _ADVANCED_MEDIA_PLAYER_H_

#include <iostream>

class AdvancedMediaPlayer
{
public:
    AdvancedMediaPlayer() = default;
    virtual void play_vlc(std::string file_name) = 0;
    virtual void play_mp4(std::string file_name) = 0;
    virtual ~AdvancedMediaPlayer() = default;
};

#endif /* _ADVANCED_MEDIA_PLAYER_H_ */