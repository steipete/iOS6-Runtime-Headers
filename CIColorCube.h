/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputCubeDimension;
    NSData *inputCubeData;
    CIImage *_cubeImage;
}

@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputCubeDimension;
@property(retain) NSData * inputCubeData;

+ (id)customAttributes;

- (id)inputCubeData;
- (id)inputCubeDimension;
- (id)cubeImage;
- (void)setInputCubeDimension:(id)arg1;
- (void)setInputCubeData:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)dealloc;

@end
