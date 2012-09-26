/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, NSString, AVPlayerLayerInternal;

@interface AVPlayerLayer : CALayer  {
    AVPlayerLayerInternal *_playerLayer;
}

@property(retain) AVPlayer * player;
@property(copy) NSString * videoGravity;
@property(getter=isReadyForDisplay,readonly) BOOL readyForDisplay;

+ (id)playerLayerWithPlayer:(id)arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minRectToFitVideoAndSubtitlesInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_videoRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_pctOfSubtitleLayerHeight;
- (id)_subtitleGravity;
- (void)_setSubtitleDisplayEnabled:(BOOL)arg1;
- (BOOL)_subtitleDisplayEnabled;
- (void)_setItem:(id)arg1 readyForDisplay:(BOOL)arg2;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (void)_connectContentLayerToPlayer;
- (void)_setHasPlayerToObserve:(int)arg1 andShouldObserveIt:(int)arg2;
- (void)_updateSubtitles:(id)arg1 forceRender:(BOOL)arg2;
- (void)_subtitlesDidChange:(id)arg1;
- (void)_updatePresentationSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1;
- (void)_disconnectContentLayerFromPlayer;
- (void)_addAnimationsForSubtitleLayer:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 gravity:(id)arg3;
- (void)_calculateSubtitleLayerBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 presentationSize:(struct CGSize { float x1; float x2; })arg2 playLayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg3 shouldUpdateCachedSubtitleSample:(BOOL)arg4 outBound:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (void)_updateSubtitleLayerForPlayerLayerBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 presentationSize:(struct CGSize { float x1; float x2; })arg2 playLayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg3 forceRender:(BOOL)arg4;
- (id)player;
- (void)_setSubtitleGravity:(id)arg1;
- (void)setPlayer:(id)arg1;
- (BOOL)isReadyForDisplay;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (id)videoGravity;
- (void)setVideoGravity:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)removeAllAnimations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
