#if !defined(__TTTRTCENGINEVOICE_H__)
#define __TTTRTCENGINEVOICE_H__

#if defined(__cplusplus)
extern "C" {
#endif
    int getMessageCount(void);
    char* getMessage(void);
    void freeObject(void *obj);
    
    void createEngine(const char *appId);
    void deleteEngine(void);
    const char* getSdkVersion(void);
    int joinChannel(const char *channelKey, const char *channelName, long long uid);
    int leaveChannel(void);
#if TARGET_OS_OSX
#else
    int setEnableSpeakerphone(int enabled);
    int isSpeakerphoneEnabled(void);
    int setDefaultAudioRoutetoSpeakerphone(int defaultToSpeaker);
#endif
    int enableAudioVolumeIndication(int interval, int smooth);
    int startAudioMixing(const char *filePath, int loopback, int cycle);
    int stopAudioMixing(void);
    int pauseAudioMixing(void);
    int resumeAudioMixing(void);
    int adjustAudioMixingVolume(int volume);
    int getAudioMixingDuration(void);
    int getAudioMixingCurrentPosition(void);
    int setAudioMixingPosition(int pos);
    int muteLocalAudioStream(int muted);
    int muteAllRemoteAudioStreams(int muted);
    int muteRemoteAudioStream(long long uid, int muted);
    int setLogFile(const char *filePath);
    int setLogFilter(unsigned int filter);
    int setChannelProfile(int profile);
    int setHighQualityAudioParametersWithFullband(int fullband, int stereo, int fullBitrate);
    int sendChatMessage(long long userID, int chatType, const char *seqID, const char *data);
#if TARGET_OS_OSX
#else
    int startRecordChatAudio(void);
    int stopRecordAndSendChatAudio(long long userID, const char *seqID);
    int cancelRecordChatAudio(void);
    int startPlayChatAudio(const char *fileName);
    int stopPlayChatAudio(void);
    bool isChatAudioPlaying(void);
#endif
#if defined(__cplusplus)
}
#endif

#endif /* __TTTRTCENGINEVOICE_H__ */
