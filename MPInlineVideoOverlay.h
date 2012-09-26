/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPNowPlayingItemQueueInfoButton, MPInlineTransportControls;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
    MPInlineTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    unsigned int _layoutSubviewsActive : 1;
}


- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (unsigned long long)_convertedPartsMask:(unsigned long long)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end
