/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACAccount;

@interface ACDAccountChange : NSObject  {
    int _changeType;
    ACAccount *_account;
    ACAccount *_oldAccount;
}

@property int changeType;
@property(retain) ACAccount * account;
@property(retain) ACAccount * oldAccount;

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

- (id)oldAccount;
- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;
- (void)setOldAccount:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (int)changeType;
- (void).cxx_destruct;

@end