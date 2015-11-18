#ifndef AUDIOHANDLER_H
#define AUDIOHANDLER_H

#include <iostream>
#include <stdio.h>

#include "portaudio.h"

class AudioHandler {

public:

    AudioHandler();

    ~AudioHandler();

    void initialize();

    void closeAudio();

	float getAmplitude() { return mAmplitude; };

    static int audioCallback(const void *inputbuffer, void *outputbuffer,
		unsigned long framesperbuffer,
		const PaStreamCallbackTimeInfo* timeinfo,
		PaStreamCallbackFlags statusflags,
		void *userdata);

    void printError(PaError err);

    float incrementAngle();

private:

    float mAmplitude;
    PaStream *mStream;
};

#endif // AUDIOHANDLER_H
