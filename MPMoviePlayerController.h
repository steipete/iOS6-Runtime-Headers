/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    void *_internal;
    BOOL _readyForDisplay;
}

@property(copy) NSURL * contentURL;
@property(readonly) UIView * view;
@property(readonly) UIView * backgroundView;
@property(readonly) int playbackState;
@property(readonly) int loadState;
@property int controlStyle;
@property int repeatMode;
@property BOOL shouldAutoplay;
@property(getter=isFullscreen) BOOL fullscreen;
@property int scalingMode;
@property(readonly) BOOL readyForDisplay;
@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;

+ (void)allInstancesResignActive;

- (BOOL)readyForDisplay;
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
- (id)initWithContentURL:(id)arg1;
- (void)setContentURL:(id)arg1;
- (int)loadState;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg1;
- (void)play;
- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)backgroundView;
- (id)view;
- (void)pause;
- (double)duration;
- (void)stop;

@end
