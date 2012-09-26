/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement  {
}

@property(readonly) int rowIndex;
@property(readonly) int sectionRowIndex;
@property(readonly) DOMHTMLCollection * cells;
@property(copy) NSString * align;
@property(copy) NSString * bgColor;
@property(copy) NSString * ch;
@property(copy) NSString * chOff;
@property(copy) NSString * vAlign;


- (void)deleteCell:(int)arg1;
- (id)insertCell:(int)arg1;
- (id)cells;
- (int)sectionRowIndex;
- (int)rowIndex;
- (void)setVAlign:(id)arg1;
- (id)vAlign;
- (void)setChOff:(id)arg1;
- (id)chOff;
- (void)setCh:(id)arg1;
- (id)ch;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (void)setAlign:(id)arg1;
- (id)align;

@end
