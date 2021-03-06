/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSURLRequest, NSString, <WebPluginContainerCheckController>, WebPolicyDecisionListener;

@interface WebPluginContainerCheck : NSObject  {
    NSURLRequest *_request;
    NSString *_target;
    <WebPluginContainerCheckController> *_controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    BOOL _done;
    WebPolicyDecisionListener *_listener;
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;

- (void)_askPolicyDelegate;
- (BOOL)_isForbiddenFileLoad;
- (id)_actionInformationWithURL:(id)arg1;
- (void)_continueWithPolicy:(int)arg1;
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;
- (id)contextInfo;
- (void)dealloc;
- (void)start;
- (void)finalize;
- (void)cancel;

@end
