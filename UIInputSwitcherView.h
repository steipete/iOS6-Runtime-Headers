/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSArray;

@interface UIInputSwitcherView : UIKeyboardMenuView  {
    int m_currentInputModeIndex;
    BOOL m_keyboardSettingsFromSwitcher;
    NSMutableArray *m_inputModes;
}

@property(retain) NSArray * inputModes;
@property BOOL keyboardSettingsFromSwitcher;

+ (id)activeInstance;
+ (id)sharedInstance;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)selectPreviousInputMode;
- (void)selectNextInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (id)inputModes;
- (BOOL)keyboardSettingsFromSwitcher;
- (void)setInputModes:(id)arg1;
- (void)setKeyboardSettingsFromSwitcher:(BOOL)arg1;
- (id)subtitleForItemAtIndex:(int)arg1;
- (id)titleForItemAtIndex:(int)arg1;
- (void)didSelectItemAtIndex:(int)arg1;
- (int)defaultSelectedIndex;
- (struct CGSize { float x1; float x2; })preferredSize;
- (void)selectInputMode:(id)arg1;
- (id)nextInputMode;
- (id)previousInputMode;
- (id)selectedInputMode;
- (int)numberOfItems;
- (void)setInputMode:(id)arg1;
- (void)show;

@end
