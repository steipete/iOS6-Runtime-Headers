/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, UIColor, NSArray;

@interface _UIDefinitionService : NSObject <UIWebViewDelegate> {
    NSArray *_dictionaries;
    UIColor *_backgroundColor;
    NSURL *_stylesheetURL;
}

@property(retain) UIColor * backgroundColor;
@property(readonly) NSURL * stylesheetURL;

+ (id)foregroundColor;
+ (id)backgroundColor;

- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (id)init;
- (void)dealloc;
- (id)stylesheetURL;
- (unsigned int)languageDirectionForString:(id)arg1;
- (id)_dictionaryForString:(id)arg1;
- (id)markupForString:(id)arg1;
- (BOOL)hasMarkupForString:(id)arg1;

@end
