#include "media_adapter.h"

MediaAdapter::MediaAdapter(std::string audio_type)
{
    if (!audio_type.compare("vlc")) {
        advance_music_player = new VlcPlayer();
    } else if (!audio_type.compare("mp4")) {
        advance_music_player = new Mp4Player();
    } else {
        advance_music_player = nullptr;
    }
}

void MediaAdapter::play(std::string audio_type, std::string file_name)
{
    if (!audio_type.compare("vlc")) {
        advance_music_player->play_vlc(file_name);
    } else if(!audio_type.compare("mp4")) {
        advance_music_player->play_mp4(file_name);
    }
}

MediaAdapter::~MediaAdapter()
{
    if (advance_music_player) {
        delete advance_music_player;
        advance_music_player = nullptr;
    }
}