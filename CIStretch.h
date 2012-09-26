/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIStretch : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    CIVector *inputSize;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;
@property(copy) CIVector * inputSize;

+ (id)customAttributes;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeDOD:(struct vec4 { float x1; float x2; float x3; float x4; })arg1;
- (id)inputSize;
- (void)setInputSize:(id)arg1;
- (id)inputPoint;
- (void)setInputPoint:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
