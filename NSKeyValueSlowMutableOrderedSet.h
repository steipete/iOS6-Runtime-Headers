/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet  {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptyOrderedSets;
    BOOL _padding[3];
}

+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)removeObjectsAtIndexes:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1;
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end
