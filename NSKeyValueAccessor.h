/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSKeyValueAccessor : NSObject  {
    id _containerClassID;
    NSString *_key;
    int (*_implementation)();
    SEL _selector;
    unsigned int _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}


- (void)dealloc;
- (SEL)selector;
- (void*)extraArgument2;
- (void*)extraArgument1;
- (unsigned int)extraArgumentCount;
- (id)key;
- (id)containerClassID;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(int (*)())arg3 selector:(SEL)arg4 extraArguments:(void*[3])arg5 count:(unsigned int)arg6;

@end