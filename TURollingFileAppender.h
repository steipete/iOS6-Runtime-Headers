/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSFileHandle, NSString, NSMutableString, NSTimer;

@interface TURollingFileAppender : NSObject <TUAppender> {
    int _lock;
    NSString *_directory;
    NSString *_prefix;
    NSMutableString *_buffer;
    NSFileHandle *_fileHandle;
    NSTimer *_scheduledFlushTimer;
    struct dispatch_queue_s { } *_backgroundQueue;
}

+ (BOOL)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2;

- (void)flush;
- (id)initWithDirectory:(id)arg1 prefix:(id)arg2;
- (void)_reloadFileHandles;
- (void)_scheduleFlush;
- (void)_flush;
- (id)_logFileHandle;
- (void)_rollAndZip;
- (id)_logFilePath;
- (void)_rollAndZipIfNecessary;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)dealloc;

@end
