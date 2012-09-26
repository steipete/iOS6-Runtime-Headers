/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPAlternateTracks, NSData, MPQueueFeeder, MPImageCache, AVPlayerItem, MPAVController, AVAsset, MPMediaItem, NSArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface MPAVItem : NSObject  {
    AVPlayerItem *_avPlayerItem;
    AVAsset *_asset;
    NSObject<OS_dispatch_queue> *_assetQueue;
    BOOL _didAttemptToLoadAsset;
    BOOL _isAssetLoaded;
    MPQueueFeeder *_feeder;
    MPAVController *_player;
    float _soundCheckVolumeNormalization;
    NSArray *_chapterTimeMarkers;
    NSArray *_artworkTimeMarkers;
    NSArray *_urlTimeMarkers;
    NSArray *_closedCaptionTimeMarkers;
    MPAlternateTracks *_alternateTracks;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSArray *_cachedSeekableTimeRanges;
    double _seekableTimeRangesCacheTime;
    unsigned int _type;
    float _defaultPlaybackRate;
    unsigned int _indexInQueueFeeder;
    unsigned int _advancedDuringPlayback : 1;
    unsigned int _handledFinishTime : 1;
    unsigned int _hasPlayedThisSession : 1;
    unsigned int _wasCountedAsSkipped : 1;
    unsigned int _isStreamable : 2;
    unsigned int _watchingAttributes : 1;
    unsigned int _lyricsAvailable : 1;
    unsigned int _timeMarkersNeedLoading : 1;
}

@property(readonly) MPMediaItem * mediaItem;
@property(readonly) BOOL isStreamingQuality;
@property(readonly) BOOL wasDownloadedThisSession;
@property(readonly) AVAsset * asset;
@property(readonly) AVPlayerItem * playerItem;
@property BOOL isAssetLoaded;
@property(readonly) int status;
@property double playbackCheckpointCurrentTime;
@property int subtitleTrackID;
@property(readonly) MPImageCache * imageCache;
@property MPQueueFeeder * feeder;
@property unsigned int indexInQueueFeeder;
@property MPAVController * player;
@property BOOL hasPlayedThisSession;
@property(readonly) unsigned int countForQueueFeeder;
@property(readonly) double currentTimeDisplayOverride;
@property float defaultPlaybackRate;
@property(retain) NSArray * chapterTimeMarkers;
@property(retain) NSArray * artworkTimeMarkers;
@property(retain) NSArray * urlTimeMarkers;
@property(retain) NSArray * closedCaptionTimeMarkers;
@property(readonly) BOOL useEmbeddedChapterData;
@property(readonly) unsigned int type;
@property(readonly) int customAVEQPreset;
@property(readonly) BOOL allowsEQ;
@property(readonly) MPAlternateTracks * alternateTracks;
@property(readonly) NSString * displayableText;
@property(readonly) BOOL displayableTextLoaded;
@property(readonly) BOOL hasDisplayableText;
@property(readonly) NSString * album;
@property(readonly) NSString * artist;
@property(readonly) NSString * albumArtist;
@property(readonly) unsigned int albumTrackNumber;
@property(readonly) unsigned int albumTrackCount;
@property(readonly) NSData * artworkImageData;
@property(readonly) NSString * artworkMIMEType;
@property(readonly) BOOL canSeedGenius;
@property(readonly) NSString * composer;
@property(readonly) unsigned int discNumber;
@property(readonly) unsigned int discCount;
@property(readonly) NSString * genre;
@property(readonly) NSString * lyrics;
@property(readonly) BOOL hasDataForItemArtwork;
@property(readonly) NSString * mainTitle;
@property(readonly) NSURL * podcastURL;
@property(getter=isStreamable,readonly) BOOL streamable;
@property(readonly) unsigned long long persistentID;
@property(readonly) float userRating;
@property(readonly) BOOL wantsSubtitles;
@property(readonly) BOOL supportsRewindAndFastForward15Seconds;
@property(readonly) BOOL durationIsValid;
@property(readonly) double durationIfAvailable;
@property(readonly) double durationFromExternalMetadata;
@property(readonly) double playableDuration;
@property(readonly) double playableDurationIfAvailable;
@property(readonly) double timeOfSeekableStart;
@property(readonly) double timeOfSeekableEnd;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property(copy) NSString * videoID;
@property float soundCheckVolumeNormalization;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } forwardPlaybackEndTime;
@property(readonly) struct CGSize { float x1; float x2; } presentationSize;

+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (id)URLFromPath:(id)arg1;
+ (void)setDefaultScaleMode:(unsigned int)arg1;
+ (unsigned int)defaultScaleMode;

