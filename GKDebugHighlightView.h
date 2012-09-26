/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIColor, NSString;

@interface GKDebugHighlightView : UIView  {
    UIColor *_color;
    NSString *_caption;
    BOOL _isOval;
}

@property(retain) UIColor * color;
@property(retain) NSString * caption;
@property BOOL isOval;


- (void)setIsOval:(BOOL)arg1;
- (BOOL)isOval;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCaption:(id)arg1;
- (id)caption;
- (id)color;
- (id)init;
- (void)dealloc;
- (void)setColor:(id)arg1;

@end
