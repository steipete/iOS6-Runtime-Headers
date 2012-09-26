/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSNumber : NSValue  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)parseString:(id)arg1 intoNSUInteger:(unsigned int*)arg2;
+ (BOOL)parseString:(id)arg1 intoNSInteger:(int*)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt64:(unsigned long long*)arg2;
+ (BOOL)parseString:(id)arg1 intoSInt64:(long long*)arg2;
+ (id)boolFromICSString:(id)arg1;
+ (id)numberWithItemIdentifier:(unsigned long long)arg1;
+ (id)_gkServerTimeInterval:(double)arg1;
+ (id)numberWithFloatZero;

- (unsigned long)_cfTypeID;
- (unsigned int)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (float)floatValue;
- (long long)longLongValue;
- (int)intValue;
- (short)shortValue;
- (BOOL)charValue;
- (unsigned int)unsignedIntValue;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (id)stringValue;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
- (BOOL)isNSNumber__;
- (bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (double)doubleValue;
- (int)_reverseCompare:(id)arg1;
- (int)compare:(id)arg1;
- (unsigned char)_getValue:(void*)arg1 forType:(long)arg2;
- (long)_cfNumberType;
- (BOOL)boolValue;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUnsignedInteger:(unsigned int)arg1;
- (id)initWithInteger:(int)arg1;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalValue;
- (id)initWithBool:(BOOL)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithLong:(long)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (BOOL)_allowsDirectEncoding;
- (int)integerValue;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedString;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (void)_ICSFBTypeAppendingToString:(id)arg1;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)initWithItemIdentifier:(unsigned long long)arg1;
- (unsigned long long)itemIdentifierValue;
- (void)MLBindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)MPMediaLibraryDataProviderSystemML3CoercedString;
- (void)appendJsonStringToString:(id)arg1;

@end
