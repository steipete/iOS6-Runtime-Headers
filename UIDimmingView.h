/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray, UIColor, UIBarButtonItem;

@interface UIDimmingView : UIView  {
    id _delegate;
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    BOOL _ignoresTouches;
    BOOL _displayed;
    BOOL _inPassthroughHitTest;
    UIColor *_dimmingColor;
}

@property id delegate;
@property(retain) UIBarButtonItem * highlightedBarButtonItem;
@property(retain) NSArray * passthroughViews;
@property BOOL ignoresTouches;
@property BOOL displayed;
@property(retain) UIColor * dimmingColor;

+ (id)defaultDimmingColor;

- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)dimmingColor;
- (void)setDisplayed:(BOOL)arg1;
- (BOOL)ignoresTouches;
- (void)setPassthroughViews:(id)arg1;
- (id)passthroughViews;
- (void)_simulateTap;
- (id)highlightedBarButtonItem;
- (void)setHighlightedBarButtonItem:(id)arg1;
- (void)dimmingRemovalAnimationDidStop;
- (void)display:(BOOL)arg1 withAnimationDuration:(float)arg2 afterDelay:(float)arg3;
- (void)setDimmingColor:(id)arg1;
- (void)setIgnoresTouches:(BOOL)arg1;
- (BOOL)displayed;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
