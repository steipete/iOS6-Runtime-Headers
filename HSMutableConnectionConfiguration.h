/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, SSAccount, NSDictionary, NSURL;

@interface HSMutableConnectionConfiguration : HSConnectionConfiguration  {
}

@property(retain) SSAccount * account;
@property(copy) NSDictionary * urlBag;
@property(copy) NSURL * baseURL;
@property(copy) NSString * buildIdentifier;
@property(copy) NSDictionary * cookieHeaders;
@property(copy) NSString * userAgent;


- (void)setUrlBag:(id)arg1;
- (void)setCookieHeaders:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (id)urlBag;
- (id)cookieHeaders;
- (id)buildIdentifier;
- (void)setBaseURL:(id)arg1;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)baseURL;

@end