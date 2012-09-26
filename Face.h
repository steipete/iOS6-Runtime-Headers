/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface Face : NSObject  {
    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}

@property(readonly) int size;
@property(readonly) int centerX;
@property(readonly) int centerY;
@property(readonly) double I;
@property(readonly) double Q;


- (int)size;
- (double)Q;
- (double)I;
- (int)centerY;
- (int)centerX;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRect;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andImage:(id)arg2 usingContext:(id)arg3;
- (id)description;

@end
