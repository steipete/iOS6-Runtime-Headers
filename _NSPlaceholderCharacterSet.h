/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet  {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { 
        unsigned int _inverted : 1; 
        unsigned int _builtin : 1; 
        unsigned int _isCF : 1; 
        unsigned int _reserved : 29; 
    } _flags;
}


- (void)dealloc;
- (BOOL)isEmpty;
- (id)bitmapRepresentation;
- (BOOL)isEqual:(id)arg1;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (id)invertedSet;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (void)_expandInverted;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)initWithSet:(id)arg1 options:(unsigned int)arg2;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
