/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding> {
}

+ (id)timeZoneWithName:(id)arg1;
+ (id)timeZoneWithName:(id)arg1 data:(id)arg2;
+ (id)timeZoneDataVersion;
+ (void)setAbbreviationDictionary:(id)arg1;
+ (id)knownTimeZoneNames;
+ (id)localTimeZone;
+ (void)setDefaultTimeZone:(id)arg1;
+ (id)defaultTimeZone;
+ (void)resetSystemTimeZone;
+ (id)abbreviationDictionary;
+ (id)systemTimeZone;
+ (id)timeZoneForSecondsFromGMT:(int)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)timeZoneWithAbbreviation:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)ICSQuickTimeZoneNames;
+ (id)calendarTimeZone;

- (id)nextDaylightSavingTimeTransition;
- (double)daylightSavingTimeOffset;
- (BOOL)isDaylightSavingTime;
- (int)secondsFromGMT;
- (id)abbreviation;
- (BOOL)isEqualToTimeZone:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)localizedName:(int)arg1 locale:(id)arg2;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (BOOL)isNSTimeZone__;
- (unsigned long)_cfTypeID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)ICSComputeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;

@end
