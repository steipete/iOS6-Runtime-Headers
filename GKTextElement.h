/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSAttributedString, NSString, UIColor, UIFont;

@interface GKTextElement : NSObject  {
    BOOL _hidden;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSAttributedString *_highlightedAttributedText;
    UIFont *_font;
    float _minFontSize;
    UIColor *_color;
    UIColor *_highlightedColor;
    int _textAlignment;
    int _lineBreakMode;
    struct CGSize { 
        float width; 
        float height; 
    } _offset;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _lineSpacing;
    UIColor *_shadowColor;
    UIColor *_highlightedShadowColor;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    unsigned int _maxLines;
}

@property BOOL hidden;
@property(retain) NSString * text;
@property(retain) NSAttributedString * attributedText;
@property(retain) NSAttributedString * highlightedAttributedText;
@property(retain) UIFont * font;
@property float minFontSize;
@property(retain) UIColor * color;
@property(retain) UIColor * highlightedColor;
@property(retain) UIColor * highlightedShadowColor;
@property int textAlignment;
@property int lineBreakMode;
@property struct CGSize { float x1; float x2; } offset;
@property struct CGSize { float x1; float x2; } size;
@property int lineSpacing;
@property unsigned int maxLines;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;


- (id)highlightedShadowColor;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2;
- (id)highlightedAttributedText;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2 actualFontSize:(float*)arg3;
- (struct CGSize { float x1; float x2; })sizeForWidth:(float)arg1 maxLineCount:(unsigned int)arg2 actualFontSize:(float*)arg3;
- (void)setHighlightedAttributedText:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForWidth:(float)arg1 maxLineCount:(unsigned int)arg2;
- (unsigned int)maxLines;
- (void)setHighlightedShadowColor:(id)arg1;
- (void)setMaxLines:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setHidden:(BOOL)arg1;
- (id)text;
- (void)setLineSpacing:(int)arg1;
- (void)setLineBreakMode:(int)arg1;
- (int)lineSpacing;
- (int)lineBreakMode;
- (id)font;
- (BOOL)hidden;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (id)color;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (float)minFontSize;
- (void)setMinFontSize:(float)arg1;
- (id)highlightedColor;
- (void)setHighlightedColor:(id)arg1;
- (id)attributedText;
- (void)setColor:(id)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })offset;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;

@end
