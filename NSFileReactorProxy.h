/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSFileAccessNode, NSObject<OS_xpc_object>;

@interface NSFileReactorProxy : NSObject  {
    NSObject<OS_xpc_object> *_client;
    id _reactorID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageSender;

    NSFileAccessNode *_itemLocation;
}


- (void)dealloc;
- (void)finalize;
- (id)description;
- (void)forwardUsingMessageSender:(id)arg1;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
- (id)messageSender;
- (id)reactorID;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2 messageSender:(id)arg3;
- (id)descriptionWithIndenting:(id)arg1;
- (id)client;

@end
