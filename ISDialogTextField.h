/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISDialogTextField : NSObject  {
    int _keyboardType;
    BOOL _secure;
    NSString *_title;
    NSString *_value;
}

@property int keyboardType;
@property(getter=isSecure) BOOL secure;
@property(retain) NSString * title;
@property(retain) NSString * value;

+ (id)textFieldWithTitle:(id)arg1;

- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setSecure:(BOOL)arg1;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg1;
- (BOOL)isSecure;
- (void)setValue:(id)arg1;
- (id)value;

@end
