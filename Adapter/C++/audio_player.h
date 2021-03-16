#ifndef _AUDIO_PLAYER_H_
#define _AUDIO_PLAYER_H_

#include "media_adapter.h"
#include "media_player.h"

class AudioPlayer: public MediaPlayer
{
private:
    MediaAdapter *media_adapter;

public:
    AudioPlayer() = default;
    virtual void play(std::string audio_type, std::string file_name);
    virtual ~AudioPlayer();
};

#endif /* _AUDIO_PLAYER_H_ */