#include "audio_player.h"

void AudioPlayer::play(std::string audio_type, std::string file_name)
{
    if (!audio_type.compare("mp3")) {
        std::cout << "playing mp3 file name: " << file_name << std::endl;
    } else if (!audio_type.compare("vlc")
            || !audio_type.compare("mp4")) {
        media_adapter = new MediaAdapter(audio_type);
        media_adapter->play(audio_type, file_name);
    } else {
        std::cout << "invalid media " + audio_type + " format not supported" << std::endl;
    }
}

AudioPlayer::~AudioPlayer()
{
    if (media_adapter) {
        delete media_adapter;
        media_adapter = nullptr;
    }
}