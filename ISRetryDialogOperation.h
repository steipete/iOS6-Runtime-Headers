/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISRetryDialogOperation : ISDialogOperation  {
    BOOL _shouldRetry;
}

@property BOOL shouldRetry;

+ (id)operationWithTitle:(id)arg1 message:(id)arg2;

- (BOOL)shouldRetry;
- (void)handleButtonSelected:(int)arg1 withResponseDictionary:(id)arg2;
- (void)setShouldRetry:(BOOL)arg1;

@end