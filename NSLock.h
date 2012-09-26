/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)init;
- (void)dealloc;
- (id)name;
- (void)finalize;
- (id)description;
- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)mf_waitForLock;

@end
