/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, AAAccount;

@interface AAEmailLookupRequest : AARequest  {
    AAAccount *_account;
    NSArray *_emailAddresses;
}

@property(retain) AAAccount * account;
@property(retain) NSArray * emailAddresses;

+ (Class)responseClass;

- (id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3;
- (void)setEmailAddresses:(id)arg1;
- (id)urlCredential;
- (id)initWithAccount:(id)arg1 emailAddresses:(id)arg2;
- (id)urlRequest;
- (id)urlString;
- (id)emailAddresses;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;

@end
