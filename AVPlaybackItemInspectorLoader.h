/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray;

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _cachedDuration;
}

@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;


- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (void)_removeFigObjectNotifications;
- (void)_addFigObjectNotifications;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)assetInspector;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(BOOL)arg4;
- (void)cancelLoading;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;

@end
