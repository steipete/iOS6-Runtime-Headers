/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView  {
    NSString *_pathToServiceImages[2];
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned int _crossfadeStep;
    float _maxWidth;
    float _serviceWidth;
    float _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    BOOL _usingStringForStyle[2];
    BOOL _loopNowIfNecessary;
    float _letterSpacing;
}


- (void)dealloc;
- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_serviceContentsImageForStyle:(int)arg1;
- (id)_crossfadeContentsImageForStyle:(int)arg1;
- (id)_contentsImageFromString:(id)arg1 withWidth:(float)arg2 letterSpacing:(float)arg3 forStyle:(int)arg4;
- (void)_setUsingString:(BOOL)arg1 forStyle:(int)arg2;
- (BOOL)_loopingNecessary;
- (BOOL)_crossfaded;
- (void)_crossfadeStepAnimation;
- (void)performPendedActions;
- (BOOL)animatesDataChange;
- (float)extraRightPadding;
- (float)standardPadding;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (id)textColorForStyle:(int)arg1;
- (BOOL)usesSmallerTextFont;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (BOOL)animatesFrameChange;
- (id)contentsImageForStyle:(int)arg1;

@end
