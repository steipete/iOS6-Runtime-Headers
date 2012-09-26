/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression  {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}


- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)assignmentVariable;
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;
- (id)subexpression;
- (id)variable;
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
