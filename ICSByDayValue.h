/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSNumber;

@interface ICSByDayValue : NSObject <NSCoding> {
    NSNumber *_number;
    int _weekday;
}

@property int weekday;
@property(retain) NSNumber * number;

+ (id)byDayValueFromICSString:(id)arg1;
+ (int)weekdayFromICSString:(id)arg1;

- (id)initWithWeekday:(int)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)initWithWeekday:(int)arg1 number:(id)arg2;
- (id)number;
- (void)setNumber:(id)arg1;
- (int)weekday;
- (void)setWeekday:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
