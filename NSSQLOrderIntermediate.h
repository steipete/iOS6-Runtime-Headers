/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSArray;

@interface NSSQLOrderIntermediate : NSSQLIntermediate  {
    NSArray *_sortDescriptors;
}


- (id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2;
- (id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end
