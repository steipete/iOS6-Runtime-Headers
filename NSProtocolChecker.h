/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProtocolChecker : NSProxy  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;

- (BOOL)conformsToProtocol:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (const char *)_localClassNameForClass;
- (struct objc_method_description { SEL x1; char *x2; }*)methodDescriptionForSelector:(SEL)arg1;
- (id)protocol;
- (id)target;

@end