- (void)setRating:(float)arg1;
- (BOOL)prioritizeDownloadSession;
- (BOOL)wasDownloadedThisSession;
- (id)mediaItem;
- (void)setIndexInQueueFeeder:(unsigned int)arg1;
- (void)setFeeder:(id)arg1;
- (id)alternateTracks;
- (void)replacePlayerItemWithPlayerItem:(id)arg1;
- (void)reevaluateType;
- (id)localeForAssetTrack:(id)arg1;
- (void)setupPlaybackInfo;
- (void)setupEQPresetWithDefaultPreset:(int)arg1;
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (double)playableDurationIfAvailable;
- (BOOL)durationIsValid;
- (id)localizedPositionInPlaylistString;
- (BOOL)wantsSubtitles;
- (float)userRating;
- (id)closedCaptionTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkerForTime:(double)arg1;
- (void)setClosedCaptionTimeMarkers:(id)arg1;
- (id)titlesForTime:(double)arg1;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2;
- (id)imageCache;
- (void)_realoadEmbeddedTimeMarkers;
- (void)setHasPlayedThisSession:(BOOL)arg1;
- (float)scanIntervalForLevel:(unsigned int)arg1 paused:(BOOL)arg2;
- (float)playbackRateForLevel:(unsigned int)arg1 direction:(int)arg2 paused:(BOOL)arg3;
- (id)podcastURL;
- (BOOL)isStreamable;
- (BOOL)hasPlayedThisSession;
- (BOOL)hasDataForItemArtwork;
- (unsigned int)alternatesCountForTypes:(unsigned int)arg1;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)displayableTextLoaded;
- (double)currentTimeDisplayOverride;
- (BOOL)isAssetURLValid;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (BOOL)canSeedGenius;
- (id)albumArtist;
- (double)durationInSeconds;
- (BOOL)userSkippedPlayback;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (void)setUserEnabledSubtitles:(BOOL)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (double)playbackCheckpointCurrentTime;
- (void)notePlaybackFinishedByHittingEnd;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)resetBookkeeping;
- (void)flushNowPlayingCaches;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (id)_imageChapterTrackIDsForAsset:(id)arg1;
- (void)_itemAttributeAvailableKey:(id)arg1;
- (BOOL)allowsEQ;
- (int)customAVEQPreset;
- (BOOL)isAssetLoaded;
- (BOOL)hasDisplayableText;
- (double)_playableDurationForLoadedTimeRanges:(id)arg1;
- (double)_durationFromExternalMetadataIfAvailable;
- (double)durationFromExternalMetadata;
- (unsigned int)countForQueueFeeder;
- (id)closedCaptionTimeMarkers;
- (id)urlTimeMarkers;
- (id)artworkTimeMarkers;
- (id)_timeMarkerFromMarkers:(id)arg1 forTime:(double)arg2;
- (void)_loadTimeMarkersAsync;
- (void)_loadTimeMarkersBlocking;
- (void)setUrlTimeMarkers:(id)arg1;
- (void)setArtworkTimeMarkers:(id)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2 usePlaceholderAsFallback:(BOOL)arg3;
- (BOOL)useEmbeddedChapterData;
- (float)defaultPlaybackRate;
- (id)displayableText;
- (double)_durationInSeconds;
- (void)_checkAllowsBlockingDurationCall;
- (void)_loadAssetAndPlayerItem;
- (void)_updateSoundCheckVolumeNormalizationForPlayerItem;
- (void)setIsAssetLoaded:(BOOL)arg1;
- (void)loadAssetAndPlayerItem;
- (void)_releaseAllTimeMarkers;
- (void)_closedCaptioningStatusDidChangeNotification:(id)arg1;
- (void)_loadAssetProperties;
- (id)videoID;
- (void)setOverrideDuration:(double)arg1;
- (int)subtitleTrackID;
- (void)setSubtitleTrackID:(int)arg1;
- (void)setAlternateAudioTrackID:(int)arg1;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (void)setVideoID:(id)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (double)playableDuration;
- (double)durationIfAvailable;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)artworkMIMEType;
- (id)artworkImageData;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (id)composer;
- (id)artist;
- (id)mainTitle;
- (unsigned int)indexInQueueFeeder;
- (id)feeder;
- (BOOL)isStreamingQuality;
- (id)album;
- (unsigned long long)persistentID;
- (id)genre;
- (void)setPlayerItem:(id)arg1;
- (id)playerItem;
- (id)_seekableTimeRanges;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (float)soundCheckVolumeNormalization;
- (id)initWithAsset:(id)arg1;
- (id)lyrics;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (struct CGSize { float x1; float x2; })presentationSize;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)asset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (unsigned int)type;
- (id)url;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)path;
- (int)status;

@end
