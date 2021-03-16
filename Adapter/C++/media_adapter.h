#ifndef _MEDIA_ADAPTER_H_
#define _MEDIA_ADAPTER_H_

#include "media_player.h"
#include "vlc_player.h"
#include "mp4_player.h"

class MediaAdapter: public MediaPlayer
{
private:
    AdvancedMediaPlayer *advance_music_player;

public:
    MediaAdapter(std::string audio_type);
    virtual void play(std::string audio_type, std::string file_name);
    virtual ~MediaAdapter();
};

#endif /* _MEDIA_ADAPTER_H_ */