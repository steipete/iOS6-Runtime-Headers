/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;

@interface NSCompoundPredicate : NSPredicate  {
    void *_reserved2;
    unsigned int _type;
    NSArray *_subpredicates;
}

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)_operatorForType:(unsigned int)arg1;

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)generateMetadataDescription;
- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned int)arg2;
- (id)_subpredicateDescription:(id)arg1;
- (unsigned int)compoundPredicateType;
- (id)subpredicates;
- (id)initWithType:(unsigned int)arg1 subpredicates:(id)arg2;
- (id)_predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)predicateOperator;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)minimalFormInContext:(id)arg1;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (BOOL)ab_hasCallback;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;

@end
