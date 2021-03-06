/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput  {
    AVCaptureStillImageOutputInternal *_internal;
}

@property(copy) NSDictionary * outputSettings;
@property(readonly) NSArray * availableImageDataCVPixelFormatTypes;
@property(readonly) NSArray * availableImageDataCodecTypes;
@property(getter=isCapturingStillImage,readonly) BOOL capturingStillImage;

+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(void*)arg1 size:(unsigned long)arg2;
+ (struct CGImage { }*)cgImageForBGRASurface:(void*)arg1 size:(unsigned long)arg2;
+ (id)jpegStillImageNSDataRepresentationForSurface:(void*)arg1 size:(unsigned long)arg2 metadata:(id)arg3;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;

- (long long)maxStillImageDataSize;
- (void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (id)scaleAndCropDictionary;
- (BOOL)isCapturingStillImage;
- (BOOL)resumeVideoProcessing;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1;
- (void)setRawCaptureEnabled:(BOOL)arg1;
- (void)setEV0CaptureEnabled:(BOOL)arg1;
- (void)setHDRCaptureEnabled:(BOOL)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
- (BOOL)suspendsVideoProcessingDuringStillImageCapture;
- (BOOL)isChromaNoiseReductionEnabled;
- (BOOL)isEV0CaptureEnabled;
- (BOOL)isHDRCaptureEnabled;
- (id)firstActiveConnection;
- (BOOL)isRawCaptureSupported;
- (id)availableImageDataCodecTypes;
- (id)availableImageDataCVPixelFormatTypes;
- (void)_updateStillImageDataSizeForCaptureOptions:(id)arg1;
- (BOOL)isRawCaptureEnabled;
- (id)outputSettings;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (unsigned long)imageDataFormatType;
- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)init;
- (void)dealloc;

@end
