/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned int _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}


- (id)init;
- (void)dealloc;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)setLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (const void*)bytes;
- (unsigned int)length;
- (void)finalize;
- (id)description;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (void)_destroyMemory;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;

@end
