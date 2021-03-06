/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputEV;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputEV;

+ (id)customAttributes;

- (id)inputEV;
- (void)setInputEV:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
