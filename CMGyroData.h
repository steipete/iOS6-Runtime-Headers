/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGyroData : CMLogItem  {
    id _internal;
}

@property(readonly) struct { double x1; double x2; double x3; } rotationRate;


- (id)initWithRotationRate:(struct { float x1; float x2; float x3; })arg1 andTimestamp:(double)arg2;
- (struct { double x1; double x2; double x3; })rotationRate;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
