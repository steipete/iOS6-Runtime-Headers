/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVRecorder : NSObject  {
    struct AVRecorderPrivate { id x1; id x2; } *_priv;
}


- (BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2;
- (BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2;
- (unsigned int)audioNumDeviceChannels;
- (double)recordedDuration;
- (long long)recordedFileSizeInBytes;
- (void)setMicVolume:(float)arg1;
- (float)micVolume;
- (BOOL)autoFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)takePhoto;
- (BOOL)isRecording;
- (void)implNotification:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (BOOL)activate:(id*)arg1;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (id)attributeForKey:(id)arg1;
- (BOOL)isActive;
- (id)init;
- (void)dealloc;
- (BOOL)start;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)deactivate;
- (void)stop;

@end
