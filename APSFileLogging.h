/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSFileLogging : NSObject  {
}

+ (id)getMainBundleId;
+ (id)timeFormatter;
+ (id)dateFormatter;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(char *)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)logFileDirectory;
+ (void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 arguments:(char *)arg6;
+ (void)initialize;


@end
