/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject  {
}

+ (unsigned int)_remoteNotificationServerPort;
+ (void)setEnabledNotificationTypes:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)getSupportedTypes:(id*)arg1 enabledTypes:(id*)arg2;
+ (BOOL)hasRegisteredBundleIdentifiers;
+ (void)setSystemwideEnabled:(BOOL)arg1;
+ (BOOL)isSystemwideEnabled;
+ (void)registerForRemoteNotificationTypes:(int)arg1;
+ (int)enabledRemoteNotificationTypes;
+ (id)getPendingNotificationUserInfo;


@end
