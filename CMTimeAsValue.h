/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeAsValue : NSValue  {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _time;
}

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;
- (unsigned int)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (long long)longLongValue;
- (int)intValue;
- (short)shortValue;
- (BOOL)charValue;
- (unsigned int)unsignedIntValue;
- (const char *)objCType;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (double)doubleValue;
- (BOOL)boolValue;
- (id)description;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (void)getValue:(void*)arg1;
- (int)integerValue;

@end
