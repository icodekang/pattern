#include "audio_player.h"

int main()
{
    AudioPlayer *audio_player = new AudioPlayer();

    audio_player->play("mp3", "beyond the horizon.mp3");
    audio_player->play("mp4", "alone.mp4");
    audio_player->play("vlc", "far far away.vlc");
    audio_player->play("avi", "mind me.avi");

    return 0;
}