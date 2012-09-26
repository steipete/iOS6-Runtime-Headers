/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableDictionary, NSMutableSet;

@interface ISUniqueOperationContext : NSObject  {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}


- (BOOL)containsOperation:(id)arg1;
- (void)setUniqueOperation:(id)arg1 forKey:(id)arg2;
- (id)uniqueOperationForKey:(id)arg1;
- (unsigned int)countOfOperations;
- (void)removeOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)addOperation:(id)arg1;

@end
