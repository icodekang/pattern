#ifndef _MEDIA_PLAYER_H_
#define _MEDIA_PLAYER_H_

#include <iostream>

class MediaPlayer
{
public:
    MediaPlayer() = default;
    virtual void play(std::string audio_type, std::string file_name) = 0;
    virtual ~MediaPlayer() = default;
};

#endif /* _MEDIA_PLAYER_H_ */