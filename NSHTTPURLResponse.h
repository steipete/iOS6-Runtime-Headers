/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse  {
    NSHTTPURLResponseInternal *_httpInternal;
}

+ (id)localizedStringForStatusCode:(int)arg1;
+ (BOOL)isErrorStatusCode:(int)arg1;

- (void)dealloc;
- (struct __SecTrust { }*)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust { }*)arg1;
- (id)_clientCertificateState;
- (id)_clientCertificateChain;
- (id)allHeaderFields;
- (id)initWithURL:(id)arg1 statusCode:(int)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (id)initWithURL:(id)arg1 statusCode:(int)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)_peerCertificateChain;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (int)statusCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)_maxAge;
- (id)_dateFromExpires;
- (BOOL)_getCacheControlMaxAge:(double*)arg1;
- (double)expirationInterval;
- (BOOL)getAppleMaxAge:(double*)arg1;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (long long)maxExpectedContentLength;
- (id)expirationDate;

@end
