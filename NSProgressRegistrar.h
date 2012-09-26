/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileAccessNode, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {
    NSObject<OS_dispatch_queue> *_queue;
    NSFileAccessNode *_rootFileAccessNode;
    NSMutableDictionary *_publishersAndSubscribersByID;
}


- (void)dealloc;
- (void)finalize;
- (id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2;
- (oneway void)removeSubscriberForID:(id)arg1;
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4;
- (oneway void)removePublisherForID:(id)arg1;
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 fileURL:(id)arg4;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(BOOL)arg4;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
