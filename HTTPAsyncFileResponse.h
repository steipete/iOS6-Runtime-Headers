/* Generated by RuntimeBrowser.
   Image: /Users/steipete/Library/Application Support/iPhone Simulator/6.0/Applications/169BE991-A55A-4056-B56F-2FCCE879D4E7/OCRuntime.app/OCRuntime
 */

@class HTTPConnection, NSString, NSData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface HTTPAsyncFileResponse : NSObject <HTTPResponse> {
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    unsigned long long readOffset;
    BOOL aborted;
    NSData *data;
    int fileFD;
    void *readBuffer;
    unsigned int readBufferSize;
    unsigned int readBufferOffset;
    unsigned int readRequestLength;
    NSObject<OS_dispatch_queue> *readQueue;
    NSObject<OS_dispatch_source> *readSource;
    BOOL readSourceSuspended;
}


- (void)dealloc;
- (id)filePath;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (BOOL)isAsynchronous;
- (id)readDataOfLength:(unsigned int)arg1;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;
- (void)connectionDidClose;
- (BOOL)isDone;
- (unsigned long long)contentLength;
- (void)cancelReadSource;
- (void)resumeReadSource;
- (BOOL)openFileIfNeeded;
- (BOOL)openFileAndSetupReadSource;
- (void)processReadBuffer;
- (void)abort;
- (void)pauseReadSource;

@end