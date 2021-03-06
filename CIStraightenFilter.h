/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIStraightenFilter : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputAngle;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputAngle;

+ (id)customAttributes;

- (void)setInputAngle:(id)arg1;
- (id)inputAngle;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;

@end
