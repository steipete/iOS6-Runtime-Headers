/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<TUAppender>, NSString;

@interface TUBasicLogger : NSObject <TULogger> {
    int _lock;
    NSString *_identifier;
    int _minimumLogLevel;
    BOOL _enabled;
    NSObject<TUAppender> *_appender;
}

@property(readonly) NSString * identifier;
@property int minimumLogLevel;
@property BOOL enabled;
@property(readonly) NSObject<TUAppender> * appender;


- (void)flush;
- (void)setEnabled:(BOOL)arg1;
- (id)appender;
- (void)setAppender:(id)arg1;
- (int)minimumLogLevel;
- (void)setMinimumLogLevel:(int)arg1;
- (id)initWithIdentifier:(id)arg1 minimumLogLevel:(int)arg2 appender:(id)arg3;
- (BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (BOOL)shouldLog;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(char *)arg5;
- (BOOL)enabled;
- (BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (id)identifier;

@end
