/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSTimeZone : NSTimeZone  {
    struct __CFString { } *_name;
    struct __CFData { } *_data;
    void **_ucal;
    int _lock;
}

+ (id)__new:(struct __CFString { }*)arg1 cache:(BOOL)arg2;
+ (id)__new:(struct __CFString { }*)arg1 data:(struct __CFData { }*)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)name;
- (void)finalize;

@end