/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSMailDefaultService : MSService  {
    BOOL _shouldLaunch;
}

@property BOOL shouldLaunchMobileMail;


- (void)setShouldLaunchMobileMail:(BOOL)arg1;
- (BOOL)shouldLaunchMobileMail;
- (BOOL)_shouldSimulate;
- (id)_createServiceOnQueue:(id)arg1;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id*)arg4;
- (id)init;

@end
