/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage;

@interface UISwitch : UIControl <NSCoding> {
    id _control;
    float _enabledAlpha;
}

@property(getter=_onColor,setter=_setOnColor:,retain) UIColor * onColor;
@property(retain) UIColor * onTintColor;
@property(retain) UIColor * tintColor;
@property(retain) UIColor * thumbTintColor;
@property(retain) UIImage * onImage;
@property(retain) UIImage * offImage;
@property(getter=isOn) BOOL on;
@property float enabledAlpha;


- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)setAlternateColors:(BOOL)arg1;
- (float)enabledAlpha;
- (id)_onColor;
- (void)_setOnColor:(id)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isOn;
- (void)_commonInitNewLook;
- (BOOL)_useOldSize;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (void)_handleTapNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (void)setEnabledAlpha:(float)arg1;
- (id)_onTintColor;
- (void)setOn:(BOOL)arg1;
- (id)onTintColor;
- (id)offImage;
- (id)onImage;
- (void)setOffImage:(id)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setOnTintColor:(id)arg1;
- (id)thumbTintColor;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (id)_scriptingInfo;
- (void)_encodeFrameWithCoder:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAlpha:(float)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
