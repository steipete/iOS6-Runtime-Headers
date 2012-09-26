/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction  {
    int _absoluteOrder;
    NSURL *_priorURL;
}

@property(readonly) int absoluteOrder;
@property(retain) NSURL * priorURL;


- (id)priorURL;
- (int)absoluteOrder;
- (void)setPriorURL:(id)arg1;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;
- (void)dealloc;
- (id)description;

@end
