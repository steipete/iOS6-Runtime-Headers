/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSSetM : NSMutableSet  {
    unsigned int _used : 26;
    unsigned int _size;
    unsigned long _mutations;
    id *_objs;
}

+ (id)__new:(const id*)arg1 :(unsigned int)arg2 :(BOOL)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (id)objectEnumerator;
- (void)getObjects:(id*)arg1 count:(unsigned int)arg2;
- (void)_mutate;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)removeObject:(id)arg1;
- (id)member:(id)arg1;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (unsigned int)count;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
