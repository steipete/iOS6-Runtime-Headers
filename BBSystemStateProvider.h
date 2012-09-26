/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSystemStateProvider : NSObject <XPCProxyTarget> {
    id _serverProxy;
}


- (void)noteOccurrenceOfEvent:(unsigned int)arg1;
- (void)noteChangeOfState:(unsigned int)arg1 newValue:(BOOL)arg2;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)init;
- (void)dealloc;

@end
