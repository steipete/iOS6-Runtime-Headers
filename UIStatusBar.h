/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarServer, UIStatusBarForegroundView, UIStatusBarStyleAnimationParameters, UIStatusBarBackgroundView, UILabel, NSMutableArray, UIStatusBar, NSString, UIStatusBarWindow, UIColor, <UIStatusBarStyleDelegate>;

@interface UIStatusBar : UIScrollsToTopInitiatorView <UIStatusBarServerClient> {
    <UIStatusBarStyleDelegate> *_styleDelegate;
    UIStatusBarWindow *_statusBarWindow;
    UIStatusBarServer *_statusBarServer;
    BOOL _showsForeground;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    NSString *_currentDoubleHeightText;
    struct { 
        BOOL itemIsEnabled[24]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
    } _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    int _requestedStyle;
    int _styleOverrides;
    int _style;
    int _orientation;
    BOOL _hidden;
    BOOL _suppressesHiddenSideEffects;
    BOOL _foreground;
    BOOL _registered;
    BOOL _styleRequestedWhileHidden;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _suppressGlow;
    float _translucentBackgroundAlpha;
    BOOL _showOnlyCenterItems;
    struct { BOOL x1[24]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { BOOL x_23_1_1[24]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; } x23; } *_localDataOverrides;
    UIColor *_tintColor;
    UIColor *_lastUsedTintColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
}

@property <UIStatusBarStyleDelegate> * styleDelegate;
@property UIStatusBarWindow * statusBarWindow;

+ (int)lowBatteryLevel;
+ (int)cornerStyleForRequestedStyle:(int)arg1 effectiveStyle:(int)arg2 alignment:(int)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForStyle:(int)arg1 orientation:(int)arg2;
+ (int)cornerStyleMatchingStyle:(int)arg1;
+ (void)getData:(struct { BOOL x1[24]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; }*)arg1 forRequestedData:(const struct { BOOL x1[24]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; }*)arg2 withOverrides:(const struct { BOOL x1[24]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { BOOL x_23_1_1[24]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; } x23; }*)arg3;
+ (double)defaultGlowAnimationDurationForStyle:(int)arg1;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (id)defaultBlueTintColor;
+ (void)setSuppressUpdateAnimations:(BOOL)arg1;
+ (void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2;
+ (float)heightForStyle:(int)arg1 orientation:(int)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForStyle:(int)arg1 orientation:(int)arg2 inWindowOfSize:(struct CGSize { float x1; float x2; })arg3;
+ (int)defaultStyleForRequestedStyle:(int)arg1 styleOverrides:(int)arg2;
+ (int)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;

- (void)setHidden:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (BOOL)isHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)styleDelegate;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (id)currentDoubleHeightLabelText;
- (void)requestStyle:(int)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)requestStyle:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentFrame;
- (void)setLocalDataOverrides:(struct { BOOL x1[24]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { BOOL x_23_1_1[24]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; } x23; }*)arg1;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)forgetEitherSideHistory;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateData:(BOOL)arg1;
- (BOOL)_touchShouldProduceReturnEvent;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_hideAnimationDidStop;
- (float)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (void)_crossfadeToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (void)_setStyle:(int)arg1;
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1;
- (void)_swapToNewBackgroundView;
- (void)_setFrameForStyle:(int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_slideTransform;
- (id)_currentComposedDataForStyle:(int)arg1;
- (float)_foregroundAlphaForStatusBarStyle:(int)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (int)_foregroundStyleForStatusBarStyle:(int)arg1;
- (void)_adjustDoubleHeightTextVisibility;
- (void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(int)arg3;
- (void)_setStyle:(int)arg1 animation:(int)arg2;
- (id)_prepareToSetStyle:(int)arg1 animation:(int)arg2;
- (int)styleForRequestedStyle:(int)arg1;
- (id)activeTintColor;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForOrientation:(int)arg1;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (id)_currentComposedData;
- (void)forceUpdateToData:(const struct { BOOL x1[24]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; }*)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showForegroundView:(BOOL)arg2;
- (void)_evaluateServerRegistration;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_hiddenTransformForHideAnimationParameters:(id)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(struct { BOOL x1[24]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; }*)arg2 withActions:(int)arg3;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setTintColor:(id)arg1;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)statusBarWindow;
- (float)currentHeight;
- (float)heightForOrientation:(int)arg1;
- (int)currentStyle;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)noteStyleOverridesChangedLocally;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(int)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setStyleDelegate:(id)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)layoutSubviews;

@end
