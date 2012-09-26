/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSSQLCore;

@interface NSSQLGenerator : NSObject  {
    NSSQLCore *_persistentStore;
}

+ (void)initialize;

- (id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(BOOL)arg2;
- (id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned int)arg3;
- (id)predicateForFetchRequestInContext:(id)arg1;
- (void)generateIntermediateForOffset:(unsigned int)arg1 inContext:(id)arg2;
- (void)generateIntermediateForLimit:(unsigned int)arg1 inContext:(id)arg2;
- (void)generateOrderIntermediateInContext:(id)arg1;
- (void)generateSelectIntermediateInContext:(id)arg1;
- (void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2;
- (void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2;
- (void)generateWhereIntermediatesInContext:(id)arg1;
- (id)_predicateForSpecificEntity:(id)arg1;
- (id)_predicateRestrictingToSubentitiesForEntity:(id)arg1;
- (id)_predicateRestrictingSuperentitiesForEntity:(id)arg1;
- (id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned int)arg4;
- (id)initWithPersistentStore:(id)arg1;

@end
