/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, NSNumber, NSString;

@interface GKComposeRemoteViewController : GKRemoteViewController  {
    GKUITheme *_theme;
    NSNumber *_rid;
    NSString *_defaultMessage;
}

@property(retain) GKUITheme * theme;
@property(retain) NSNumber * rid;
@property(copy) NSString * defaultMessage;


- (id)defaultMessage;
- (id)observedKeyPaths;
- (void)remoteViewControllerIsCanceling;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)remoteViewControllerIsFinishing;
- (void)didRequestFriends:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)setRid:(id)arg1;
- (id)rid;
- (void)setDefaultMessage:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)remoteProtocol;
- (void)dealloc;

@end
