/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate  {
    NSSQLWhereIntermediate *_whereClause;
}


- (BOOL)isHavingScoped;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (void)dealloc;

@end
