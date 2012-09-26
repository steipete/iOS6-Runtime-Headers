/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CAValueFunction : NSObject <NSCoding> {
    NSString *_string;
    void *_impl;
}

@property(readonly) NSString * name;

+ (id)functionWithName:(id)arg1;

- (BOOL)apply:(const double*)arg1 result:(double*)arg2;
- (id)_initWithName:(int)arg1;
- (BOOL)apply:(const double*)arg1 result:(double*)arg2 parameterFunction:(int (*)())arg3 context:(void*)arg4;
- (unsigned long)outputCount;
- (unsigned long)inputCount;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)dealloc;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
