/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError;

@interface GKResponse : GKInternalRepresentation  {
    double _timeToLive;
    NSError *_error;
    id _result;
}

@property double timeToLive;
@property(retain) NSError * error;
@property(retain) id result;

+ (id)unauthenticatedResponse;
+ (id)codedPropertyKeys;
+ (id)responseWithError:(id)arg1;
+ (id)response;

- (void)setResult:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (double)timeToLive;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)result;
- (id)error;

@end
