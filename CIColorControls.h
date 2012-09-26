/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIColorControls : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputBrightness;
    NSNumber *inputContrast;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputSaturation;
@property(copy) NSNumber * inputBrightness;
@property(copy) NSNumber * inputContrast;

+ (id)customAttributes;

- (id)inputContrast;
- (id)inputBrightness;
- (id)inputSaturation;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputSaturation:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
