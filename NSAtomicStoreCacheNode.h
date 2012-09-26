/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject  {
    NSManagedObjectID *_objectID;
    unsigned long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)setPropertyCache:(id)arg1;
- (id)propertyCache;
- (id)_snapshot_;
- (const id*)knownKeyValuesPointer;
- (id)initWithObjectID:(id)arg1;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
- (id)objectID;
- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
