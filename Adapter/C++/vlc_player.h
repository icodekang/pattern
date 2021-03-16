#ifndef _VLC_PLAYER_H_
#define _VLC_PLAYER_H_

#include "advanced_media_player.h"

class VlcPlayer: public AdvancedMediaPlayer
{
public:
    VlcPlayer() = default;
    virtual void play_vlc(std::string file_name);
    virtual void play_mp4(std::string file_name);
    virtual ~VlcPlayer() = default;
};

#endif /* _VLC_PLAYER_H_ */