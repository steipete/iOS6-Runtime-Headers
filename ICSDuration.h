/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDuration : NSObject <NSCoding> {
    double _duration;
}

+ (id)generateDurationFromICSString:(id)arg1;
+ (id)durationFromRFC2445UTF8String:(const char *)arg1;
+ (id)durationFromICSString:(id)arg1;

- (BOOL)isNegative;
- (int)seconds;
- (int)minutes;
- (int)hours;
- (int)days;
- (int)weeks;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)initWithWeeks:(int)arg1 days:(int)arg2 hours:(int)arg3 minutes:(int)arg4 seconds:(int)arg5;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (double)timeInterval;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
