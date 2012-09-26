/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UIView;

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton  {
    UIView *_pocketShadow;
    UIView *_borderLine;
    UIImage *_backgroundNormal;
    UIImage *_backgroundHighlighted;
    BOOL _drawsBackground;
    BOOL _drawsPocketShadow;
}

@property BOOL drawsBackground;
@property BOOL drawsPocketShadow;


- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)drawsPocketShadow;
- (id)toggleButtonBackgroundImageWithHighlight:(BOOL)arg1;
- (void)updateBackgroundImages;
- (void)setDrawsPocketShadow:(BOOL)arg1;

@end
