/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService  {
    NSString *_bundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_notificationNamePrefix;
    NSArray *_mailboxNames;
}

@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * accountIdentifier;
@property(copy) NSString * notificationNamePrefix;
@property(copy) NSArray * mailboxNames;


- (void)setMailboxNames:(id)arg1;
- (id)mailboxNames;
- (void)setNotificationNamePrefix:(id)arg1;
- (id)notificationNamePrefix;
- (void)registerForPush:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)bundleIdentifier;

@end