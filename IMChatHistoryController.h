/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject  {
    NSMutableDictionary *_runningQueries;
}

@property(retain) NSMutableDictionary * _runningQueries;

+ (id)sharedInstance;

- (void)set_runningQueries:(id)arg1;
- (id)_runningQueries;
- (void)loadMessageWithGUID:(id)arg1 completionBlock:(id)arg2;
- (void)databaseNoLongerFull;
- (void)databaseFull;
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;
- (id)init;
- (void)dealloc;

@end
