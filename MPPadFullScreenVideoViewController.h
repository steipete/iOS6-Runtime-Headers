/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPAudioVideoRoutingPopoverController, MPPadFullScreenVideoOverlay;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
    MPPadFullScreenVideoOverlay *_fullscreenVideoOverlay;
    MPAudioVideoRoutingPopoverController *_routePopoverController;
}


- (BOOL)canChangeScaleMode;
- (void)unregisterForPlayerNotifications;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)registerForPlayerNotifications;
- (id)videoOverlayViewIfLoaded;
- (void)overlayDidDismissAlternateTracksPopover:(id)arg1;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)_hideOverlayAnimationFinished:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_rotationAnimationFinished:(id)arg1;
- (void)stopTicking;
- (void)startTicking;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2 atLocation:(struct CGPoint { float x1; float x2; })arg3;
- (id)overlayView;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (id)videoOverlayView;
- (BOOL)controlsOverlayVisible;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (void)popoverControllerDidDismissPopover:(id)arg1;

@end
