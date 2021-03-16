#ifndef _MP4_PLAYER_H_
#define _MP4_PLAYER_H_

#include "advanced_media_player.h"

class Mp4Player: public AdvancedMediaPlayer
{
public:
    Mp4Player() = default;
    virtual void play_vlc(std::string file_name);
    virtual void play_mp4(std::string file_name);
    virtual ~Mp4Player() = default;
};

#endif /* _MP4_PLAYER_H_ */