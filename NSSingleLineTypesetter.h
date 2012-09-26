/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSSingleLineTypesetter : NSATSTypesetter <NSGlyphStorage> {
    float _lineWidth;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _currentBufferRange;
    unsigned int *_glyphBuffer;
    unsigned int *_inscriptionBuffer;
    BOOL *_elasticBuffer;
    struct { 
        unsigned int _usesScreenFonts : 1; 
        unsigned int _reserved : 31; 
    } _slFlags;
}

+ (bool)_validateAttributes:(id)arg1;
+ (id)singleLineTypesetter;
+ (void)initialize;

- (void)deleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)createRenderingContextForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 typesetterBehavior:(int)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 maximumWidth:(float)arg5;
- (void)done;
- (unsigned int)layoutOptions;
- (void)setIntAttribute:(int)arg1 value:(int)arg2 forGlyphAtIndex:(unsigned int)arg3;
- (void)insertGlyphs:(const unsigned int*)arg1 length:(unsigned int)arg2 forStartingGlyphAtIndex:(unsigned int)arg3 characterIndex:(unsigned int)arg4;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withGlyphs:(unsigned int*)arg2;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char *)arg6;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)substituteFontForFont:(id)arg1;
- (id)attributedString;
- (BOOL)_usesScreenFonts;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 withAdvancements:(const float*)arg2 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 baselineOffset:(float)arg4;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 remainingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forStartingGlyphAtIndex:(unsigned int)arg4 proposedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 lineSpacing:(float)arg6 paragraphSpacingBefore:(float)arg7 paragraphSpacingAfter:(float)arg8;
- (id)init;

@end
