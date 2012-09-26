/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, UIActivityIndicatorView, UIImageView, UINavigationItem, UILabel, UINavigationButton, NSString, MPNowPlayingItemQueueInfoButton, UIPopoverController, MPPadFullScreenTransportControls;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate> {
    MPPadFullScreenTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    UIImageView *_hudImageView;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    UIImageView *_navigationBarBackgroundShort;
    UIImageView *_navigationBarBackgroundTall;
    UIImageView *_navigationBarShadow;
    NSString *_title;
    UINavigationButton *_scaleModeButton;
    UILabel *_scrubSpeedLabel;
    UILabel *_scrubInstructionsLabel;
    UIPopoverController *_popoverController;
    UILabel *_loadingMovieLabel;
    UIActivityIndicatorView *_loadingMovieIndicator;
    unsigned int _layoutSubviewsActive : 1;
}

@property(copy) NSString * title;


- (void)_scaleButton:(id)arg1;
- (id)_navBarBackgroundImageForProgressControl:(BOOL)arg1 tallStyle:(BOOL)arg2;
- (void)_scheduleHidePopoverTimer;
- (void)_reconfigureNavigationBarAnimated:(BOOL)arg1;
- (void)_doneButton:(id)arg1;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_configureLinkButtonForCurrentItemTime;
- (void)showAlternateTracks;
- (void)hideAlternateTracks;
- (unsigned long long)disabledParts;
- (void)setVideoViewController:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (unsigned long long)_convertedPartsMask:(unsigned long long)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)setItem:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_initSubviews;
- (void)setInterfaceOrientation:(int)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)navigationBar;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setAlpha:(float)arg1;

@end
