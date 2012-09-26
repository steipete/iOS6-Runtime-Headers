/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKBackgroundBrush;

@interface GKCurvedCapBackgroundBrush : GKBrush  {
    float _additionalOffsetToCurveJoint;
    GKBackgroundBrush *_fillBackgroundBrush;
    BOOL _drawBottomCurve;
}

@property BOOL drawBottomCurve;
@property(retain) GKBackgroundBrush * fillBackgroundBrush;
@property float additionalOffsetToCurveJoint;

+ (id)curvedCapBackgroundBrushWithHeaderBackgroundForPad;
+ (id)curvedCapBackgroundBrushWithHeaderBackground;

- (void)setDrawBottomCurve:(BOOL)arg1;
- (id)fillBackgroundBrush;
- (struct CGPath { }*)newBorderPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 radius:(float)arg2 capOffset:(float)arg3 capExtra:(float)arg4;
- (float)additionalOffsetToCurveJoint;
- (void)addFancyCurveToPath:(struct CGPath { }*)arg1 fromBegin:(struct CGPoint { float x1; float x2; })arg2 toEnd:(struct CGPoint { float x1; float x2; })arg3 capExtra:(float)arg4 curveUpward:(BOOL)arg5;
- (BOOL)drawBottomCurve;
- (void)setFillBackgroundBrush:(id)arg1;
- (void)setAdditionalOffsetToCurveJoint:(float)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (void)dealloc;

@end
