/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter  {
    CIImage *inputImage;
    CIVector *inputRVector;
    CIVector *inputGVector;
    CIVector *inputBVector;
    CIVector *inputAVector;
    CIVector *inputBiasVector;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputRVector;
@property(copy) CIVector * inputGVector;
@property(copy) CIVector * inputBVector;
@property(copy) CIVector * inputAVector;
@property(copy) CIVector * inputBiasVector;

+ (id)customAttributes;

- (id)inputBiasVector;
- (id)inputAVector;
- (id)inputBVector;
- (id)inputGVector;
- (id)inputRVector;
- (void)setInputBiasVector:(id)arg1;
- (void)setInputAVector:(id)arg1;
- (void)setInputBVector:(id)arg1;
- (void)setInputGVector:(id)arg1;
- (void)setInputRVector:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
