/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFXPreferencesSearchListSource : CFXPreferencesSource  {
    struct __CFArray { } *_sourceList;
}


- (id)init;
- (void)dealloc;
- (void)removeSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)synchronizeInBackgroundWithCompletionBlock:(id)arg1;
- (void)_removeValueForKey:(struct __CFString { }*)arg1;
- (long)generationCount;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (unsigned char)synchronize;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void*)getValueForKey:(struct __CFString { }*)arg1;

@end
