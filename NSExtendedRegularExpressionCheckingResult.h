/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult  {
    NSRegularExpression *_regularExpression;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _ranges[7];
}


- (void)dealloc;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)rangeArray;
- (id)initWithRanges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned int)arg2 regularExpression:(id)arg3;
- (id)regularExpression;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (unsigned int)numberOfRanges;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
