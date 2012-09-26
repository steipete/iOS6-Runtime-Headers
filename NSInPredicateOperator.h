/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator  {
    unsigned int _flags;
    NSSubstringPredicateOperator *_stringVersion;
}


- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)stringVersion;
- (id)symbol;
- (void)_setOptions:(unsigned int)arg1;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (unsigned int)options;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end