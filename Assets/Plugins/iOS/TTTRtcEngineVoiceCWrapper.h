#if !defined(__TTTRTCENGINEVOICECWRAPPER_H__)
#define __TTTRTCENGINEVOICECWRAPPER_H__

#if defined(__cplusplus)
extern "C" {
#endif
    int getMessageCount(void);
    char *getMessage(void);
    void freeObject(void *obj);
    
    void createEngine(const char *appId);
    void deleteEngine(void);
    const char *getSdkVersion(void);
    int joinChannel(const char *channelKey, const char *channelName, unsigned int uid);
    int leaveChannel(void);
    int setEnableSpeakerphone(int enabled);
    int isSpeakerphoneEnabled(void);
    int setDefaultAudioRoutetoSpeakerphone(int defaultToSpeaker);
    int setSpeakerphoneVolume(int volume);
    int enableAudioVolumeIndication(int interval, int smooth);
    int startAudioMixing(const char *filePath, int loopback, int replace, int cycle);
    int stopAudioMixing(void);
    int pauseAudioMixing(void);
    int resumeAudioMixing(void);
    int adjustAudioMixingVolume(int volume);
    int getAudioMixingDuration(void);
    int getAudioMixingCurrentPosition(void);
    int setAudioMixingPosition(int pos);
    int muteLocalAudioStream(int muted);
    int muteAllRemoteAudioStreams(int muted);
    int muteRemoteAudioStream(int uid, int muted);
    int setLogFile(const char *filePath);
    int setLogFilter(unsigned int filter);
    int setChannelProfile(int profile);
    int setHighQualityAudioParametersWithFullband(int fullband, int stereo, int fullBitrate);
#if defined(__cplusplus)
}
#endif

#endif /* __TTTRTCENGINEVOICECWRAPPER_H__ */
