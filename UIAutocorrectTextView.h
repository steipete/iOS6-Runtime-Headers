/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView  {
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    BOOL m_animating;
    BOOL m_isLongString;
}

@property BOOL animating;
@property BOOL isLongString;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setIsLongString:(BOOL)arg1;
- (BOOL)isLongString;
- (BOOL)animating;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_calculateRectForExpandedHitRegion;
- (void)setEdgeType:(int)arg1;
- (void)setAnimating:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
