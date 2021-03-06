/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UIButton;

@interface UIZoomViewController : UIViewController  {
    UIWindow *_window;
    UIButton *_zoomButton;
}

@property(readonly) UIWindow * window;


- (id)window;
- (id)init;
- (void)dealloc;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1 forWindow:(id)arg2;
- (void)_zoomOrientationAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_changeZoom:(id)arg1;
- (id)_zoomText:(BOOL)arg1;
- (void)_updateZoomButtonTitle;
- (void)_suspendAnimationStarted:(id)arg1;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_zoomOrientationChange:(id)arg1;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(int)arg1 offscreen:(BOOL)arg2;
- (BOOL)isClassicControlWindow:(id)arg1;
- (void)loadView;
- (id)screen;

@end
