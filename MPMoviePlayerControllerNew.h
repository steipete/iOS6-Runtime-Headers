/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPInlineVideoController, <MPMoviePlayerControllerDelegate>, NSError, MPAVController, MPMoviePlayerController, MPSystemNowPlayingController, NSMutableSet, MPMovieErrorLog, NSDictionary, NSArray, MPMovieAccessLog, MPMovieView, NSMutableDictionary, NSMutableArray;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {
    int _retainCount;
    int _additionalButtons;
    NSMutableSet *_asyncImageGenerators;
    int _controlStyle;
    float _currentPlaybackRate;
    <MPMoviePlayerControllerDelegate> *_delegate;
    NSDictionary *_HTTPHeaderFields;
    MPMoviePlayerController *_moviePlayer;
    NSArray *_movies;
    BOOL _moviesNeedReload;
    int _movieSourceType;
    MPMovieView *_movieView;
    MPSystemNowPlayingController *_nowPlayingController;
    NSError *_playbackError;
    MPAVController *_player;
    NSMutableArray *_queuedThumbnailRequests;
    int _repeatMode;
    unsigned int _stateBeforeSettingPlaybackTime;
    MPInlineVideoController *_videoViewController;
    unsigned int _finishNotificationsPosted;
    BOOL _shouldAutoplay;
    BOOL _useApplicationAudioSession;
    BOOL _setUseApplicationAudioSessionWhenPlaybackEnds;
    BOOL _preparedQueue;
    BOOL _didAppear;
    BOOL _ignorePlaybackStateChanges;
    BOOL _playWhenSourceTypeIsDetermined;
    BOOL _prepareWhenSourceTypeIsDetermined;
    BOOL _isChangingMoviePath;
    BOOL _wasPlayingBeforeSuspended;
    BOOL _canPostDidFinishNotificationOnItemChange;
    BOOL _readyForDisplay;
    BOOL _shouldRestartPlaybackFromBeginning;
    BOOL _useHostedWindowWhenFullscreen;
    BOOL _willSoonEndUsingVideoLayer;
    double _initialPlaybackTime;
    double _endPlaybackTime;
    NSMutableDictionary *_timedMetadataForUniqueKey;
    BOOL _isActive;
    BOOL _isResigningActive;
    BOOL _didResignActive;
    BOOL _canShowControlsOverlayBeforeResignedActive;
    double _timeWhenResignedActive;
    unsigned int _movieIndexWhenResignedActive;
    MPMovieAccessLog *_cachedAccessLog;
    MPMovieErrorLog *_cachedErrorLog;
}

@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;


- (id)timedMetadataForKey:(id)arg1;
- (void)cancelAllThumbnailImageRequests;
- (void)_setNowPlayingMovie:(id)arg1;
- (id)_movies;
- (BOOL)useApplicationAudioSession;
- (void)setMovieControlMode:(int)arg1;
- (unsigned int)_hostedWindowContextID;
- (id)_hostedWindow;
- (BOOL)_useHostedWindowWhenFullscreen;
- (void)_setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (BOOL)_shouldEnforceHDCP;
- (void)_setShouldEnforceHDCP:(BOOL)arg1;
- (void)_setMovieTitle:(id)arg1;
- (void)_setMovieSubtitle:(id)arg1;
- (void)_setMovieMediaTypesOverride:(int)arg1;
- (void)_setHTTPHeaderFields:(id)arg1;
- (void)_setDisallowsAMRAudio:(BOOL)arg1;
- (void)_setControlsHidden:(BOOL)arg1;
- (void)_setAudioSessionModeOverride:(id)arg1;
- (void)_setAdditionalButtons:(int)arg1;
- (id)_navigationBar;
- (id)_movieTitle;
- (id)_movieSubtitle;
- (BOOL)_isTVOutEnabled;
- (id)_HTTPHeaderFields;
- (id)_audioSessionModeOverride;
- (BOOL)_areControlsHidden;
- (int)_additionalButtons;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (BOOL)_shouldContinuePlaybackInBackground;
- (id)_nowPlayingMovie;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(int)arg2;
- (BOOL)inlinePlaybackUsesTVOut;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)disallowsAMRAudio;
- (void)_pausePlaybackForSuspension;
- (BOOL)_canContinuePlayingWhenLocked;
- (void)_setUseApplicationAudioSession:(BOOL)arg1;
- (id)thumbnailImageAtTime:(double)arg1 timeOption:(int)arg2;
- (void)_clearPlaybackStateAfterTimeJumpIfNecessary;
- (BOOL)_didPostFinishNotificationForReason:(int)arg1;
- (void)_updateDisabledPartsFromDelegate;
- (void)_restartPlaybackFromBeginning;
- (void)_postDidFinishNotificationWithReason:(int)arg1;
- (void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_endUsingVideoLayer;
- (void)_setCurrentPlaybackTime:(double)arg1 timeOption:(int)arg2;
- (void)_postNotificationName:(id)arg1 object:(id)arg2;
- (void)_cacheAccessAndErrorLogs;
- (void)_prepareToPlayWithStartIndex:(unsigned int)arg1;
- (void)_setVideoViewControllerOverlayStyle;
- (void)_ensureActive;
- (id)_videoViewController;
- (void)_setMovies:(id)arg1;
- (id)_movieOptions;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_willResignActiveNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_movieNaturalSizeAvailableNotification:(id)arg1;
- (void)_movieDurationAvailableNotification:(id)arg1;
- (void)_movieSourceTypeAvailableNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_serverDiedNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataImageAvailableNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_itemPlaybackErrorNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)arg1;
- (void)_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)movieViewDidMoveToWindow:(id)arg1;
- (void)movieView:(id)arg1 willMoveToWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_videoFrame;
- (BOOL)_isReadyForDisplay;
- (void)_resignActive;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (double)currentPlaybackTime;
- (double)endPlaybackTime;
- (void)setEndPlaybackTime:(double)arg1;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:(double)arg1;
- (double)playableDuration;
- (int)movieSourceType;
- (void)setMovieSourceType:(int)arg1;
- (int)movieMediaTypes;
- (void)skipToPreviousItem;
- (void)skipToBeginning;
- (void)skipToNextItem;
- (void)endSeeking;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (BOOL)isPreparedToPlay;
- (void)prepareToPlay;
- (BOOL)isAirPlayVideoActive;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (BOOL)allowsAirPlay;
- (void)setScalingMode:(int)arg1;
- (int)scalingMode;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (BOOL)isFullscreen;
- (void)setShouldAutoplay:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)setControlStyle:(int)arg1;
- (int)controlStyle;
- (int)playbackState;
- (id)contentURL;
- (void)setContentURL:(id)arg1;
- (void)_setMoviePlayer:(id)arg1;
- (id)_videoView;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (int)loadState;
- (id)timedMetadata;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg1;
- (id)errorLog;
- (id)accessLog;
- (void)setBackgroundColor:(id)arg1;
- (void)play;
- (id)init;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)backgroundView;
- (id)view;
- (void)pause;
- (double)duration;
- (void)_setDelegate:(id)arg1;
- (void)stop;
- (id)_delegate;

@end
