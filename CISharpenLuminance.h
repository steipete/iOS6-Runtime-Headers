/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CISharpenLuminance : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputSharpness;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputSharpness;

+ (id)customAttributes;

- (id)inputSharpness;
- (void)setInputSharpness:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (bool)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
