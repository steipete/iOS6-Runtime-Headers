/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter  {
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSArray *inputCorrectionInfo;
}

@property(retain) CIImage * inputImage;
@property(retain) NSString * inputCameraModel;
@property(retain) NSArray * inputCorrectionInfo;


- (void)setInputCorrectionInfo:(id)arg1;
- (id)inputCorrectionInfo;
- (void)setInputCameraModel:(id)arg1;
- (id)inputCameraModel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (void)setDefaults;

@end
