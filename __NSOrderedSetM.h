/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet  {
    unsigned int _used;
    struct __CFBasicHash { } *_set;
    NSMutableArray *_array;
}

+ (id)__new:(const id*)arg1 :(unsigned int)arg2 :(BOOL)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)dealloc;
- (unsigned int)indexOfObject:(id)arg1;
- (void)_mutate;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)finalize;

@end
