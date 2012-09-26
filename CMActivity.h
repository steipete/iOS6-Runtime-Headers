/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem  {
    id _internal;
}

@property(readonly) int confidence;
@property(readonly) BOOL isMoving;
@property(readonly) BOOL isWalking;
@property(readonly) BOOL isRunning;
@property(readonly) BOOL isDriving;


- (BOOL)isDriving;
- (BOOL)isWalking;
- (BOOL)isMoving;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; })arg1 andTimestamp:(double)arg2;
- (int)confidence;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; })activity;
- (BOOL)isRunning;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
