/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSMutableArray, EDResources;

@interface EDConditionalFormattingRule : NSObject  {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned int mDifferentialStyleIndex;
    boolmStopIfTrue;
    int mPriority;
    boolmAboveAverage;
    boolmBottom;
    boolmEqualAverage;
    boolmPercent;
    unsigned int mRank;
    int mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (void)setDifferentialStyleIndex:(unsigned int)arg1;
- (unsigned int)differentialStyleIndex;
- (void)setTimePeriod:(int)arg1;
- (int)timePeriod;
- (void)setStdDev:(int)arg1;
- (int)stdDev;
- (void)setPercent:(bool)arg1;
- (void)setEqualAverage:(bool)arg1;
- (bool)equalAverage;
- (void)setAboveAverage:(bool)arg1;
- (bool)aboveAverage;
- (bool)stopIfTrue;
- (int)operatorEnum;
- (int)compareToOtherRuleUsingPriority:(id)arg1;
- (id)differentialStyle;
- (void)setDifferentialStyle:(id)arg1;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (void)setOperatorEnum:(int)arg1;
- (void)setStopIfTrue:(bool)arg1;
- (id)initWithResources:(id)arg1;
- (id)formulaAtIndex:(unsigned int)arg1;
- (unsigned int)formulaCount;
- (bool)percent;
- (unsigned int)rank;
- (void)setRank:(unsigned int)arg1;
- (void)setBottom:(bool)arg1;
- (bool)bottom;
- (id)text;
- (void)setType:(int)arg1;
- (void)dealloc;
- (void)setText:(id)arg1;
- (void)setPriority:(int)arg1;
- (int)priority;
- (int)type;

@end
