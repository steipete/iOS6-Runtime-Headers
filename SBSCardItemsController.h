/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString, <SBCardItemsControllerRemoteInterface>;

@interface SBSCardItemsController : NSObject <XPCProxyTarget, SBSCardItemsControllerRemoteInterface> {
    <SBCardItemsControllerRemoteInterface> *_remoteProxy;
    NSString *_identifier;
}


- (id)initWithIdentifier:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)dealloc;
- (void)getCardItemsWithHandler:(id)arg1;
- (void)clearAllCardItems;
- (void)setCardItems:(id)arg1;
- (void)removeCardItems:(id)arg1;
- (void)addCardItems:(id)arg1;

@end
