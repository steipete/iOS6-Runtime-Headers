/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<OS_dispatch_queue>;

@interface _UIQueueRedirectingProxy : _UITargetedProxy <XPCProxyTarget> {
    NSObject<OS_dispatch_queue> *_targetQueue;
}

+ (id)proxyForwardingMessagesToObject:(id)arg1 onQueue:(id)arg2;

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)description;
- (BOOL)isBlock;

@end
