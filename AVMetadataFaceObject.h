/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject  {
    AVMetadataFaceObjectInternal *_internal;
}

@property(readonly) int faceID;
@property(readonly) BOOL hasRollAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
+ (id)derivedFaceObjectFromFaceObject:(id)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 yaw:(float)arg3 roll:(float)arg4;

- (id)initDerivedFaceObjectFromFaceObject:(id)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 yaw:(float)arg3 roll:(float)arg4;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (BOOL)hasYawAngle;
- (BOOL)hasRollAngle;
- (int)faceID;
- (float)rollAngle;
- (float)yawAngle;
- (id)originalFaceObject;
- (void)dealloc;
- (id)description;

@end
