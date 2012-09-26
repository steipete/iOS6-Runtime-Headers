/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIImageView, NSString;

@interface LanguageCell : PSTableCell  {
    UIImageView *_languageNameImage;
    NSString *_languageNameText;
}

@property(retain) UIImageView * languageNameImage;
@property(retain) NSString * languageNameText;


- (void)turnOffLanguageNameImage;
- (void)setLanguageNameImage:(id)arg1;
- (void)setLanguageNameText:(id)arg1;
- (id)languageNameText;
- (id)languageNameImage;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setChecked:(BOOL)arg1;

@end
