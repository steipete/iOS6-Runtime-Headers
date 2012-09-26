/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate>;

@interface CalDAVMkcalendarTask : CoreDAVTask  {
    NSSet *_setElements;
}

@property <CalDAVMkcalendarTaskDelegate><CoreDAVTaskDelegate> * delegate;
@property(retain) NSSet * setElements;


- (void)setSupportForEvents:(BOOL)arg1 tasks:(BOOL)arg2;
- (id)setElements;
- (void)setSetElements:(id)arg1;
- (id)initWithPropertiesToSet:(id)arg1 atURL:(id)arg2;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)description;

@end
