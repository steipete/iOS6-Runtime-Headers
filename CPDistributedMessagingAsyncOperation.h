/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSThread, NSString, NSData, NSDictionary, CPDistributedMessagingCenter, NSError;

@interface CPDistributedMessagingAsyncOperation : NSOperation  {
    CPDistributedMessagingCenter *_center;
    NSString *_name;
    NSData *_userInfoData;
    NSString *_oolKey;
    NSData *_oolData;
    id _target;
    SEL _selector;
    void *_context;
    BOOL _makeServer;
    NSThread *_calloutThread;
    NSDictionary *_reply;
    NSError *_error;
}


- (void)_performCallout;
- (void)_releaseSendingData;
- (id)initWithCenter:(id)arg1 messageName:(id)arg2 userInfoData:(id)arg3 oolKey:(id)arg4 oolData:(id)arg5 target:(id)arg6 selector:(SEL)arg7 context:(void*)arg8 makeServer:(BOOL)arg9;
- (void)dealloc;
- (void)main;

@end
