/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}

@property(readonly) unsigned long long resultType;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;

+ (void)initialize;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 components:(id)arg2;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 phoneNumber:(id)arg2;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2;
+ (id)replacementCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2;
+ (id)dashCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2;
+ (id)quoteCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementString:(id)arg2;
+ (id)linkCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 URL:(id)arg2;
+ (id)addressCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 components:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
+ (id)dateCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2;
+ (id)grammarCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 details:(id)arg2;
+ (id)spellCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 orthography:(id)arg2;

- (unsigned long long)resultType;
- (id)timeZone;
- (id)date;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)underlyingResult;
- (id)phoneNumber;
- (id)regularExpression;
- (id)replacementString;
- (id)addressComponents;
- (double)duration;
- (id)grammarDetails;
- (id)orthography;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })decodeRangeWithCoder:(id)arg1;
- (void)encodeRangeWithCoder:(id)arg1;
- (unsigned int)numberOfRanges;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)URL;
- (id)components;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
