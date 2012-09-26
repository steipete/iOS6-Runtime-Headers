/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIZoomViewController, UIView, UIWindow, UIStatusBarViewController;

@interface UIClassicController : NSObject  {
    UIWindow *_window;
    UIView *_chromeView;
    UIStatusBarViewController *_statusBarViewController;
    UIZoomViewController *_zoomViewController;
    BOOL _hidesClassicChrome;
    BOOL _hidesStatusBarFiller;
}

@property(getter=isZoomed) BOOL zoomed;
@property BOOL drawsClassicChrome;
@property BOOL drawsStatusBarFiller;

+ (id)sharedClassicController;

- (void)dealloc;
- (void)setDrawsStatusBarFiller:(BOOL)arg1;
- (BOOL)drawsStatusBarFiller;
- (void)setDrawsClassicChrome:(BOOL)arg1;
- (BOOL)drawsClassicChrome;
- (void)setZoomed:(BOOL)arg1;
- (BOOL)isZoomed;
- (void)_finishZoom:(BOOL)arg1;
- (void)_setupWindow;
- (BOOL)_shouldHideStatusBar;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_updateChromeView:(id)arg1 orientation:(int)arg2;
- (BOOL)_supportsZoom;
- (id)_chromeImageWithOrientation:(int)arg1;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)setZoomed:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_newChromeViewForOrientation:(int)arg1;
- (BOOL)isClassicControlWindow:(id)arg1;
- (id)_window;
- (void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2;
- (void)_initializeStatusBarOrientation;

@end
